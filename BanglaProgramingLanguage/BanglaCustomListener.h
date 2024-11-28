#ifndef BANGLACUSTOMLISTENER_H
#define BANGLACUSTOMLISTENER_H

#include "ANTLR_Generated/BanglaBaseListener.h"
#include <unordered_map>
#include <string>
#include <iostream>
#include <stdexcept>
#include <locale>
#include <codecvt>

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
std::string convertEnglishToBangla(int number) {
    std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
    std::wstring wideBanglaNumber;
    std::wstring wideEnglishNumber = converter.from_bytes(std::to_string(number));

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
    std::unordered_map<std::string, int> variables;

    void exitVariableDeclaration(BanglaParser::VariableDeclarationContext *ctx) override {
        std::string varName = ctx->ID()->getText();
        std::string valueStr = ctx->NUMBER()->getText();
        try {
            std::string englishValueStr = convertBanglaToEnglish(valueStr);
            int value = std::stoi(englishValueStr);
            variables[varName] = value;
        } catch (const std::invalid_argument& e) {
            std::cerr << "Error: Invalid number format for variable " << varName << ": " << valueStr << std::endl;
        } catch (const std::out_of_range& e) {
            std::cerr << "Error: Number out of range for variable " << varName << ": " << valueStr << std::endl;
        }
    }

    void exitPrintStatement(BanglaParser::PrintStatementContext *ctx) override {
        std::string varName = ctx->ID()->getText();
        if (variables.find(varName) != variables.end()) {
            std::string banglaValueStr = convertEnglishToBangla(variables[varName]);
            std::cout << banglaValueStr << std::endl;
        } else {
            std::cerr << "Error: Variable " << varName << " not defined." << std::endl;
        }
    }
};

#endif // BANGLACUSTOMLISTENER_H