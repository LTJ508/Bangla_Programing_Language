
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

  virtual void enterAssignment(BanglaParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(BanglaParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterIfStatement(BanglaParser::IfStatementContext * /*ctx*/) override { }
  virtual void exitIfStatement(BanglaParser::IfStatementContext * /*ctx*/) override { }

  virtual void enterForStatement(BanglaParser::ForStatementContext * /*ctx*/) override { }
  virtual void exitForStatement(BanglaParser::ForStatementContext * /*ctx*/) override { }

  virtual void enterIoStatement(BanglaParser::IoStatementContext * /*ctx*/) override { }
  virtual void exitIoStatement(BanglaParser::IoStatementContext * /*ctx*/) override { }

  virtual void enterFileOperation(BanglaParser::FileOperationContext * /*ctx*/) override { }
  virtual void exitFileOperation(BanglaParser::FileOperationContext * /*ctx*/) override { }

  virtual void enterExpression(BanglaParser::ExpressionContext * /*ctx*/) override { }
  virtual void exitExpression(BanglaParser::ExpressionContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

