
// Generated from Grammar.g4 by ANTLR 4.7.2


#include "GrammarVisitor.h"

#include "GrammarParser.h"


using namespace antlrcpp;
using namespace antlr4;

GrammarParser::GrammarParser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

GrammarParser::~GrammarParser() {
  delete _interpreter;
}

std::string GrammarParser::getGrammarFileName() const {
  return "Grammar.g4";
}

const std::vector<std::string>& GrammarParser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& GrammarParser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgContext ------------------------------------------------------------------

GrammarParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GrammarParser::FuncContext *> GrammarParser::ProgContext::func() {
  return getRuleContexts<GrammarParser::FuncContext>();
}

GrammarParser::FuncContext* GrammarParser::ProgContext::func(size_t i) {
  return getRuleContext<GrammarParser::FuncContext>(i);
}


size_t GrammarParser::ProgContext::getRuleIndex() const {
  return GrammarParser::RuleProg;
}


antlrcpp::Any GrammarParser::ProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitProg(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::ProgContext* GrammarParser::prog() {
  ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, getState());
  enterRule(_localctx, 0, GrammarParser::RuleProg);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(31);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GrammarParser::T__20)
      | (1ULL << GrammarParser::T__21)
      | (1ULL << GrammarParser::T__22))) != 0)) {
      setState(28);
      func();
      setState(33);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncContext ------------------------------------------------------------------

GrammarParser::FuncContext::FuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GrammarParser::TypeContext *> GrammarParser::FuncContext::type() {
  return getRuleContexts<GrammarParser::TypeContext>();
}

GrammarParser::TypeContext* GrammarParser::FuncContext::type(size_t i) {
  return getRuleContext<GrammarParser::TypeContext>(i);
}

std::vector<tree::TerminalNode *> GrammarParser::FuncContext::ID() {
  return getTokens(GrammarParser::ID);
}

tree::TerminalNode* GrammarParser::FuncContext::ID(size_t i) {
  return getToken(GrammarParser::ID, i);
}

GrammarParser::BlockContext* GrammarParser::FuncContext::block() {
  return getRuleContext<GrammarParser::BlockContext>(0);
}


size_t GrammarParser::FuncContext::getRuleIndex() const {
  return GrammarParser::RuleFunc;
}


antlrcpp::Any GrammarParser::FuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitFunc(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::FuncContext* GrammarParser::func() {
  FuncContext *_localctx = _tracker.createInstance<FuncContext>(_ctx, getState());
  enterRule(_localctx, 2, GrammarParser::RuleFunc);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(34);
    type();
    setState(35);
    match(GrammarParser::ID);
    setState(36);
    match(GrammarParser::T__0);
    setState(48);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GrammarParser::T__20)
      | (1ULL << GrammarParser::T__21)
      | (1ULL << GrammarParser::T__22))) != 0)) {
      setState(37);
      type();
      setState(38);
      match(GrammarParser::ID);
      setState(45);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GrammarParser::T__1) {
        setState(39);
        match(GrammarParser::T__1);
        setState(40);
        type();
        setState(41);
        match(GrammarParser::ID);
        setState(47);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(50);
    match(GrammarParser::T__2);
    setState(51);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

GrammarParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrammarParser::ExprContext::getRuleIndex() const {
  return GrammarParser::RuleExpr;
}

void GrammarParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParContext ------------------------------------------------------------------

GrammarParser::ExprContext* GrammarParser::ParContext::expr() {
  return getRuleContext<GrammarParser::ExprContext>(0);
}

GrammarParser::ParContext::ParContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::ParContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitPar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MinusContext ------------------------------------------------------------------

std::vector<GrammarParser::ExprContext *> GrammarParser::MinusContext::expr() {
  return getRuleContexts<GrammarParser::ExprContext>();
}

GrammarParser::ExprContext* GrammarParser::MinusContext::expr(size_t i) {
  return getRuleContext<GrammarParser::ExprContext>(i);
}

GrammarParser::MinusContext::MinusContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::MinusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitMinus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultContext ------------------------------------------------------------------

std::vector<GrammarParser::ExprContext *> GrammarParser::MultContext::expr() {
  return getRuleContexts<GrammarParser::ExprContext>();
}

GrammarParser::ExprContext* GrammarParser::MultContext::expr(size_t i) {
  return getRuleContext<GrammarParser::ExprContext>(i);
}

GrammarParser::MultContext::MultContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::MultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitMult(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ConstContext ------------------------------------------------------------------

tree::TerminalNode* GrammarParser::ConstContext::INT() {
  return getToken(GrammarParser::INT, 0);
}

GrammarParser::ConstContext::ConstContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::ConstContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitConst(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarContext ------------------------------------------------------------------

tree::TerminalNode* GrammarParser::VarContext::ID() {
  return getToken(GrammarParser::ID, 0);
}

GrammarParser::VarContext::VarContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::VarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LtContext ------------------------------------------------------------------

std::vector<GrammarParser::ExprContext *> GrammarParser::LtContext::expr() {
  return getRuleContexts<GrammarParser::ExprContext>();
}

GrammarParser::ExprContext* GrammarParser::LtContext::expr(size_t i) {
  return getRuleContext<GrammarParser::ExprContext>(i);
}

GrammarParser::LtContext::LtContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::LtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitLt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- EqContext ------------------------------------------------------------------

std::vector<GrammarParser::ExprContext *> GrammarParser::EqContext::expr() {
  return getRuleContexts<GrammarParser::ExprContext>();
}

GrammarParser::ExprContext* GrammarParser::EqContext::expr(size_t i) {
  return getRuleContext<GrammarParser::ExprContext>(i);
}

GrammarParser::EqContext::EqContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::EqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitEq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GtContext ------------------------------------------------------------------

std::vector<GrammarParser::ExprContext *> GrammarParser::GtContext::expr() {
  return getRuleContexts<GrammarParser::ExprContext>();
}

GrammarParser::ExprContext* GrammarParser::GtContext::expr(size_t i) {
  return getRuleContext<GrammarParser::ExprContext>(i);
}

GrammarParser::GtContext::GtContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::GtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitGt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusContext ------------------------------------------------------------------

std::vector<GrammarParser::ExprContext *> GrammarParser::PlusContext::expr() {
  return getRuleContexts<GrammarParser::ExprContext>();
}

GrammarParser::ExprContext* GrammarParser::PlusContext::expr(size_t i) {
  return getRuleContext<GrammarParser::ExprContext>(i);
}

GrammarParser::PlusContext::PlusContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::PlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitPlus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DivContext ------------------------------------------------------------------

std::vector<GrammarParser::ExprContext *> GrammarParser::DivContext::expr() {
  return getRuleContexts<GrammarParser::ExprContext>();
}

GrammarParser::ExprContext* GrammarParser::DivContext::expr(size_t i) {
  return getRuleContext<GrammarParser::ExprContext>(i);
}

GrammarParser::DivContext::DivContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::DivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExfuncContext ------------------------------------------------------------------

GrammarParser::ExecfuncContext* GrammarParser::ExfuncContext::execfunc() {
  return getRuleContext<GrammarParser::ExecfuncContext>(0);
}

GrammarParser::ExfuncContext::ExfuncContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::ExfuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitExfunc(this);
  else
    return visitor->visitChildren(this);
}
//----------------- GteContext ------------------------------------------------------------------

std::vector<GrammarParser::ExprContext *> GrammarParser::GteContext::expr() {
  return getRuleContexts<GrammarParser::ExprContext>();
}

GrammarParser::ExprContext* GrammarParser::GteContext::expr(size_t i) {
  return getRuleContext<GrammarParser::ExprContext>(i);
}

GrammarParser::GteContext::GteContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::GteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitGte(this);
  else
    return visitor->visitChildren(this);
}
//----------------- NeqContext ------------------------------------------------------------------

std::vector<GrammarParser::ExprContext *> GrammarParser::NeqContext::expr() {
  return getRuleContexts<GrammarParser::ExprContext>();
}

GrammarParser::ExprContext* GrammarParser::NeqContext::expr(size_t i) {
  return getRuleContext<GrammarParser::ExprContext>(i);
}

GrammarParser::NeqContext::NeqContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::NeqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitNeq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LteContext ------------------------------------------------------------------

std::vector<GrammarParser::ExprContext *> GrammarParser::LteContext::expr() {
  return getRuleContexts<GrammarParser::ExprContext>();
}

GrammarParser::ExprContext* GrammarParser::LteContext::expr(size_t i) {
  return getRuleContext<GrammarParser::ExprContext>(i);
}

GrammarParser::LteContext::LteContext(ExprContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::LteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitLte(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::ExprContext* GrammarParser::expr() {
   return expr(0);
}

GrammarParser::ExprContext* GrammarParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GrammarParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  GrammarParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, GrammarParser::RuleExpr, precedence);

    

  auto onExit = finally([=] {
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(61);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<ConstContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(54);
      match(GrammarParser::INT);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<VarContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(55);
      match(GrammarParser::ID);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<ParContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(56);
      match(GrammarParser::T__0);
      setState(57);
      expr(0);
      setState(58);
      match(GrammarParser::T__2);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<ExfuncContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(60);
      execfunc();
      break;
    }

    }
    _ctx->stop = _input->LT(-1);
    setState(95);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(93);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(63);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(64);
          match(GrammarParser::T__3);
          setState(65);
          expr(15);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<DivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(66);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(67);
          match(GrammarParser::T__4);
          setState(68);
          expr(14);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<PlusContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(69);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(70);
          match(GrammarParser::T__5);
          setState(71);
          expr(13);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<MinusContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(72);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(73);
          match(GrammarParser::T__6);
          setState(74);
          expr(12);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<EqContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(75);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(76);
          match(GrammarParser::T__7);
          setState(77);
          expr(7);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<GtContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(78);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(79);
          match(GrammarParser::T__8);
          setState(80);
          expr(6);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<LtContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(81);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(82);
          match(GrammarParser::T__9);
          setState(83);
          expr(5);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<NeqContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(84);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(85);
          match(GrammarParser::T__10);
          setState(86);
          expr(4);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<GteContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(87);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(88);
          match(GrammarParser::T__11);
          setState(89);
          expr(3);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<LteContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(90);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(91);
          match(GrammarParser::T__12);
          setState(92);
          expr(2);
          break;
        }

        } 
      }
      setState(97);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- DeclvarContext ------------------------------------------------------------------

