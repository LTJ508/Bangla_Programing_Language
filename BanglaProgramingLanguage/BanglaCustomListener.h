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

    void exitVariableDeclaration(BanglaParser::VariableDeclarationContext *ctx) override {
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
};

#endif // BANGLACUSTOMLISTENER_H