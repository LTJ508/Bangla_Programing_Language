
// Generated from Bangla.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "BanglaListener.h"


/**
 * This class provides an empty implementation of BanglaListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  BanglaBaseListener : public BanglaListener {
public:

  virtual void enterProgram(BanglaParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(BanglaParser::ProgramContext * /*ctx*/) override { }

  virtual void enterBlock(BanglaParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(BanglaParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(BanglaParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(BanglaParser::StatementContext * /*ctx*/) override { }

  virtual void enterVariableDeclaration(BanglaParser::VariableDeclarationContext * /*ctx*/) override { }
  virtual void exitVariableDeclaration(BanglaParser::VariableDeclarationContext * /*ctx*/) override { }

  virtual void enterArrayDeclaration(BanglaParser::ArrayDeclarationContext * /*ctx*/) override { }
  virtual void exitArrayDeclaration(BanglaParser::ArrayDeclarationContext * /*ctx*/) override { }

  virtual void enterArrayElementAssignment(BanglaParser::ArrayElementAssignmentContext * /*ctx*/) override { }
  virtual void exitArrayElementAssignment(BanglaParser::ArrayElementAssignmentContext * /*ctx*/) override { }

  virtual void enterArrayIndex(BanglaParser::ArrayIndexContext * /*ctx*/) override { }
  virtual void exitArrayIndex(BanglaParser::ArrayIndexContext * /*ctx*/) override { }

  virtual void enterArrayElementAccess(BanglaParser::ArrayElementAccessContext * /*ctx*/) override { }
  virtual void exitArrayElementAccess(BanglaParser::ArrayElementAccessContext * /*ctx*/) override { }

  virtual void enterArraySizeAccess(BanglaParser::ArraySizeAccessContext * /*ctx*/) override { }
  virtual void exitArraySizeAccess(BanglaParser::ArraySizeAccessContext * /*ctx*/) override { }

  virtual void enterAssignmentStatement(BanglaParser::AssignmentStatementContext * /*ctx*/) override { }
  virtual void exitAssignmentStatement(BanglaParser::AssignmentStatementContext * /*ctx*/) override { }

  virtual void enterInitialization(BanglaParser::InitializationContext * /*ctx*/) override { }
  virtual void exitInitialization(BanglaParser::InitializationContext * /*ctx*/) override { }

  virtual void enterIncrementStatement(BanglaParser::IncrementStatementContext * /*ctx*/) override { }
  virtual void exitIncrementStatement(BanglaParser::IncrementStatementContext * /*ctx*/) override { }

  virtual void enterDecrementStatement(BanglaParser::DecrementStatementContext * /*ctx*/) override { }
  virtual void exitDecrementStatement(BanglaParser::DecrementStatementContext * /*ctx*/) override { }

  virtual void enterPrintStatement(BanglaParser::PrintStatementContext * /*ctx*/) override { }
  virtual void exitPrintStatement(BanglaParser::PrintStatementContext * /*ctx*/) override { }

  virtual void enterPrintArguments(BanglaParser::PrintArgumentsContext * /*ctx*/) override { }
  virtual void exitPrintArguments(BanglaParser::PrintArgumentsContext * /*ctx*/) override { }

  virtual void enterIfStatement(BanglaParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(BanglaParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(BanglaParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(BanglaParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterCondition(BanglaParser::ConditionContext * /*ctx*/) override { }
  virtual void exitCondition(BanglaParser::ConditionContext * /*ctx*/) override { }

  virtual void enterExpression(BanglaParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(BanglaParser::ExpressionContext * /*ctx*/) override { }

  virtual void enterOperand(BanglaParser::OperandContext * /*ctx*/) override { }
  virtual void exitOperand(BanglaParser::OperandContext * /*ctx*/) override { }

  virtual void enterComparisonOperator(BanglaParser::ComparisonOperatorContext * /*ctx*/) override { }
  virtual void exitComparisonOperator(BanglaParser::ComparisonOperatorContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