GrammarParser::DeclvarContext::DeclvarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::TypeContext* GrammarParser::DeclvarContext::type() {
  return getRuleContext<GrammarParser::TypeContext>(0);
}

std::vector<tree::TerminalNode *> GrammarParser::DeclvarContext::ID() {
  return getTokens(GrammarParser::ID);
}

tree::TerminalNode* GrammarParser::DeclvarContext::ID(size_t i) {
  return getToken(GrammarParser::ID, i);
}

std::vector<GrammarParser::OptinitContext *> GrammarParser::DeclvarContext::optinit() {
  return getRuleContexts<GrammarParser::OptinitContext>();
}

GrammarParser::OptinitContext* GrammarParser::DeclvarContext::optinit(size_t i) {
  return getRuleContext<GrammarParser::OptinitContext>(i);
}


size_t GrammarParser::DeclvarContext::getRuleIndex() const {
  return GrammarParser::RuleDeclvar;
}


antlrcpp::Any GrammarParser::DeclvarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitDeclvar(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::DeclvarContext* GrammarParser::declvar() {
  DeclvarContext *_localctx = _tracker.createInstance<DeclvarContext>(_ctx, getState());
  enterRule(_localctx, 6, GrammarParser::RuleDeclvar);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    type();
    setState(99);
    match(GrammarParser::ID);
    setState(100);
    optinit();
    setState(106);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GrammarParser::T__1) {
      setState(101);
      match(GrammarParser::T__1);
      setState(102);
      match(GrammarParser::ID);
      setState(103);
      optinit();
      setState(108);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(109);
    match(GrammarParser::T__13);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OptinitContext ------------------------------------------------------------------

GrammarParser::OptinitContext::OptinitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrammarParser::OptinitContext::getRuleIndex() const {
  return GrammarParser::RuleOptinit;
}

void GrammarParser::OptinitContext::copyFrom(OptinitContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- InitContext ------------------------------------------------------------------

tree::TerminalNode* GrammarParser::InitContext::INT() {
  return getToken(GrammarParser::INT, 0);
}

GrammarParser::InitContext::InitContext(OptinitContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::InitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitInit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- InitvideContext ------------------------------------------------------------------

GrammarParser::InitvideContext::InitvideContext(OptinitContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::InitvideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitInitvide(this);
  else
    return visitor->visitChildren(this);
}
GrammarParser::OptinitContext* GrammarParser::optinit() {
  OptinitContext *_localctx = _tracker.createInstance<OptinitContext>(_ctx, getState());
  enterRule(_localctx, 8, GrammarParser::RuleOptinit);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(114);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::T__14: {
        _localctx = dynamic_cast<OptinitContext *>(_tracker.createInstance<GrammarParser::InitContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(111);
        match(GrammarParser::T__14);
        setState(112);
        match(GrammarParser::INT);
        break;
      }

      case GrammarParser::T__1:
      case GrammarParser::T__13: {
        _localctx = dynamic_cast<OptinitContext *>(_tracker.createInstance<GrammarParser::InitvideContext>(_localctx));
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefvarContext ------------------------------------------------------------------

GrammarParser::DefvarContext::DefvarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GrammarParser::DefvarContext::ID() {
  return getToken(GrammarParser::ID, 0);
}

GrammarParser::ExprContext* GrammarParser::DefvarContext::expr() {
  return getRuleContext<GrammarParser::ExprContext>(0);
}


size_t GrammarParser::DefvarContext::getRuleIndex() const {
  return GrammarParser::RuleDefvar;
}


antlrcpp::Any GrammarParser::DefvarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitDefvar(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::DefvarContext* GrammarParser::defvar() {
  DefvarContext *_localctx = _tracker.createInstance<DefvarContext>(_ctx, getState());
  enterRule(_localctx, 10, GrammarParser::RuleDefvar);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(116);
    match(GrammarParser::ID);
    setState(117);
    match(GrammarParser::T__14);
    setState(118);
    expr(0);
    setState(119);
    match(GrammarParser::T__13);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExecfuncContext ------------------------------------------------------------------

GrammarParser::ExecfuncContext::ExecfuncContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GrammarParser::ExecfuncContext::ID() {
  return getToken(GrammarParser::ID, 0);
}

GrammarParser::ParamContext* GrammarParser::ExecfuncContext::param() {
  return getRuleContext<GrammarParser::ParamContext>(0);
}


size_t GrammarParser::ExecfuncContext::getRuleIndex() const {
  return GrammarParser::RuleExecfunc;
}


antlrcpp::Any GrammarParser::ExecfuncContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitExecfunc(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::ExecfuncContext* GrammarParser::execfunc() {
  ExecfuncContext *_localctx = _tracker.createInstance<ExecfuncContext>(_ctx, getState());
  enterRule(_localctx, 12, GrammarParser::RuleExecfunc);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(GrammarParser::ID);
    setState(122);
    match(GrammarParser::T__0);
    setState(123);
    param();
    setState(124);
    match(GrammarParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

GrammarParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GrammarParser::DeclvarContext *> GrammarParser::BlockContext::declvar() {
  return getRuleContexts<GrammarParser::DeclvarContext>();
}

GrammarParser::DeclvarContext* GrammarParser::BlockContext::declvar(size_t i) {
  return getRuleContext<GrammarParser::DeclvarContext>(i);
}

std::vector<GrammarParser::StatementContext *> GrammarParser::BlockContext::statement() {
  return getRuleContexts<GrammarParser::StatementContext>();
}

GrammarParser::StatementContext* GrammarParser::BlockContext::statement(size_t i) {
  return getRuleContext<GrammarParser::StatementContext>(i);
}


size_t GrammarParser::BlockContext::getRuleIndex() const {
  return GrammarParser::RuleBlock;
}


antlrcpp::Any GrammarParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::BlockContext* GrammarParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 14, GrammarParser::RuleBlock);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(126);
    match(GrammarParser::T__15);
    setState(130);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GrammarParser::T__20)
      | (1ULL << GrammarParser::T__21)
      | (1ULL << GrammarParser::T__22))) != 0)) {
      setState(127);
      declvar();
      setState(132);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(136);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << GrammarParser::T__0)
      | (1ULL << GrammarParser::T__17)
      | (1ULL << GrammarParser::T__19)
      | (1ULL << GrammarParser::INT)
      | (1ULL << GrammarParser::ID))) != 0)) {
      setState(133);
      statement();
      setState(138);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(139);
    match(GrammarParser::T__16);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

GrammarParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrammarParser::StatementContext::getRuleIndex() const {
  return GrammarParser::RuleStatement;
}

void GrammarParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprStatementContext ------------------------------------------------------------------

GrammarParser::ExprContext* GrammarParser::ExprStatementContext::expr() {
  return getRuleContext<GrammarParser::ExprContext>(0);
}

GrammarParser::ExprStatementContext::ExprStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::ExprStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitExprStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DefvariableContext ------------------------------------------------------------------

GrammarParser::DefvarContext* GrammarParser::DefvariableContext::defvar() {
  return getRuleContext<GrammarParser::DefvarContext>(0);
}

GrammarParser::DefvariableContext::DefvariableContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::DefvariableContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitDefvariable(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExfuncStatementContext ------------------------------------------------------------------

GrammarParser::ExecfuncContext* GrammarParser::ExfuncStatementContext::execfunc() {
  return getRuleContext<GrammarParser::ExecfuncContext>(0);
}

GrammarParser::ExfuncStatementContext::ExfuncStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::ExfuncStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitExfuncStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IfStatementContext ------------------------------------------------------------------

GrammarParser::InsifContext* GrammarParser::IfStatementContext::insif() {
  return getRuleContext<GrammarParser::InsifContext>(0);
}

GrammarParser::IfStatementContext::IfStatementContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::IfStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitIfStatement(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ReturnContext ------------------------------------------------------------------

GrammarParser::RetContext* GrammarParser::ReturnContext::ret() {
  return getRuleContext<GrammarParser::RetContext>(0);
}

GrammarParser::ReturnContext::ReturnContext(StatementContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::ReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitReturn(this);
  else
    return visitor->visitChildren(this);
}
GrammarParser::StatementContext* GrammarParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 16, GrammarParser::RuleStatement);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(150);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<GrammarParser::ReturnContext>(_localctx));
      enterOuterAlt(_localctx, 1);
      setState(141);
      ret();
      break;
    }

    case 2: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<GrammarParser::DefvariableContext>(_localctx));
      enterOuterAlt(_localctx, 2);
      setState(142);
      defvar();
      break;
    }

    case 3: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<GrammarParser::ExfuncStatementContext>(_localctx));
      enterOuterAlt(_localctx, 3);
      setState(143);
      execfunc();
      setState(144);
      match(GrammarParser::T__13);
      break;
    }

    case 4: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<GrammarParser::ExprStatementContext>(_localctx));
      enterOuterAlt(_localctx, 4);
      setState(146);
      expr(0);
      setState(147);
      match(GrammarParser::T__13);
      break;
    }

    case 5: {
      _localctx = dynamic_cast<StatementContext *>(_tracker.createInstance<GrammarParser::IfStatementContext>(_localctx));
      enterOuterAlt(_localctx, 5);
      setState(149);
      insif();
      break;
    }

    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InsifContext ------------------------------------------------------------------

