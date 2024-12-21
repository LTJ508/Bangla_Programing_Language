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

using VariableValue = std::variant<int, double, std::string>;
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

// Helper function to perform arithmetic operations on variants
template <typename T>
VariableValue performOperation(const VariableValue& left, const VariableValue& right, T op) {
    return std::visit([&](auto&& a, auto&& b) -> VariableValue {
        using A = std::decay_t<decltype(a)>;
        using B = std::decay_t<decltype(b)>;
        if constexpr (std::is_same_v<A, B>) {
            if constexpr (std::is_same_v<A, std::string>) {
                throw std::runtime_error("Unsupported operation for strings");
            } else {
                return op(a, b);
            }
        } else if constexpr (std::is_same_v<A, int> && std::is_same_v<B, double>) {
            return op(static_cast<double>(a), b);
        } else if constexpr (std::is_same_v<A, double> && std::is_same_v<B, int>) {
            return op(a, static_cast<double>(b));
        } else {
            throw std::runtime_error("Unsupported operand types");
        }
    }, left, right);
}

class BanglaCustomListener : public BanglaBaseListener {
public:
    std::unordered_map<std::string, VariableValue> variables;
    bool executeCurrentBlock = true; // Flag to control block execution
    std::vector<bool> executionStack; // Stack to manage nested block execution states
    int countNestedIfElse = 0; // Variable to count nested if-else statements
    int countNestedForLoop = 0; // Variable to count nested for loops

    // Variable Declaration
    void exitVariableDeclaration(BanglaParser::VariableDeclarationContext *ctx) override {
        if (!executeCurrentBlock) return;

        std::string varName = ctx->ID()->getText();
        VariableValue value;

        if (ctx->expression()) {
            value = evaluateExpression(ctx->expression());
        } else {
            value = 0; // Default value for uninitialized variables
        }

        variables[varName] = value;

        if (debug) {
            std::cout << "Debug => Variable declared: " << varName << " = " 
                    << std::visit([](auto&& arg) -> std::string {
                            using T = std::decay_t<decltype(arg)>;
                            if constexpr (std::is_same_v<T, int> || std::is_same_v<T, double>) {
                                return std::to_string(arg);
                            } else if constexpr (std::is_same_v<T, std::string>) {
                                return arg;
                            } else {
                                return "Unsupported type";
                            }
                        }, value) 
                    << std::endl;
        }
    }

    // Initialization
    void exitInitialization(BanglaParser::InitializationContext *ctx) {
        exitAssignmentStatement(ctx->assignmentStatement());
    }
    
    // Assignment Statement
    void exitAssignmentStatement(BanglaParser::AssignmentStatementContext *ctx) override {
        if (!executeCurrentBlock) return;

        std::string varName = ctx->ID()->getText();
        VariableValue value = evaluateExpression(ctx->expression());

        if (variables.find(varName) != variables.end()) {
            variables[varName] = value;
        } else {
            throw std::runtime_error("Undefined variable: " + varName);
        }

        if (debug) {
            std::cout << "Debug => Variable assigned: " << varName << " = " 
                    << std::visit([](auto&& arg) -> std::string {
                            using T = std::decay_t<decltype(arg)>;
                            if constexpr (std::is_same_v<T, int> || std::is_same_v<T, double>) {
                                return std::to_string(arg);
                            } else if constexpr (std::is_same_v<T, std::string>) {
                                return arg;
                            } else {
                                return "Unsupported type";
                            }
                        }, value) 
                    << std::endl;
        }
    }

    // Increment Statements
void exitIncrementStatement(BanglaParser::IncrementStatementContext *ctx) override {
    if (!executeCurrentBlock) return;

    std::string varName = ctx->ID()->getText();

    if (variables.find(varName) != variables.end()) {
        if (std::holds_alternative<int>(variables[varName])) {
            variables[varName] = std::get<int>(variables[varName]) + 1;
        } else if (std::holds_alternative<double>(variables[varName])) {
            variables[varName] = std::get<double>(variables[varName]) + 1.0;
        } else if (std::holds_alternative<std::string>(variables[varName])) {
            std::cerr << "Warning: Cannot increment a string variable: " << varName << std::endl;
        }
    } else {
        throw std::runtime_error("Undefined variable: " + varName);
    }

    if (debug) {
        std::cout << "Debug => Variable incremented: " << varName << " = " 
                  << std::visit([](auto&& arg) -> std::string {
                        using T = std::decay_t<decltype(arg)>;
                        if constexpr (std::is_same_v<T, int> || std::is_same_v<T, double>) {
                            return std::to_string(arg);
                        } else if constexpr (std::is_same_v<T, std::string>) {
                            return arg;
                        } else {
                            return "Unsupported type";
                        }
                    }, variables[varName]) 
                  << std::endl;
    }
}

