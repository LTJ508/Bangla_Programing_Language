#ifndef BANGLACUSTOMLISTENER_H
#define BANGLACUSTOMLISTENER_H

#include "ANTLR_Generated/BanglaBaseListener.h"
#include <unordered_map>
#include <string>
#include <iostream>
#include <stdexcept>
#include <locale>
#include <codecvt>
#include <variant>

using VariableValue = std::variant<int, double>;
bool debug = false;

// Helper function to convert Bangla numerals to English numerals
std::string convertBanglaToEnglish(const std::string& banglaNumber) {
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    std::wstring wideBanglaNumber = converter.from_bytes(banglaNumber);
    std::wstring wideEnglishNumber;

    for (wchar_t c : wideBanglaNumber) {
        if (c >= L'০' && c <= L'৯') {
            wideEnglishNumber += (c - L'০' + L'0');
        } else {
            wideEnglishNumber += c;
        }
    }

    return converter.to_bytes(wideEnglishNumber);
}

// Helper function to convert English numerals to Bangla numerals
std::string convertEnglishToBangla(const std::string& number) {
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    std::wstring wideBanglaNumber;
    std::wstring wideEnglishNumber = converter.from_bytes(number);

    for (wchar_t c : wideEnglishNumber) {
        if (c >= L'0' && c <= L'9') {
            wideBanglaNumber += (c - L'0' + L'০');
        } else {
            wideBanglaNumber += c;
        }
    }

    return converter.to_bytes(wideBanglaNumber);
}

class BanglaCustomListener : public BanglaBaseListener {
public:
    std::unordered_map<std::string, VariableValue> variables;
    bool executeCurrentBlock = true; // Flag to control block execution
    std::vector<bool> executionStack; // Stack to manage nested block execution states

    void enterIfStatement(BanglaParser::IfStatementContext *ctx) override {
        executionStack.push_back(executeCurrentBlock);
        executeCurrentBlock = false;
    }

    void exitIfStatement(BanglaParser::IfStatementContext *ctx) override {
        bool conditionMet = false;

        // Check the main if condition
        if (evaluateCondition(ctx->condition(0))) {
            executeCurrentBlock = true;
            executeBlock(ctx->block(0));
            conditionMet = true;
        } else {
            // Check else-if conditions
            for (size_t i = 0; i < ctx->ELSE_IF().size(); ++i) {
                if (evaluateCondition(ctx->condition(i + 1))) {
                    executeCurrentBlock = true;
                    executeBlock(ctx->block(i + 1));
                    conditionMet = true;
                    break;
                }
            }
        }

        // Check else condition if no previous condition was met
        if (!conditionMet && ctx->ELSE()) {
            executeCurrentBlock = true;
            executeBlock(ctx->block(ctx->block().size() - 1));
        }

        executeCurrentBlock = executionStack.back(); // Restore the previous execution state
        executionStack.pop_back();
    }

// void exitIfStatement(BanglaParser::IfStatementContext *ctx) override {
//     bool conditionMet = false;

//     std::cout << "Debug => Entering if-statement" << std::endl;

//     // Check the main if condition
//     if (evaluateCondition(ctx->condition(0))) {
//         std::cout << "Debug => Main if condition met" << std::endl;
//         executeCurrentBlock = true;
//         executeBlock(ctx->block(0));
//         conditionMet = true;
//     } else {
//         // Check else-if conditions
//         for (size_t i = 0; i < ctx->ELSE_IF().size(); ++i) {
//             if (evaluateCondition(ctx->condition(i + 1))) {
//                 std::cout << "Debug => Else-if condition " << i + 1 << " met" << std::endl;
//                 executeCurrentBlock = true;
//                 executeBlock(ctx->block(i + 1));
//                 conditionMet = true;
//                 break;
//             }
//         }
//     }

//     // Check else condition if no previous condition was met
//     if (!conditionMet && ctx->ELSE()) {
//         std::cout << "Debug => Else condition met" << std::endl;
//         executeCurrentBlock = true;
//         executeBlock(ctx->block(ctx->block().size() - 1));
//     }

//     // Restore the previous execution state
//     executeCurrentBlock = executionStack.back();
//     executionStack.pop_back();

//     std::cout << "Debug => Exiting if-statement" << std::endl;
// }


    void exitVariableDeclaration(BanglaParser::VariableDeclarationContext *ctx) override {
        if (!executeCurrentBlock) return;

        std::string varName = ctx->ID()->getText();
        std::string valueStr;
        if (ctx->FLOAT()) {
            valueStr = ctx->FLOAT()->getText();
        } else if (ctx->INT()) {
            valueStr = ctx->INT()->getText();
        }

        try {
            if (ctx->FLOAT()) {
                std::string englishValueStr = convertBanglaToEnglish(valueStr);
                double value = std::stod(englishValueStr);
                variables[varName] = value;
            } else if (ctx->INT()) {
                std::string englishValueStr = convertBanglaToEnglish(valueStr);
                int value = std::stoi(englishValueStr);
                variables[varName] = value;
            }
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: Invalid number format for variable " << varName << ": " << valueStr << std::endl;
        } catch (const std::out_of_range& e) {
            std::cerr << "Error: Number out of range for variable " << varName << ": " << valueStr << std::endl;
        }
    }