GrammarParser::InsifContext::InsifContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::ExprContext* GrammarParser::InsifContext::expr() {
  return getRuleContext<GrammarParser::ExprContext>(0);
}

GrammarParser::BlockContext* GrammarParser::InsifContext::block() {
  return getRuleContext<GrammarParser::BlockContext>(0);
}

GrammarParser::InselseContext* GrammarParser::InsifContext::inselse() {
  return getRuleContext<GrammarParser::InselseContext>(0);
}


size_t GrammarParser::InsifContext::getRuleIndex() const {
  return GrammarParser::RuleInsif;
}


antlrcpp::Any GrammarParser::InsifContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitInsif(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::InsifContext* GrammarParser::insif() {
  InsifContext *_localctx = _tracker.createInstance<InsifContext>(_ctx, getState());
  enterRule(_localctx, 18, GrammarParser::RuleInsif);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(152);
    match(GrammarParser::T__17);
    setState(153);
    match(GrammarParser::T__0);
    setState(154);
    expr(0);
    setState(155);
    match(GrammarParser::T__2);
    setState(156);
    block();
    setState(158);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GrammarParser::T__18) {
      setState(157);
      inselse();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InselseContext ------------------------------------------------------------------

GrammarParser::InselseContext::InselseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::BlockContext* GrammarParser::InselseContext::block() {
  return getRuleContext<GrammarParser::BlockContext>(0);
}


size_t GrammarParser::InselseContext::getRuleIndex() const {
  return GrammarParser::RuleInselse;
}


antlrcpp::Any GrammarParser::InselseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitInselse(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::InselseContext* GrammarParser::inselse() {
  InselseContext *_localctx = _tracker.createInstance<InselseContext>(_ctx, getState());
  enterRule(_localctx, 20, GrammarParser::RuleInselse);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(160);
    match(GrammarParser::T__18);
    setState(161);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RetContext ------------------------------------------------------------------

GrammarParser::RetContext::RetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GrammarParser::ExprContext* GrammarParser::RetContext::expr() {
  return getRuleContext<GrammarParser::ExprContext>(0);
}


size_t GrammarParser::RetContext::getRuleIndex() const {
  return GrammarParser::RuleRet;
}


antlrcpp::Any GrammarParser::RetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitRet(this);
  else
    return visitor->visitChildren(this);
}

GrammarParser::RetContext* GrammarParser::ret() {
  RetContext *_localctx = _tracker.createInstance<RetContext>(_ctx, getState());
  enterRule(_localctx, 22, GrammarParser::RuleRet);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(163);
    match(GrammarParser::T__19);
    setState(164);
    expr(0);
    setState(165);
    match(GrammarParser::T__13);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

GrammarParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrammarParser::ParamContext::getRuleIndex() const {
  return GrammarParser::RuleParam;
}

void GrammarParser::ParamContext::copyFrom(ParamContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParamVideContext ------------------------------------------------------------------

GrammarParser::ParamVideContext::ParamVideContext(ParamContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::ParamVideContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitParamVide(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParamFonctionContext ------------------------------------------------------------------

std::vector<GrammarParser::ExprContext *> GrammarParser::ParamFonctionContext::expr() {
  return getRuleContexts<GrammarParser::ExprContext>();
}

GrammarParser::ExprContext* GrammarParser::ParamFonctionContext::expr(size_t i) {
  return getRuleContext<GrammarParser::ExprContext>(i);
}

GrammarParser::ParamFonctionContext::ParamFonctionContext(ParamContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::ParamFonctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitParamFonction(this);
  else
    return visitor->visitChildren(this);
}
GrammarParser::ParamContext* GrammarParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 24, GrammarParser::RuleParam);
  size_t _la = 0;

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(176);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::T__0:
      case GrammarParser::INT:
      case GrammarParser::ID: {
        _localctx = dynamic_cast<ParamContext *>(_tracker.createInstance<GrammarParser::ParamFonctionContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(167);
        expr(0);
        setState(172);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while (_la == GrammarParser::T__1) {
          setState(168);
          match(GrammarParser::T__1);
          setState(169);
          expr(0);
          setState(174);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        break;
      }

      case GrammarParser::T__2: {
        _localctx = dynamic_cast<ParamContext *>(_tracker.createInstance<GrammarParser::ParamVideContext>(_localctx));
        enterOuterAlt(_localctx, 2);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

GrammarParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GrammarParser::TypeContext::getRuleIndex() const {
  return GrammarParser::RuleType;
}

void GrammarParser::TypeContext::copyFrom(TypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TypevoidContext ------------------------------------------------------------------

GrammarParser::TypevoidContext::TypevoidContext(TypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::TypevoidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitTypevoid(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeintContext ------------------------------------------------------------------

GrammarParser::TypeintContext::TypeintContext(TypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::TypeintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitTypeint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypecharContext ------------------------------------------------------------------

GrammarParser::TypecharContext::TypecharContext(TypeContext *ctx) { copyFrom(ctx); }


antlrcpp::Any GrammarParser::TypecharContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GrammarVisitor*>(visitor))
    return parserVisitor->visitTypechar(this);
  else
    return visitor->visitChildren(this);
}
GrammarParser::TypeContext* GrammarParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 26, GrammarParser::RuleType);

  auto onExit = finally([=] {
    exitRule();
  });
  try {
    setState(181);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GrammarParser::T__20: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<GrammarParser::TypeintContext>(_localctx));
        enterOuterAlt(_localctx, 1);
        setState(178);
        match(GrammarParser::T__20);
        break;
      }

      case GrammarParser::T__21: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<GrammarParser::TypecharContext>(_localctx));
        enterOuterAlt(_localctx, 2);
        setState(179);
        match(GrammarParser::T__21);
        break;
      }

      case GrammarParser::T__22: {
        _localctx = dynamic_cast<TypeContext *>(_tracker.createInstance<GrammarParser::TypevoidContext>(_localctx));
        enterOuterAlt(_localctx, 3);
        setState(180);
        match(GrammarParser::T__22);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool GrammarParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return exprSempred(dynamic_cast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool GrammarParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 14);
    case 1: return precpred(_ctx, 13);
    case 2: return precpred(_ctx, 12);
    case 3: return precpred(_ctx, 11);
    case 4: return precpred(_ctx, 6);
    case 5: return precpred(_ctx, 5);
    case 6: return precpred(_ctx, 4);
    case 7: return precpred(_ctx, 3);
    case 8: return precpred(_ctx, 2);
    case 9: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> GrammarParser::_decisionToDFA;
atn::PredictionContextCache GrammarParser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN GrammarParser::_atn;
std::vector<uint16_t> GrammarParser::_serializedATN;

std::vector<std::string> GrammarParser::_ruleNames = {
  "prog", "func", "expr", "declvar", "optinit", "defvar", "execfunc", "block", 
  "statement", "insif", "inselse", "ret", "param", "type"
};

std::vector<std::string> GrammarParser::_literalNames = {
  "", "'('", "','", "')'", "'*'", "'/'", "'+'", "'-'", "'=='", "'>'", "'<'", 
  "'!='", "'>='", "'<='", "';'", "'='", "'{'", "'}'", "'if'", "'else'", 
  "'return'", "'int'", "'char'", "'void'"
};

std::vector<std::string> GrammarParser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "INT", "ID", "WS"
};

dfa::Vocabulary GrammarParser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> GrammarParser::_tokenNames;

GrammarParser::Initializer::Initializer() {
	for (size_t i = 0; i < _symbolicNames.size(); ++i) {
		std::string name = _vocabulary.getLiteralName(i);
		if (name.empty()) {
			name = _vocabulary.getSymbolicName(i);
		}

		if (name.empty()) {
			_tokenNames.push_back("<INVALID>");
		} else {
      _tokenNames.push_back(name);
    }
	}

  _serializedATN = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
    0x3, 0x1c, 0xba, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 0x9, 
    0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 0x7, 0x4, 
    0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 0x4, 0xb, 0x9, 
    0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 0xe, 0x9, 0xe, 0x4, 
    0xf, 0x9, 0xf, 0x3, 0x2, 0x7, 0x2, 0x20, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 
    0x23, 0xb, 0x2, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x3, 0x7, 0x3, 0x2e, 0xa, 0x3, 0xc, 0x3, 
    0xe, 0x3, 0x31, 0xb, 0x3, 0x5, 0x3, 0x33, 0xa, 0x3, 0x3, 0x3, 0x3, 0x3, 
    0x3, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
    0x3, 0x4, 0x3, 0x4, 0x5, 0x4, 0x40, 0xa, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 
    0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 0x7, 
    0x4, 0x60, 0xa, 0x4, 0xc, 0x4, 0xe, 0x4, 0x63, 0xb, 0x4, 0x3, 0x5, 0x3, 
    0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x7, 0x5, 0x6b, 0xa, 0x5, 
    0xc, 0x5, 0xe, 0x5, 0x6e, 0xb, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
    0x6, 0x3, 0x6, 0x5, 0x6, 0x75, 0xa, 0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 
    0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 
    0x3, 0x9, 0x3, 0x9, 0x7, 0x9, 0x83, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x86, 
    0xb, 0x9, 0x3, 0x9, 0x7, 0x9, 0x89, 0xa, 0x9, 0xc, 0x9, 0xe, 0x9, 0x8c, 
    0xb, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 
    0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x3, 0xa, 0x5, 0xa, 0x99, 0xa, 
    0xa, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x3, 0xb, 0x5, 
    0xb, 0xa1, 0xa, 0xb, 0x3, 0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 
    0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x7, 0xe, 0xad, 0xa, 
    0xe, 0xc, 0xe, 0xe, 0xe, 0xb0, 0xb, 0xe, 0x3, 0xe, 0x5, 0xe, 0xb3, 0xa, 
    0xe, 0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x5, 0xf, 0xb8, 0xa, 0xf, 0x3, 0xf, 
    0x2, 0x3, 0x6, 0x10, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 0xe, 0x10, 0x12, 
    0x14, 0x16, 0x18, 0x1a, 0x1c, 0x2, 0x2, 0x2, 0xc8, 0x2, 0x21, 0x3, 0x2, 
    0x2, 0x2, 0x4, 0x24, 0x3, 0x2, 0x2, 0x2, 0x6, 0x3f, 0x3, 0x2, 0x2, 0x2, 
    0x8, 0x64, 0x3, 0x2, 0x2, 0x2, 0xa, 0x74, 0x3, 0x2, 0x2, 0x2, 0xc, 0x76, 
    0x3, 0x2, 0x2, 0x2, 0xe, 0x7b, 0x3, 0x2, 0x2, 0x2, 0x10, 0x80, 0x3, 
    0x2, 0x2, 0x2, 0x12, 0x98, 0x3, 0x2, 0x2, 0x2, 0x14, 0x9a, 0x3, 0x2, 
    0x2, 0x2, 0x16, 0xa2, 0x3, 0x2, 0x2, 0x2, 0x18, 0xa5, 0x3, 0x2, 0x2, 
    0x2, 0x1a, 0xb2, 0x3, 0x2, 0x2, 0x2, 0x1c, 0xb7, 0x3, 0x2, 0x2, 0x2, 
    0x1e, 0x20, 0x5, 0x4, 0x3, 0x2, 0x1f, 0x1e, 0x3, 0x2, 0x2, 0x2, 0x20, 
    0x23, 0x3, 0x2, 0x2, 0x2, 0x21, 0x1f, 0x3, 0x2, 0x2, 0x2, 0x21, 0x22, 
    0x3, 0x2, 0x2, 0x2, 0x22, 0x3, 0x3, 0x2, 0x2, 0x2, 0x23, 0x21, 0x3, 
    0x2, 0x2, 0x2, 0x24, 0x25, 0x5, 0x1c, 0xf, 0x2, 0x25, 0x26, 0x7, 0x1b, 
    0x2, 0x2, 0x26, 0x32, 0x7, 0x3, 0x2, 0x2, 0x27, 0x28, 0x5, 0x1c, 0xf, 
    0x2, 0x28, 0x2f, 0x7, 0x1b, 0x2, 0x2, 0x29, 0x2a, 0x7, 0x4, 0x2, 0x2, 
    0x2a, 0x2b, 0x5, 0x1c, 0xf, 0x2, 0x2b, 0x2c, 0x7, 0x1b, 0x2, 0x2, 0x2c, 
    0x2e, 0x3, 0x2, 0x2, 0x2, 0x2d, 0x29, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x31, 
    0x3, 0x2, 0x2, 0x2, 0x2f, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x2f, 0x30, 0x3, 
    0x2, 0x2, 0x2, 0x30, 0x33, 0x3, 0x2, 0x2, 0x2, 0x31, 0x2f, 0x3, 0x2, 
    0x2, 0x2, 0x32, 0x27, 0x3, 0x2, 0x2, 0x2, 0x32, 0x33, 0x3, 0x2, 0x2, 
    0x2, 0x33, 0x34, 0x3, 0x2, 0x2, 0x2, 0x34, 0x35, 0x7, 0x5, 0x2, 0x2, 
    0x35, 0x36, 0x5, 0x10, 0x9, 0x2, 0x36, 0x5, 0x3, 0x2, 0x2, 0x2, 0x37, 
    0x38, 0x8, 0x4, 0x1, 0x2, 0x38, 0x40, 0x7, 0x1a, 0x2, 0x2, 0x39, 0x40, 
    0x7, 0x1b, 0x2, 0x2, 0x3a, 0x3b, 0x7, 0x3, 0x2, 0x2, 0x3b, 0x3c, 0x5, 
    0x6, 0x4, 0x2, 0x3c, 0x3d, 0x7, 0x5, 0x2, 0x2, 0x3d, 0x40, 0x3, 0x2, 
    0x2, 0x2, 0x3e, 0x40, 0x5, 0xe, 0x8, 0x2, 0x3f, 0x37, 0x3, 0x2, 0x2, 
    0x2, 0x3f, 0x39, 0x3, 0x2, 0x2, 0x2, 0x3f, 0x3a, 0x3, 0x2, 0x2, 0x2, 
    0x3f, 0x3e, 0x3, 0x2, 0x2, 0x2, 0x40, 0x61, 0x3, 0x2, 0x2, 0x2, 0x41, 
    0x42, 0xc, 0x10, 0x2, 0x2, 0x42, 0x43, 0x7, 0x6, 0x2, 0x2, 0x43, 0x60, 
    0x5, 0x6, 0x4, 0x11, 0x44, 0x45, 0xc, 0xf, 0x2, 0x2, 0x45, 0x46, 0x7, 
    0x7, 0x2, 0x2, 0x46, 0x60, 0x5, 0x6, 0x4, 0x10, 0x47, 0x48, 0xc, 0xe, 
    0x2, 0x2, 0x48, 0x49, 0x7, 0x8, 0x2, 0x2, 0x49, 0x60, 0x5, 0x6, 0x4, 
    0xf, 0x4a, 0x4b, 0xc, 0xd, 0x2, 0x2, 0x4b, 0x4c, 0x7, 0x9, 0x2, 0x2, 
    0x4c, 0x60, 0x5, 0x6, 0x4, 0xe, 0x4d, 0x4e, 0xc, 0x8, 0x2, 0x2, 0x4e, 
    0x4f, 0x7, 0xa, 0x2, 0x2, 0x4f, 0x60, 0x5, 0x6, 0x4, 0x9, 0x50, 0x51, 
    0xc, 0x7, 0x2, 0x2, 0x51, 0x52, 0x7, 0xb, 0x2, 0x2, 0x52, 0x60, 0x5, 
    0x6, 0x4, 0x8, 0x53, 0x54, 0xc, 0x6, 0x2, 0x2, 0x54, 0x55, 0x7, 0xc, 
    0x2, 0x2, 0x55, 0x60, 0x5, 0x6, 0x4, 0x7, 0x56, 0x57, 0xc, 0x5, 0x2, 
    0x2, 0x57, 0x58, 0x7, 0xd, 0x2, 0x2, 0x58, 0x60, 0x5, 0x6, 0x4, 0x6, 
    0x59, 0x5a, 0xc, 0x4, 0x2, 0x2, 0x5a, 0x5b, 0x7, 0xe, 0x2, 0x2, 0x5b, 
    0x60, 0x5, 0x6, 0x4, 0x5, 0x5c, 0x5d, 0xc, 0x3, 0x2, 0x2, 0x5d, 0x5e, 
    0x7, 0xf, 0x2, 0x2, 0x5e, 0x60, 0x5, 0x6, 0x4, 0x4, 0x5f, 0x41, 0x3, 
    0x2, 0x2, 0x2, 0x5f, 0x44, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x47, 0x3, 0x2, 
    0x2, 0x2, 0x5f, 0x4a, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x4d, 0x3, 0x2, 0x2, 
    0x2, 0x5f, 0x50, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x53, 0x3, 0x2, 0x2, 0x2, 
    0x5f, 0x56, 0x3, 0x2, 0x2, 0x2, 0x5f, 0x59, 0x3, 0x2, 0x2, 0x2, 0x5f, 
    0x5c, 0x3, 0x2, 0x2, 0x2, 0x60, 0x63, 0x3, 0x2, 0x2, 0x2, 0x61, 0x5f, 
    0x3, 0x2, 0x2, 0x2, 0x61, 0x62, 0x3, 0x2, 0x2, 0x2, 0x62, 0x7, 0x3, 
    0x2, 0x2, 0x2, 0x63, 0x61, 0x3, 0x2, 0x2, 0x2, 0x64, 0x65, 0x5, 0x1c, 
    0xf, 0x2, 0x65, 0x66, 0x7, 0x1b, 0x2, 0x2, 0x66, 0x6c, 0x5, 0xa, 0x6, 
    0x2, 0x67, 0x68, 0x7, 0x4, 0x2, 0x2, 0x68, 0x69, 0x7, 0x1b, 0x2, 0x2, 
    0x69, 0x6b, 0x5, 0xa, 0x6, 0x2, 0x6a, 0x67, 0x3, 0x2, 0x2, 0x2, 0x6b, 
    0x6e, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6a, 0x3, 0x2, 0x2, 0x2, 0x6c, 0x6d, 
    0x3, 0x2, 0x2, 0x2, 0x6d, 0x6f, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x6c, 0x3, 
    0x2, 0x2, 0x2, 0x6f, 0x70, 0x7, 0x10, 0x2, 0x2, 0x70, 0x9, 0x3, 0x2, 
    0x2, 0x2, 0x71, 0x72, 0x7, 0x11, 0x2, 0x2, 0x72, 0x75, 0x7, 0x1a, 0x2, 
    0x2, 0x73, 0x75, 0x3, 0x2, 0x2, 0x2, 0x74, 0x71, 0x3, 0x2, 0x2, 0x2, 
    0x74, 0x73, 0x3, 0x2, 0x2, 0x2, 0x75, 0xb, 0x3, 0x2, 0x2, 0x2, 0x76, 
    0x77, 0x7, 0x1b, 0x2, 0x2, 0x77, 0x78, 0x7, 0x11, 0x2, 0x2, 0x78, 0x79, 
    0x5, 0x6, 0x4, 0x2, 0x79, 0x7a, 0x7, 0x10, 0x2, 0x2, 0x7a, 0xd, 0x3, 
    0x2, 0x2, 0x2, 0x7b, 0x7c, 0x7, 0x1b, 0x2, 0x2, 0x7c, 0x7d, 0x7, 0x3, 
    0x2, 0x2, 0x7d, 0x7e, 0x5, 0x1a, 0xe, 0x2, 0x7e, 0x7f, 0x7, 0x5, 0x2, 
    0x2, 0x7f, 0xf, 0x3, 0x2, 0x2, 0x2, 0x80, 0x84, 0x7, 0x12, 0x2, 0x2, 
    0x81, 0x83, 0x5, 0x8, 0x5, 0x2, 0x82, 0x81, 0x3, 0x2, 0x2, 0x2, 0x83, 
    0x86, 0x3, 0x2, 0x2, 0x2, 0x84, 0x82, 0x3, 0x2, 0x2, 0x2, 0x84, 0x85, 
    0x3, 0x2, 0x2, 0x2, 0x85, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x86, 0x84, 0x3, 
    0x2, 0x2, 0x2, 0x87, 0x89, 0x5, 0x12, 0xa, 0x2, 0x88, 0x87, 0x3, 0x2, 
    0x2, 0x2, 0x89, 0x8c, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x88, 0x3, 0x2, 0x2, 
    0x2, 0x8a, 0x8b, 0x3, 0x2, 0x2, 0x2, 0x8b, 0x8d, 0x3, 0x2, 0x2, 0x2, 
    0x8c, 0x8a, 0x3, 0x2, 0x2, 0x2, 0x8d, 0x8e, 0x7, 0x13, 0x2, 0x2, 0x8e, 
    0x11, 0x3, 0x2, 0x2, 0x2, 0x8f, 0x99, 0x5, 0x18, 0xd, 0x2, 0x90, 0x99, 
    0x5, 0xc, 0x7, 0x2, 0x91, 0x92, 0x5, 0xe, 0x8, 0x2, 0x92, 0x93, 0x7, 
    0x10, 0x2, 0x2, 0x93, 0x99, 0x3, 0x2, 0x2, 0x2, 0x94, 0x95, 0x5, 0x6, 
    0x4, 0x2, 0x95, 0x96, 0x7, 0x10, 0x2, 0x2, 0x96, 0x99, 0x3, 0x2, 0x2, 
    0x2, 0x97, 0x99, 0x5, 0x14, 0xb, 0x2, 0x98, 0x8f, 0x3, 0x2, 0x2, 0x2, 
    0x98, 0x90, 0x3, 0x2, 0x2, 0x2, 0x98, 0x91, 0x3, 0x2, 0x2, 0x2, 0x98, 
    0x94, 0x3, 0x2, 0x2, 0x2, 0x98, 0x97, 0x3, 0x2, 0x2, 0x2, 0x99, 0x13, 
    0x3, 0x2, 0x2, 0x2, 0x9a, 0x9b, 0x7, 0x14, 0x2, 0x2, 0x9b, 0x9c, 0x7, 
    0x3, 0x2, 0x2, 0x9c, 0x9d, 0x5, 0x6, 0x4, 0x2, 0x9d, 0x9e, 0x7, 0x5, 
    0x2, 0x2, 0x9e, 0xa0, 0x5, 0x10, 0x9, 0x2, 0x9f, 0xa1, 0x5, 0x16, 0xc, 
    0x2, 0xa0, 0x9f, 0x3, 0x2, 0x2, 0x2, 0xa0, 0xa1, 0x3, 0x2, 0x2, 0x2, 
    0xa1, 0x15, 0x3, 0x2, 0x2, 0x2, 0xa2, 0xa3, 0x7, 0x15, 0x2, 0x2, 0xa3, 
    0xa4, 0x5, 0x10, 0x9, 0x2, 0xa4, 0x17, 0x3, 0x2, 0x2, 0x2, 0xa5, 0xa6, 
    0x7, 0x16, 0x2, 0x2, 0xa6, 0xa7, 0x5, 0x6, 0x4, 0x2, 0xa7, 0xa8, 0x7, 
    0x10, 0x2, 0x2, 0xa8, 0x19, 0x3, 0x2, 0x2, 0x2, 0xa9, 0xae, 0x5, 0x6, 
    0x4, 0x2, 0xaa, 0xab, 0x7, 0x4, 0x2, 0x2, 0xab, 0xad, 0x5, 0x6, 0x4, 
    0x2, 0xac, 0xaa, 0x3, 0x2, 0x2, 0x2, 0xad, 0xb0, 0x3, 0x2, 0x2, 0x2, 
    0xae, 0xac, 0x3, 0x2, 0x2, 0x2, 0xae, 0xaf, 0x3, 0x2, 0x2, 0x2, 0xaf, 
    0xb3, 0x3, 0x2, 0x2, 0x2, 0xb0, 0xae, 0x3, 0x2, 0x2, 0x2, 0xb1, 0xb3, 
    0x3, 0x2, 0x2, 0x2, 0xb2, 0xa9, 0x3, 0x2, 0x2, 0x2, 0xb2, 0xb1, 0x3, 
    0x2, 0x2, 0x2, 0xb3, 0x1b, 0x3, 0x2, 0x2, 0x2, 0xb4, 0xb8, 0x7, 0x17, 
    0x2, 0x2, 0xb5, 0xb8, 0x7, 0x18, 0x2, 0x2, 0xb6, 0xb8, 0x7, 0x19, 0x2, 
    0x2, 0xb7, 0xb4, 0x3, 0x2, 0x2, 0x2, 0xb7, 0xb5, 0x3, 0x2, 0x2, 0x2, 
    0xb7, 0xb6, 0x3, 0x2, 0x2, 0x2, 0xb8, 0x1d, 0x3, 0x2, 0x2, 0x2, 0x11, 
    0x21, 0x2f, 0x32, 0x3f, 0x5f, 0x61, 0x6c, 0x74, 0x84, 0x8a, 0x98, 0xa0, 
    0xae, 0xb2, 0xb7, 
  };

  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

GrammarParser::Initializer GrammarParser::_init;
