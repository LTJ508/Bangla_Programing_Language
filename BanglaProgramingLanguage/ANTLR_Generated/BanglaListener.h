
// Generated from Bangla.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "BanglaParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by BanglaParser.
 */
class  BanglaListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(BanglaParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(BanglaParser::ProgramContext *ctx) = 0;

  virtual void enterBlock(BanglaParser::BlockContext *ctx) = 0;
  virtual void exitBlock(BanglaParser::BlockContext *ctx) = 0;

  virtual void enterStatement(BanglaParser::StatementContext *ctx) = 0;
  virtual void exitStatement(BanglaParser::StatementContext *ctx) = 0;

  virtual void enterVariableDeclaration(BanglaParser::VariableDeclarationContext *ctx) = 0;
  virtual void exitVariableDeclaration(BanglaParser::VariableDeclarationContext *ctx) = 0;

  virtual void enterPrintStatement(BanglaParser::PrintStatementContext *ctx) = 0;
  virtual void exitPrintStatement(BanglaParser::PrintStatementContext *ctx) = 0;

  virtual void enterPrintArguments(BanglaParser::PrintArgumentsContext *ctx) = 0;
  virtual void exitPrintArguments(BanglaParser::PrintArgumentsContext *ctx) = 0;


};