    void exitPrintStatement(BanglaParser::PrintStatementContext *ctx) override {
        if (!executeCurrentBlock) return;

        for (auto arg : ctx->printArguments()->children) {
            if (auto terminalNode = dynamic_cast<antlr4::tree::TerminalNode*>(arg)) {
                if (terminalNode->getSymbol()->getType() == BanglaParser::ID) {
                    std::string varName = terminalNode->getText();
                    if (variables.find(varName) != variables.end()) {
                        std::string banglaValueStr;
                        if (std::holds_alternative<int>(variables[varName])) {
                            banglaValueStr = convertEnglishToBangla(std::to_string(std::get<int>(variables[varName])));
                        } else if (std::holds_alternative<double>(variables[varName])) {
                            banglaValueStr = convertEnglishToBangla(std::to_string(std::get<double>(variables[varName])));
                        }
                        std::cout << banglaValueStr;
                    } else {
                        std::cerr << "Error: Variable " << varName << " not defined." << std::endl;
                    }
                } else if (terminalNode->getSymbol()->getType() == BanglaParser::STRING) {
                    std::string text = terminalNode->getText();
                    // Remove the surrounding quotes from the string literal
                    text = text.substr(1, text.length() - 2);
                    std::cout << text;
                } else if (terminalNode->getSymbol()->getType() == BanglaParser::NATUN_LINE) {
                    std::cout << std::endl;
                }
            }
        }
    }

private:
    bool evaluateCondition(BanglaParser::ConditionContext *ctx) {
        double leftValue = getOperandValue(ctx->operand(0));
        double rightValue = getOperandValue(ctx->operand(1));

        std::string op = ctx->comparisonOperator()->getText();
        bool result = false;

        if (op == ">=") {
            result = leftValue >= rightValue;
        } else if (op == "<=") {
            result = leftValue <= rightValue;
        } else if (op == ">") {
            result = leftValue > rightValue;
        } else if (op == "<") {
            result = leftValue < rightValue;
        } else if (op == "==") {
            result = leftValue == rightValue;
        } else if (op == "!=") {
            result = leftValue != rightValue;
        }

        // Debug output
        if (debug) {
            std::cout << "Debug => Evaluating condition: " << leftValue << " " << op << " " << rightValue << " -> " << (result ? "true" : "false") << std::endl;
        }

        return result;
    }

    double getOperandValue(BanglaParser::OperandContext *ctx) {
        if (ctx->ID()) {
            std::string varName = ctx->ID()->getText();
            if (variables.find(varName) == variables.end()) {
                std::cerr << "Error: Variable " << varName << " not defined." << std::endl;
                throw std::runtime_error("Undefined variable");
            }
            if (std::holds_alternative<int>(variables[varName])) {
                return std::get<int>(variables[varName]);
            } else if (std::holds_alternative<double>(variables[varName])) {
                return std::get<double>(variables[varName]);
            }
        } else if (ctx->INT()) {
            std::string valueStr = ctx->INT()->getText();
            std::string englishValueStr = convertBanglaToEnglish(valueStr);
            return std::stoi(englishValueStr);
        } else if (ctx->FLOAT()) {
            std::string valueStr = ctx->FLOAT()->getText();
            std::string englishValueStr = convertBanglaToEnglish(valueStr);
            return std::stod(englishValueStr);
        }
        return 0;
    }

    void executeBlock(BanglaParser::BlockContext *ctx) {
        bool previousExecuteCurrentBlock = executeCurrentBlock;
        executeCurrentBlock = true;

        for (auto statement : ctx->statement()) {
            if (debug) {
                std::cout << "Debug => Processing statement: " << statement->getText() << std::endl;
            }

            // Process specific child types of the statement
            if (statement->variableDeclaration()) {
                exitVariableDeclaration(statement->variableDeclaration());
            } else if (statement->printStatement()) {
                exitPrintStatement(statement->printStatement());
            } else if (statement->ifStatement()) {
                exitIfStatement(statement->ifStatement());
            } else {
                std::cerr << "Error: Unknown statement type. Text: " << statement->getText() << std::endl;
                std::cerr << "Node class: " << typeid(*statement).name() << std::endl;
            }
        }

        executeCurrentBlock = previousExecuteCurrentBlock;
    }

};

#endif // BANGLACUSTOMLISTENER_H