    // Decrement Statements
void exitDecrementStatement(BanglaParser::DecrementStatementContext *ctx) override {
    if (!executeCurrentBlock) return;

    std::string varName = ctx->ID()->getText();

    if (variables.find(varName) != variables.end()) {
        if (std::holds_alternative<int>(variables[varName])) {
            variables[varName] = std::get<int>(variables[varName]) - 1;
        } else if (std::holds_alternative<double>(variables[varName])) {
            variables[varName] = std::get<double>(variables[varName]) - 1.0;
        } else if (std::holds_alternative<std::string>(variables[varName])) {
            std::cerr << "Warning: Cannot decrement a string variable: " << varName << std::endl;
        }
    } else {
        throw std::runtime_error("Undefined variable: " + varName);
    }

    if (debug) {
        std::cout << "Debug => Variable decremented: " << varName << " = " 
                  << std::visit([](auto&& arg) -> std::string {
                        using T = std::decay_t<decltype(arg)>;
                        if constexpr (std::is_same_v<T, int> || std::is_same_v<T, double>) {
                            return std::to_string(arg);
                        } else if constexpr (std::is_same_v<T, std::string>) {
                            return arg;
                        } else {
                            return "Unsupported type";
                        }
                    }, variables[varName]) 
                  << std::endl;
    }
}

