
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

  virtual void enterAssignment(BanglaParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(BanglaParser::AssignmentContext *ctx) = 0;

  virtual void enterIfStatement(BanglaParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(BanglaParser::IfStatementContext *ctx) = 0;

  virtual void enterForStatement(BanglaParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(BanglaParser::ForStatementContext *ctx) = 0;

  virtual void enterIoStatement(BanglaParser::IoStatementContext *ctx) = 0;
  virtual void exitIoStatement(BanglaParser::IoStatementContext *ctx) = 0;

  virtual void enterFileOperation(BanglaParser::FileOperationContext *ctx) = 0;
  virtual void exitFileOperation(BanglaParser::FileOperationContext *ctx) = 0;

  virtual void enterExpression(BanglaParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(BanglaParser::ExpressionContext *ctx) = 0;


};

