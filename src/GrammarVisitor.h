
// Generated from Grammar.g4 by ANTLR 4.7.2

#pragma once


#include "antlr4-runtime.h"
#include "GrammarParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by GrammarParser.
 */
class  GrammarVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by GrammarParser.
   */
    virtual antlrcpp::Any visitProg(GrammarParser::ProgContext *context) = 0;

    virtual antlrcpp::Any visitFunc(GrammarParser::FuncContext *context) = 0;

    virtual antlrcpp::Any visitPar(GrammarParser::ParContext *context) = 0;

    virtual antlrcpp::Any visitMinus(GrammarParser::MinusContext *context) = 0;

    virtual antlrcpp::Any visitMult(GrammarParser::MultContext *context) = 0;

    virtual antlrcpp::Any visitConst(GrammarParser::ConstContext *context) = 0;

    virtual antlrcpp::Any visitVar(GrammarParser::VarContext *context) = 0;

    virtual antlrcpp::Any visitLt(GrammarParser::LtContext *context) = 0;

    virtual antlrcpp::Any visitEq(GrammarParser::EqContext *context) = 0;

    virtual antlrcpp::Any visitGt(GrammarParser::GtContext *context) = 0;

    virtual antlrcpp::Any visitPlus(GrammarParser::PlusContext *context) = 0;

    virtual antlrcpp::Any visitDiv(GrammarParser::DivContext *context) = 0;

    virtual antlrcpp::Any visitExfunc(GrammarParser::ExfuncContext *context) = 0;

    virtual antlrcpp::Any visitGte(GrammarParser::GteContext *context) = 0;

    virtual antlrcpp::Any visitNeq(GrammarParser::NeqContext *context) = 0;

    virtual antlrcpp::Any visitLte(GrammarParser::LteContext *context) = 0;

    virtual antlrcpp::Any visitDeclvar(GrammarParser::DeclvarContext *context) = 0;

    virtual antlrcpp::Any visitInit(GrammarParser::InitContext *context) = 0;

    virtual antlrcpp::Any visitInitvide(GrammarParser::InitvideContext *context) = 0;

    virtual antlrcpp::Any visitDefvar(GrammarParser::DefvarContext *context) = 0;

    virtual antlrcpp::Any visitExecfunc(GrammarParser::ExecfuncContext *context) = 0;

    virtual antlrcpp::Any visitBlock(GrammarParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitReturn(GrammarParser::ReturnContext *context) = 0;

    virtual antlrcpp::Any visitDefvariable(GrammarParser::DefvariableContext *context) = 0;

    virtual antlrcpp::Any visitExfuncStatement(GrammarParser::ExfuncStatementContext *context) = 0;

    virtual antlrcpp::Any visitExprStatement(GrammarParser::ExprStatementContext *context) = 0;

    virtual antlrcpp::Any visitIfStatement(GrammarParser::IfStatementContext *context) = 0;

    virtual antlrcpp::Any visitInsif(GrammarParser::InsifContext *context) = 0;

    virtual antlrcpp::Any visitInselse(GrammarParser::InselseContext *context) = 0;

    virtual antlrcpp::Any visitRet(GrammarParser::RetContext *context) = 0;

    virtual antlrcpp::Any visitParamFonction(GrammarParser::ParamFonctionContext *context) = 0;

    virtual antlrcpp::Any visitParamVide(GrammarParser::ParamVideContext *context) = 0;

    virtual antlrcpp::Any visitTypeint(GrammarParser::TypeintContext *context) = 0;

    virtual antlrcpp::Any visitTypechar(GrammarParser::TypecharContext *context) = 0;

    virtual antlrcpp::Any visitTypevoid(GrammarParser::TypevoidContext *context) = 0;


};