    // Print Statement
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
                        } else if (std::holds_alternative<std::string>(variables[varName])) {
                            banglaValueStr = std::get<std::string>(variables[varName]);
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

    // Enter If Statement
    void enterIfStatement(BanglaParser::IfStatementContext *ctx) override {
        executionStack.push_back(executeCurrentBlock);
        executeCurrentBlock = false;
        countNestedIfElse++; // Increment count when entering an if statement
        if (debug) {
            std::cout << "Debug => Entered If Statement-Count: " << countNestedIfElse << std::endl;
        }
    }

    // Exit If Statement
    void exitIfStatement(BanglaParser::IfStatementContext *ctx) override {
        countNestedIfElse--; // Decrement count when exiting an if statement

        if (debug) {
            std::cout << "Debug => Exit If Statement-Count: " << countNestedIfElse << std::endl;
        }

        if (countNestedIfElse > 0) {
            // Restore the previous execution state
            if (!executionStack.empty()) {
                executeCurrentBlock = executionStack.back();
                executionStack.pop_back();
            }
            return; // Exit if nested
        }

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

        // Restore the previous execution state
        if (!executionStack.empty()) {
            executeCurrentBlock = executionStack.back();
            executionStack.pop_back();
        }

        if (debug) {
            std::cout << "Debug => If Statement exited-executionCurrentBlock: " << executeCurrentBlock << std::endl;
            std::cout << "Debug => If Statement exited-executionCurrentBlock-Size: " << executionStack.size() << std::endl;
        }
    }

    // Enter For Statement
    void enterForStatement(BanglaParser::ForStatementContext *ctx) override {
        // Preserve the current execution state
        executionStack.push_back(executeCurrentBlock);
        executeCurrentBlock = false;
        countNestedForLoop++; // Increment count when entering a for loop
        if (debug) {
            std::cout << "Debug => Entered For Statement-Count: " << countNestedForLoop << std::endl;
        }
    }

    // Exit For Statement
    void exitForStatement(BanglaParser::ForStatementContext *ctx) override {
        countNestedForLoop--; // Decrement count when exiting a for loop

        if (debug) {
            std::cout << "Debug => Exit For Statement-Count: " << countNestedForLoop << std::endl;
        }

        if (countNestedForLoop > 0) {
            // Restore the previous execution state
            if (!executionStack.empty()) {
                executeCurrentBlock = executionStack.back();
                executionStack.pop_back();
            }
            return; // Exit if nested
        }

        executeCurrentBlock = true; // Enable block execution for the loop body

        // Initialize the loop variable
        if (ctx->variableDeclaration()) {
            exitVariableDeclaration(ctx->variableDeclaration());
        } else if (ctx->initialization()) {
            exitAssignmentStatement(ctx->initialization()->assignmentStatement());
        }

        // Check the loop condition
        while (evaluateCondition(ctx->condition())) {
            // Execute the loop body
            executeBlock(ctx->block());

            // Update the loop variable
            if (ctx->incrementStatement()) {
                exitIncrementStatement(ctx->incrementStatement());
            } else if (ctx->decrementStatement()) {
                exitDecrementStatement(ctx->decrementStatement());
            } else if (ctx->assignmentStatement()) {
                exitAssignmentStatement(ctx->assignmentStatement());
            }
        }

        // Restore the previous execution state
        if (!executionStack.empty()) {
            executeCurrentBlock = executionStack.back();
            executionStack.pop_back();
        }

        if (debug) {
            std::cout << "Debug => For Statement exited-executionCurrentBlock: " << executeCurrentBlock << std::endl;
            std::cout << "Debug => For Statement exited-executionCurrentBlock-Size: " << executionStack.size() << std::endl;
        }
    }









// New Code






































private:

    // Helper functions for evaluating expressions and conditions
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

    // Evaluate the condition
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

    // Evaluate the expression
    VariableValue evaluateExpression(BanglaParser::ExpressionContext *ctx) {
        try {
            if (ctx->INT()) {
                std::string valueStr = ctx->INT()->getText();
                std::string englishValueStr = convertBanglaToEnglish(valueStr);
                return std::stoi(englishValueStr);
            } else if (ctx->FLOAT()) {
                std::string valueStr = ctx->FLOAT()->getText();
                std::string englishValueStr = convertBanglaToEnglish(valueStr);
                return std::stod(englishValueStr);
            } else if (ctx->ID()) {
                std::string varName = ctx->ID()->getText();
                if (variables.find(varName) != variables.end()) {
                    return variables[varName];
                } else {
                    throw std::runtime_error("Undefined variable: " + varName);
                }
            } else if (ctx->STRING()) {
                std::string text = ctx->STRING()->getText();
                text = text.substr(1, text.length() - 2); // Remove quotes
                return text;
            } else if (ctx->expression().size() == 1) {
                return evaluateExpression(ctx->expression(0));
            } else if (ctx->expression().size() == 2) {
                VariableValue left = evaluateExpression(ctx->expression(0));
                VariableValue right = evaluateExpression(ctx->expression(1));
                std::string op = ctx->children[1]->getText();

                if (op == "+") {
                    return performOperation(left, right, std::plus<>());
                } else if (op == "-") {
                    return performOperation(left, right, std::minus<>());
                } else if (op == "*") {
                    return performOperation(left, right, std::multiplies<>());
                } else if (op == "/") {
                    return performOperation(left, right, std::divides<>());
                }
            }
        } catch (const std::invalid_argument& e) {
            std::cerr << "Invalid argument: " << e.what() << std::endl;
            throw;
        } catch (const std::out_of_range& e) {
            std::cerr << "Out of range: " << e.what() << std::endl;
            throw;
        }

        throw std::runtime_error("Invalid expression");
    }

    // Execute the block
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
            } else if (statement->arrayDeclaration()) {
                exitArrayDeclaration(statement->arrayDeclaration());
            } else if (statement->arrayElementAssignment()) {
                exitArrayElementAssignment(statement->arrayElementAssignment());
            } else if (statement->assignmentStatement()) {
                exitAssignmentStatement(statement->assignmentStatement());
            } else if (statement->incrementStatement()) {
                exitIncrementStatement(statement->incrementStatement());
            } else if (statement->decrementStatement()) {
                exitDecrementStatement(statement->decrementStatement());
            } else if (statement->printStatement()) {
                exitPrintStatement(statement->printStatement());
            } else if (statement->ifStatement()) {
                countNestedIfElse++;
                exitIfStatement(statement->ifStatement());
            } else if (statement->forStatement()) {
                countNestedForLoop++;
                exitForStatement(statement->forStatement());
            } else {
                std::cerr << "Error: Unknown statement type. Text: " << statement->getText() << std::endl;
                std::cerr << "Node class: " << typeid(*statement).name() << std::endl;
            }
        }

        executeCurrentBlock = previousExecuteCurrentBlock;
    }
};

#endif // BANGLACUSTOMLISTENER_H
