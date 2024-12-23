
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

  virtual void enterArrayDeclaration(BanglaParser::ArrayDeclarationContext *ctx) = 0;
  virtual void exitArrayDeclaration(BanglaParser::ArrayDeclarationContext *ctx) = 0;

  virtual void enterArrayElementAssignment(BanglaParser::ArrayElementAssignmentContext *ctx) = 0;
  virtual void exitArrayElementAssignment(BanglaParser::ArrayElementAssignmentContext *ctx) = 0;

  virtual void enterArrayIndex(BanglaParser::ArrayIndexContext *ctx) = 0;
  virtual void exitArrayIndex(BanglaParser::ArrayIndexContext *ctx) = 0;

  virtual void enterArrayElementAccess(BanglaParser::ArrayElementAccessContext *ctx) = 0;
  virtual void exitArrayElementAccess(BanglaParser::ArrayElementAccessContext *ctx) = 0;

  virtual void enterArraySizeAccess(BanglaParser::ArraySizeAccessContext *ctx) = 0;
  virtual void exitArraySizeAccess(BanglaParser::ArraySizeAccessContext *ctx) = 0;

  virtual void enterAssignmentStatement(BanglaParser::AssignmentStatementContext *ctx) = 0;
  virtual void exitAssignmentStatement(BanglaParser::AssignmentStatementContext *ctx) = 0;

  virtual void enterInitialization(BanglaParser::InitializationContext *ctx) = 0;
  virtual void exitInitialization(BanglaParser::InitializationContext *ctx) = 0;

  virtual void enterIncrementStatement(BanglaParser::IncrementStatementContext *ctx) = 0;
  virtual void exitIncrementStatement(BanglaParser::IncrementStatementContext *ctx) = 0;

  virtual void enterDecrementStatement(BanglaParser::DecrementStatementContext *ctx) = 0;
  virtual void exitDecrementStatement(BanglaParser::DecrementStatementContext *ctx) = 0;

  virtual void enterPrintStatement(BanglaParser::PrintStatementContext *ctx) = 0;
  virtual void exitPrintStatement(BanglaParser::PrintStatementContext *ctx) = 0;

  virtual void enterPrintArguments(BanglaParser::PrintArgumentsContext *ctx) = 0;
  virtual void exitPrintArguments(BanglaParser::PrintArgumentsContext *ctx) = 0;

  virtual void enterFileOperations(BanglaParser::FileOperationsContext *ctx) = 0;
  virtual void exitFileOperations(BanglaParser::FileOperationsContext *ctx) = 0;

  virtual void enterFileDeclaration(BanglaParser::FileDeclarationContext *ctx) = 0;
  virtual void exitFileDeclaration(BanglaParser::FileDeclarationContext *ctx) = 0;

  virtual void enterFileAssignment(BanglaParser::FileAssignmentContext *ctx) = 0;
  virtual void exitFileAssignment(BanglaParser::FileAssignmentContext *ctx) = 0;

  virtual void enterFileRead(BanglaParser::FileReadContext *ctx) = 0;
  virtual void exitFileRead(BanglaParser::FileReadContext *ctx) = 0;

  virtual void enterFileWrite(BanglaParser::FileWriteContext *ctx) = 0;
  virtual void exitFileWrite(BanglaParser::FileWriteContext *ctx) = 0;

  virtual void enterFileClose(BanglaParser::FileCloseContext *ctx) = 0;
  virtual void exitFileClose(BanglaParser::FileCloseContext *ctx) = 0;

  virtual void enterIfStatement(BanglaParser::IfStatementContext *ctx) = 0;
  virtual void exitIfStatement(BanglaParser::IfStatementContext *ctx) = 0;

  virtual void enterForStatement(BanglaParser::ForStatementContext *ctx) = 0;
  virtual void exitForStatement(BanglaParser::ForStatementContext *ctx) = 0;

  virtual void enterCondition(BanglaParser::ConditionContext *ctx) = 0;
  virtual void exitCondition(BanglaParser::ConditionContext *ctx) = 0;

  virtual void enterExpression(BanglaParser::ExpressionContext *ctx) = 0;
  virtual void exitExpression(BanglaParser::ExpressionContext *ctx) = 0;

  virtual void enterOperand(BanglaParser::OperandContext *ctx) = 0;
  virtual void exitOperand(BanglaParser::OperandContext *ctx) = 0;

  virtual void enterComparisonOperator(BanglaParser::ComparisonOperatorContext *ctx) = 0;
  virtual void exitComparisonOperator(BanglaParser::ComparisonOperatorContext *ctx) = 0;


};

