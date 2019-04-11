
// Generated from Grammar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "GrammarVisitor.h"


/**
 * This class provides an empty implementation of GrammarVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  GrammarBaseVisitor : public GrammarVisitor {
public:

  virtual antlrcpp::Any visitProg(GrammarParser::ProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitFunc(GrammarParser::FuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPar(GrammarParser::ParContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMinus(GrammarParser::MinusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitMult(GrammarParser::MultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitConst(GrammarParser::ConstContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitVar(GrammarParser::VarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLt(GrammarParser::LtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitEq(GrammarParser::EqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGt(GrammarParser::GtContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitPlus(GrammarParser::PlusContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDiv(GrammarParser::DivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExfunc(GrammarParser::ExfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitGte(GrammarParser::GteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitNeq(GrammarParser::NeqContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitLte(GrammarParser::LteContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDeclvar(GrammarParser::DeclvarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInit(GrammarParser::InitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInitvide(GrammarParser::InitvideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefvar(GrammarParser::DefvarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExecfunc(GrammarParser::ExecfuncContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitBlock(GrammarParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitReturn(GrammarParser::ReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitDefvariable(GrammarParser::DefvariableContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExfuncStatement(GrammarParser::ExfuncStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitExprStatement(GrammarParser::ExprStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitIfStatement(GrammarParser::IfStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInsif(GrammarParser::InsifContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitInselse(GrammarParser::InselseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitRet(GrammarParser::RetContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParamFonction(GrammarParser::ParamFonctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitParamVide(GrammarParser::ParamVideContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypeint(GrammarParser::TypeintContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypechar(GrammarParser::TypecharContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual antlrcpp::Any visitTypevoid(GrammarParser::TypevoidContext *ctx) override {
    return visitChildren(ctx);
  }


};

