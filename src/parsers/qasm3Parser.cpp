
// Generated from src/parsers/qasm3.g4 by ANTLR 4.9.2


#include "qasm3Listener.h"

#include "qasm3Parser.h"


using namespace antlrcpp;
using namespace antlr4;

qasm3Parser::qasm3Parser(TokenStream *input) : Parser(input) {
  _interpreter = new atn::ParserATNSimulator(this, _atn, _decisionToDFA, _sharedContextCache);
}

qasm3Parser::~qasm3Parser() {
  delete _interpreter;
}

std::string qasm3Parser::getGrammarFileName() const {
  return "qasm3.g4";
}

const std::vector<std::string>& qasm3Parser::getRuleNames() const {
  return _ruleNames;
}

dfa::Vocabulary& qasm3Parser::getVocabulary() const {
  return _vocabulary;
}


//----------------- ProgramContext ------------------------------------------------------------------

qasm3Parser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::HeaderContext* qasm3Parser::ProgramContext::header() {
  return getRuleContext<qasm3Parser::HeaderContext>(0);
}

std::vector<qasm3Parser::GlobalStatementContext *> qasm3Parser::ProgramContext::globalStatement() {
  return getRuleContexts<qasm3Parser::GlobalStatementContext>();
}

qasm3Parser::GlobalStatementContext* qasm3Parser::ProgramContext::globalStatement(size_t i) {
  return getRuleContext<qasm3Parser::GlobalStatementContext>(i);
}

std::vector<qasm3Parser::StatementContext *> qasm3Parser::ProgramContext::statement() {
  return getRuleContexts<qasm3Parser::StatementContext>();
}

qasm3Parser::StatementContext* qasm3Parser::ProgramContext::statement(size_t i) {
  return getRuleContext<qasm3Parser::StatementContext>(i);
}


size_t qasm3Parser::ProgramContext::getRuleIndex() const {
  return qasm3Parser::RuleProgram;
}

void qasm3Parser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void qasm3Parser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}

qasm3Parser::ProgramContext* qasm3Parser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, qasm3Parser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(214);
    header();
    setState(219);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << qasm3Parser::T__4)
      | (1ULL << qasm3Parser::T__5)
      | (1ULL << qasm3Parser::T__6)
      | (1ULL << qasm3Parser::T__7)
      | (1ULL << qasm3Parser::T__8)
      | (1ULL << qasm3Parser::T__9)
      | (1ULL << qasm3Parser::T__10)
      | (1ULL << qasm3Parser::T__11)
      | (1ULL << qasm3Parser::T__12)
      | (1ULL << qasm3Parser::T__13)
      | (1ULL << qasm3Parser::T__14)
      | (1ULL << qasm3Parser::T__15)
      | (1ULL << qasm3Parser::T__16)
      | (1ULL << qasm3Parser::T__18)
      | (1ULL << qasm3Parser::T__19)
      | (1ULL << qasm3Parser::T__20)
      | (1ULL << qasm3Parser::T__21)
      | (1ULL << qasm3Parser::T__22)
      | (1ULL << qasm3Parser::T__23)
      | (1ULL << qasm3Parser::T__24)
      | (1ULL << qasm3Parser::T__25)
      | (1ULL << qasm3Parser::T__27)
      | (1ULL << qasm3Parser::T__28)
      | (1ULL << qasm3Parser::T__29)
      | (1ULL << qasm3Parser::T__30)
      | (1ULL << qasm3Parser::T__31)
      | (1ULL << qasm3Parser::T__45)
      | (1ULL << qasm3Parser::T__46)
      | (1ULL << qasm3Parser::T__47)
      | (1ULL << qasm3Parser::T__48)
      | (1ULL << qasm3Parser::T__49)
      | (1ULL << qasm3Parser::T__50)
      | (1ULL << qasm3Parser::T__51)
      | (1ULL << qasm3Parser::T__52)
      | (1ULL << qasm3Parser::T__53)
      | (1ULL << qasm3Parser::T__54)
      | (1ULL << qasm3Parser::T__55))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (qasm3Parser::T__68 - 69))
      | (1ULL << (qasm3Parser::T__70 - 69))
      | (1ULL << (qasm3Parser::T__72 - 69))
      | (1ULL << (qasm3Parser::T__73 - 69))
      | (1ULL << (qasm3Parser::T__77 - 69))
      | (1ULL << (qasm3Parser::T__78 - 69))
      | (1ULL << (qasm3Parser::T__79 - 69))
      | (1ULL << (qasm3Parser::T__80 - 69))
      | (1ULL << (qasm3Parser::T__81 - 69))
      | (1ULL << (qasm3Parser::T__82 - 69))
      | (1ULL << (qasm3Parser::T__83 - 69))
      | (1ULL << (qasm3Parser::T__84 - 69))
      | (1ULL << (qasm3Parser::T__85 - 69))
      | (1ULL << (qasm3Parser::T__86 - 69))
      | (1ULL << (qasm3Parser::T__87 - 69))
      | (1ULL << (qasm3Parser::LPAREN - 69))
      | (1ULL << (qasm3Parser::MINUS - 69))
      | (1ULL << (qasm3Parser::ImagNumber - 69))
      | (1ULL << (qasm3Parser::Constant - 69))
      | (1ULL << (qasm3Parser::Integer - 69))
      | (1ULL << (qasm3Parser::Identifier - 69))
      | (1ULL << (qasm3Parser::RealNumber - 69))
      | (1ULL << (qasm3Parser::TimingLiteral - 69))
      | (1ULL << (qasm3Parser::StringLiteral - 69)))) != 0)) {
      setState(217);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case qasm3Parser::T__4:
        case qasm3Parser::T__5:
        case qasm3Parser::T__18:
        case qasm3Parser::T__77:
        case qasm3Parser::T__78:
        case qasm3Parser::T__79:
        case qasm3Parser::T__86:
        case qasm3Parser::T__87: {
          setState(215);
          globalStatement();
          break;
        }

        case qasm3Parser::T__6:
        case qasm3Parser::T__7:
        case qasm3Parser::T__8:
        case qasm3Parser::T__9:
        case qasm3Parser::T__10:
        case qasm3Parser::T__11:
        case qasm3Parser::T__12:
        case qasm3Parser::T__13:
        case qasm3Parser::T__14:
        case qasm3Parser::T__15:
        case qasm3Parser::T__16:
        case qasm3Parser::T__19:
        case qasm3Parser::T__20:
        case qasm3Parser::T__21:
        case qasm3Parser::T__22:
        case qasm3Parser::T__23:
        case qasm3Parser::T__24:
        case qasm3Parser::T__25:
        case qasm3Parser::T__27:
        case qasm3Parser::T__28:
        case qasm3Parser::T__29:
        case qasm3Parser::T__30:
        case qasm3Parser::T__31:
        case qasm3Parser::T__45:
        case qasm3Parser::T__46:
        case qasm3Parser::T__47:
        case qasm3Parser::T__48:
        case qasm3Parser::T__49:
        case qasm3Parser::T__50:
        case qasm3Parser::T__51:
        case qasm3Parser::T__52:
        case qasm3Parser::T__53:
        case qasm3Parser::T__54:
        case qasm3Parser::T__55:
        case qasm3Parser::T__68:
        case qasm3Parser::T__70:
        case qasm3Parser::T__72:
        case qasm3Parser::T__73:
        case qasm3Parser::T__80:
        case qasm3Parser::T__81:
        case qasm3Parser::T__82:
        case qasm3Parser::T__83:
        case qasm3Parser::T__84:
        case qasm3Parser::T__85:
        case qasm3Parser::LPAREN:
        case qasm3Parser::MINUS:
        case qasm3Parser::ImagNumber:
        case qasm3Parser::Constant:
        case qasm3Parser::Integer:
        case qasm3Parser::Identifier:
        case qasm3Parser::RealNumber:
        case qasm3Parser::TimingLiteral:
        case qasm3Parser::StringLiteral: {
          setState(216);
          statement();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(221);
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

//----------------- HeaderContext ------------------------------------------------------------------

qasm3Parser::HeaderContext::HeaderContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::VersionContext* qasm3Parser::HeaderContext::version() {
  return getRuleContext<qasm3Parser::VersionContext>(0);
}

std::vector<qasm3Parser::IncludeContext *> qasm3Parser::HeaderContext::include() {
  return getRuleContexts<qasm3Parser::IncludeContext>();
}

qasm3Parser::IncludeContext* qasm3Parser::HeaderContext::include(size_t i) {
  return getRuleContext<qasm3Parser::IncludeContext>(i);
}

std::vector<qasm3Parser::IoContext *> qasm3Parser::HeaderContext::io() {
  return getRuleContexts<qasm3Parser::IoContext>();
}

qasm3Parser::IoContext* qasm3Parser::HeaderContext::io(size_t i) {
  return getRuleContext<qasm3Parser::IoContext>(i);
}


size_t qasm3Parser::HeaderContext::getRuleIndex() const {
  return qasm3Parser::RuleHeader;
}

void qasm3Parser::HeaderContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeader(this);
}

void qasm3Parser::HeaderContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeader(this);
}

qasm3Parser::HeaderContext* qasm3Parser::header() {
  HeaderContext *_localctx = _tracker.createInstance<HeaderContext>(_ctx, getState());
  enterRule(_localctx, 2, qasm3Parser::RuleHeader);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(223);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::T__0) {
      setState(222);
      version();
    }
    setState(228);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == qasm3Parser::T__1) {
      setState(225);
      include();
      setState(230);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(234);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == qasm3Parser::T__2

    || _la == qasm3Parser::T__3) {
      setState(231);
      io();
      setState(236);
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

//----------------- VersionContext ------------------------------------------------------------------

qasm3Parser::VersionContext::VersionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::VersionContext::SEMICOLON() {
  return getToken(qasm3Parser::SEMICOLON, 0);
}

tree::TerminalNode* qasm3Parser::VersionContext::Integer() {
  return getToken(qasm3Parser::Integer, 0);
}

tree::TerminalNode* qasm3Parser::VersionContext::RealNumber() {
  return getToken(qasm3Parser::RealNumber, 0);
}


size_t qasm3Parser::VersionContext::getRuleIndex() const {
  return qasm3Parser::RuleVersion;
}

void qasm3Parser::VersionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVersion(this);
}

void qasm3Parser::VersionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVersion(this);
}

qasm3Parser::VersionContext* qasm3Parser::version() {
  VersionContext *_localctx = _tracker.createInstance<VersionContext>(_ctx, getState());
  enterRule(_localctx, 4, qasm3Parser::RuleVersion);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(237);
    match(qasm3Parser::T__0);
    setState(238);
    _la = _input->LA(1);
    if (!(_la == qasm3Parser::Integer

    || _la == qasm3Parser::RealNumber)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(239);
    match(qasm3Parser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncludeContext ------------------------------------------------------------------

qasm3Parser::IncludeContext::IncludeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::IncludeContext::StringLiteral() {
  return getToken(qasm3Parser::StringLiteral, 0);
}

tree::TerminalNode* qasm3Parser::IncludeContext::SEMICOLON() {
  return getToken(qasm3Parser::SEMICOLON, 0);
}


size_t qasm3Parser::IncludeContext::getRuleIndex() const {
  return qasm3Parser::RuleInclude;
}

void qasm3Parser::IncludeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInclude(this);
}

void qasm3Parser::IncludeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInclude(this);
}

qasm3Parser::IncludeContext* qasm3Parser::include() {
  IncludeContext *_localctx = _tracker.createInstance<IncludeContext>(_ctx, getState());
  enterRule(_localctx, 6, qasm3Parser::RuleInclude);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    match(qasm3Parser::T__1);
    setState(242);
    match(qasm3Parser::StringLiteral);
    setState(243);
    match(qasm3Parser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IoIdentifierContext ------------------------------------------------------------------

qasm3Parser::IoIdentifierContext::IoIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t qasm3Parser::IoIdentifierContext::getRuleIndex() const {
  return qasm3Parser::RuleIoIdentifier;
}

void qasm3Parser::IoIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIoIdentifier(this);
}

void qasm3Parser::IoIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIoIdentifier(this);
}

qasm3Parser::IoIdentifierContext* qasm3Parser::ioIdentifier() {
  IoIdentifierContext *_localctx = _tracker.createInstance<IoIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 8, qasm3Parser::RuleIoIdentifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(245);
    _la = _input->LA(1);
    if (!(_la == qasm3Parser::T__2

    || _la == qasm3Parser::T__3)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IoContext ------------------------------------------------------------------

qasm3Parser::IoContext::IoContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::IoIdentifierContext* qasm3Parser::IoContext::ioIdentifier() {
  return getRuleContext<qasm3Parser::IoIdentifierContext>(0);
}

qasm3Parser::ClassicalTypeContext* qasm3Parser::IoContext::classicalType() {
  return getRuleContext<qasm3Parser::ClassicalTypeContext>(0);
}

tree::TerminalNode* qasm3Parser::IoContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

tree::TerminalNode* qasm3Parser::IoContext::SEMICOLON() {
  return getToken(qasm3Parser::SEMICOLON, 0);
}


size_t qasm3Parser::IoContext::getRuleIndex() const {
  return qasm3Parser::RuleIo;
}

void qasm3Parser::IoContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIo(this);
}

void qasm3Parser::IoContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIo(this);
}

qasm3Parser::IoContext* qasm3Parser::io() {
  IoContext *_localctx = _tracker.createInstance<IoContext>(_ctx, getState());
  enterRule(_localctx, 10, qasm3Parser::RuleIo);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(247);
    ioIdentifier();
    setState(248);
    classicalType();
    setState(249);
    match(qasm3Parser::Identifier);
    setState(250);
    match(qasm3Parser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GlobalStatementContext ------------------------------------------------------------------

qasm3Parser::GlobalStatementContext::GlobalStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::SubroutineDefinitionContext* qasm3Parser::GlobalStatementContext::subroutineDefinition() {
  return getRuleContext<qasm3Parser::SubroutineDefinitionContext>(0);
}

qasm3Parser::ExternDeclarationContext* qasm3Parser::GlobalStatementContext::externDeclaration() {
  return getRuleContext<qasm3Parser::ExternDeclarationContext>(0);
}

qasm3Parser::QuantumGateDefinitionContext* qasm3Parser::GlobalStatementContext::quantumGateDefinition() {
  return getRuleContext<qasm3Parser::QuantumGateDefinitionContext>(0);
}

qasm3Parser::CalibrationContext* qasm3Parser::GlobalStatementContext::calibration() {
  return getRuleContext<qasm3Parser::CalibrationContext>(0);
}

qasm3Parser::QuantumDeclarationStatementContext* qasm3Parser::GlobalStatementContext::quantumDeclarationStatement() {
  return getRuleContext<qasm3Parser::QuantumDeclarationStatementContext>(0);
}

qasm3Parser::PragmaContext* qasm3Parser::GlobalStatementContext::pragma() {
  return getRuleContext<qasm3Parser::PragmaContext>(0);
}


size_t qasm3Parser::GlobalStatementContext::getRuleIndex() const {
  return qasm3Parser::RuleGlobalStatement;
}

void qasm3Parser::GlobalStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGlobalStatement(this);
}

void qasm3Parser::GlobalStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGlobalStatement(this);
}

qasm3Parser::GlobalStatementContext* qasm3Parser::globalStatement() {
  GlobalStatementContext *_localctx = _tracker.createInstance<GlobalStatementContext>(_ctx, getState());
  enterRule(_localctx, 12, qasm3Parser::RuleGlobalStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(258);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__78: {
        enterOuterAlt(_localctx, 1);
        setState(252);
        subroutineDefinition();
        break;
      }

      case qasm3Parser::T__77: {
        enterOuterAlt(_localctx, 2);
        setState(253);
        externDeclaration();
        break;
      }

      case qasm3Parser::T__18: {
        enterOuterAlt(_localctx, 3);
        setState(254);
        quantumGateDefinition();
        break;
      }

      case qasm3Parser::T__86:
      case qasm3Parser::T__87: {
        enterOuterAlt(_localctx, 4);
        setState(255);
        calibration();
        break;
      }

      case qasm3Parser::T__4:
      case qasm3Parser::T__5: {
        enterOuterAlt(_localctx, 5);
        setState(256);
        quantumDeclarationStatement();
        break;
      }

      case qasm3Parser::T__79: {
        enterOuterAlt(_localctx, 6);
        setState(257);
        pragma();
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

//----------------- StatementContext ------------------------------------------------------------------

qasm3Parser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::ExpressionStatementContext* qasm3Parser::StatementContext::expressionStatement() {
  return getRuleContext<qasm3Parser::ExpressionStatementContext>(0);
}

qasm3Parser::AssignmentStatementContext* qasm3Parser::StatementContext::assignmentStatement() {
  return getRuleContext<qasm3Parser::AssignmentStatementContext>(0);
}

qasm3Parser::ClassicalDeclarationStatementContext* qasm3Parser::StatementContext::classicalDeclarationStatement() {
  return getRuleContext<qasm3Parser::ClassicalDeclarationStatementContext>(0);
}

qasm3Parser::BranchingStatementContext* qasm3Parser::StatementContext::branchingStatement() {
  return getRuleContext<qasm3Parser::BranchingStatementContext>(0);
}

qasm3Parser::LoopStatementContext* qasm3Parser::StatementContext::loopStatement() {
  return getRuleContext<qasm3Parser::LoopStatementContext>(0);
}

qasm3Parser::EndStatementContext* qasm3Parser::StatementContext::endStatement() {
  return getRuleContext<qasm3Parser::EndStatementContext>(0);
}

qasm3Parser::AliasStatementContext* qasm3Parser::StatementContext::aliasStatement() {
  return getRuleContext<qasm3Parser::AliasStatementContext>(0);
}

qasm3Parser::QuantumStatementContext* qasm3Parser::StatementContext::quantumStatement() {
  return getRuleContext<qasm3Parser::QuantumStatementContext>(0);
}


size_t qasm3Parser::StatementContext::getRuleIndex() const {
  return qasm3Parser::RuleStatement;
}

void qasm3Parser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void qasm3Parser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}

qasm3Parser::StatementContext* qasm3Parser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 14, qasm3Parser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(268);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(260);
      expressionStatement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(261);
      assignmentStatement();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(262);
      classicalDeclarationStatement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(263);
      branchingStatement();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(264);
      loopStatement();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(265);
      endStatement();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(266);
      aliasStatement();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(267);
      quantumStatement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantumDeclarationStatementContext ------------------------------------------------------------------

qasm3Parser::QuantumDeclarationStatementContext::QuantumDeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::QuantumDeclarationContext* qasm3Parser::QuantumDeclarationStatementContext::quantumDeclaration() {
  return getRuleContext<qasm3Parser::QuantumDeclarationContext>(0);
}

tree::TerminalNode* qasm3Parser::QuantumDeclarationStatementContext::SEMICOLON() {
  return getToken(qasm3Parser::SEMICOLON, 0);
}


size_t qasm3Parser::QuantumDeclarationStatementContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumDeclarationStatement;
}

void qasm3Parser::QuantumDeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumDeclarationStatement(this);
}

void qasm3Parser::QuantumDeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumDeclarationStatement(this);
}

qasm3Parser::QuantumDeclarationStatementContext* qasm3Parser::quantumDeclarationStatement() {
  QuantumDeclarationStatementContext *_localctx = _tracker.createInstance<QuantumDeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 16, qasm3Parser::RuleQuantumDeclarationStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(270);
    quantumDeclaration();
    setState(271);
    match(qasm3Parser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassicalDeclarationStatementContext ------------------------------------------------------------------

qasm3Parser::ClassicalDeclarationStatementContext::ClassicalDeclarationStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::ClassicalDeclarationStatementContext::SEMICOLON() {
  return getToken(qasm3Parser::SEMICOLON, 0);
}

qasm3Parser::ClassicalDeclarationContext* qasm3Parser::ClassicalDeclarationStatementContext::classicalDeclaration() {
  return getRuleContext<qasm3Parser::ClassicalDeclarationContext>(0);
}

qasm3Parser::ConstantDeclarationContext* qasm3Parser::ClassicalDeclarationStatementContext::constantDeclaration() {
  return getRuleContext<qasm3Parser::ConstantDeclarationContext>(0);
}


size_t qasm3Parser::ClassicalDeclarationStatementContext::getRuleIndex() const {
  return qasm3Parser::RuleClassicalDeclarationStatement;
}

void qasm3Parser::ClassicalDeclarationStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassicalDeclarationStatement(this);
}

void qasm3Parser::ClassicalDeclarationStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassicalDeclarationStatement(this);
}

qasm3Parser::ClassicalDeclarationStatementContext* qasm3Parser::classicalDeclarationStatement() {
  ClassicalDeclarationStatementContext *_localctx = _tracker.createInstance<ClassicalDeclarationStatementContext>(_ctx, getState());
  enterRule(_localctx, 18, qasm3Parser::RuleClassicalDeclarationStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(275);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__6:
      case qasm3Parser::T__7:
      case qasm3Parser::T__8:
      case qasm3Parser::T__9:
      case qasm3Parser::T__10:
      case qasm3Parser::T__11:
      case qasm3Parser::T__12:
      case qasm3Parser::T__13:
      case qasm3Parser::T__14:
      case qasm3Parser::T__80:
      case qasm3Parser::T__81: {
        setState(273);
        classicalDeclaration();
        break;
      }

      case qasm3Parser::T__15: {
        setState(274);
        constantDeclaration();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(277);
    match(qasm3Parser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassicalAssignmentContext ------------------------------------------------------------------

qasm3Parser::ClassicalAssignmentContext::ClassicalAssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::ClassicalAssignmentContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

qasm3Parser::AssignmentOperatorContext* qasm3Parser::ClassicalAssignmentContext::assignmentOperator() {
  return getRuleContext<qasm3Parser::AssignmentOperatorContext>(0);
}

qasm3Parser::ExpressionContext* qasm3Parser::ClassicalAssignmentContext::expression() {
  return getRuleContext<qasm3Parser::ExpressionContext>(0);
}

qasm3Parser::DesignatorContext* qasm3Parser::ClassicalAssignmentContext::designator() {
  return getRuleContext<qasm3Parser::DesignatorContext>(0);
}


size_t qasm3Parser::ClassicalAssignmentContext::getRuleIndex() const {
  return qasm3Parser::RuleClassicalAssignment;
}

void qasm3Parser::ClassicalAssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassicalAssignment(this);
}

void qasm3Parser::ClassicalAssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassicalAssignment(this);
}

qasm3Parser::ClassicalAssignmentContext* qasm3Parser::classicalAssignment() {
  ClassicalAssignmentContext *_localctx = _tracker.createInstance<ClassicalAssignmentContext>(_ctx, getState());
  enterRule(_localctx, 20, qasm3Parser::RuleClassicalAssignment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(qasm3Parser::Identifier);
    setState(281);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::LBRACKET) {
      setState(280);
      designator();
    }
    setState(283);
    assignmentOperator();
    setState(284);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentStatementContext ------------------------------------------------------------------

qasm3Parser::AssignmentStatementContext::AssignmentStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::AssignmentStatementContext::SEMICOLON() {
  return getToken(qasm3Parser::SEMICOLON, 0);
}

qasm3Parser::ClassicalAssignmentContext* qasm3Parser::AssignmentStatementContext::classicalAssignment() {
  return getRuleContext<qasm3Parser::ClassicalAssignmentContext>(0);
}

qasm3Parser::QuantumMeasurementAssignmentContext* qasm3Parser::AssignmentStatementContext::quantumMeasurementAssignment() {
  return getRuleContext<qasm3Parser::QuantumMeasurementAssignmentContext>(0);
}


size_t qasm3Parser::AssignmentStatementContext::getRuleIndex() const {
  return qasm3Parser::RuleAssignmentStatement;
}

void qasm3Parser::AssignmentStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentStatement(this);
}

void qasm3Parser::AssignmentStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentStatement(this);
}

qasm3Parser::AssignmentStatementContext* qasm3Parser::assignmentStatement() {
  AssignmentStatementContext *_localctx = _tracker.createInstance<AssignmentStatementContext>(_ctx, getState());
  enterRule(_localctx, 22, qasm3Parser::RuleAssignmentStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(288);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(286);
      classicalAssignment();
      break;
    }

    case 2: {
      setState(287);
      quantumMeasurementAssignment();
      break;
    }

    default:
      break;
    }
    setState(290);
    match(qasm3Parser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnSignatureContext ------------------------------------------------------------------

qasm3Parser::ReturnSignatureContext::ReturnSignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::ReturnSignatureContext::ARROW() {
  return getToken(qasm3Parser::ARROW, 0);
}

qasm3Parser::ClassicalTypeContext* qasm3Parser::ReturnSignatureContext::classicalType() {
  return getRuleContext<qasm3Parser::ClassicalTypeContext>(0);
}


size_t qasm3Parser::ReturnSignatureContext::getRuleIndex() const {
  return qasm3Parser::RuleReturnSignature;
}

void qasm3Parser::ReturnSignatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnSignature(this);
}

void qasm3Parser::ReturnSignatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnSignature(this);
}

qasm3Parser::ReturnSignatureContext* qasm3Parser::returnSignature() {
  ReturnSignatureContext *_localctx = _tracker.createInstance<ReturnSignatureContext>(_ctx, getState());
  enterRule(_localctx, 24, qasm3Parser::RuleReturnSignature);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(292);
    match(qasm3Parser::ARROW);
    setState(293);
    classicalType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DesignatorContext ------------------------------------------------------------------

qasm3Parser::DesignatorContext::DesignatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::DesignatorContext::LBRACKET() {
  return getToken(qasm3Parser::LBRACKET, 0);
}

qasm3Parser::ExpressionContext* qasm3Parser::DesignatorContext::expression() {
  return getRuleContext<qasm3Parser::ExpressionContext>(0);
}

tree::TerminalNode* qasm3Parser::DesignatorContext::RBRACKET() {
  return getToken(qasm3Parser::RBRACKET, 0);
}


size_t qasm3Parser::DesignatorContext::getRuleIndex() const {
  return qasm3Parser::RuleDesignator;
}

void qasm3Parser::DesignatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDesignator(this);
}

void qasm3Parser::DesignatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDesignator(this);
}

qasm3Parser::DesignatorContext* qasm3Parser::designator() {
  DesignatorContext *_localctx = _tracker.createInstance<DesignatorContext>(_ctx, getState());
  enterRule(_localctx, 26, qasm3Parser::RuleDesignator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    match(qasm3Parser::LBRACKET);
    setState(296);
    expression(0);
    setState(297);
    match(qasm3Parser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoubleDesignatorContext ------------------------------------------------------------------

qasm3Parser::DoubleDesignatorContext::DoubleDesignatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::DoubleDesignatorContext::LBRACKET() {
  return getToken(qasm3Parser::LBRACKET, 0);
}

std::vector<qasm3Parser::ExpressionContext *> qasm3Parser::DoubleDesignatorContext::expression() {
  return getRuleContexts<qasm3Parser::ExpressionContext>();
}

qasm3Parser::ExpressionContext* qasm3Parser::DoubleDesignatorContext::expression(size_t i) {
  return getRuleContext<qasm3Parser::ExpressionContext>(i);
}

tree::TerminalNode* qasm3Parser::DoubleDesignatorContext::COMMA() {
  return getToken(qasm3Parser::COMMA, 0);
}

tree::TerminalNode* qasm3Parser::DoubleDesignatorContext::RBRACKET() {
  return getToken(qasm3Parser::RBRACKET, 0);
}


size_t qasm3Parser::DoubleDesignatorContext::getRuleIndex() const {
  return qasm3Parser::RuleDoubleDesignator;
}

void qasm3Parser::DoubleDesignatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoubleDesignator(this);
}

void qasm3Parser::DoubleDesignatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoubleDesignator(this);
}

qasm3Parser::DoubleDesignatorContext* qasm3Parser::doubleDesignator() {
  DoubleDesignatorContext *_localctx = _tracker.createInstance<DoubleDesignatorContext>(_ctx, getState());
  enterRule(_localctx, 28, qasm3Parser::RuleDoubleDesignator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(299);
    match(qasm3Parser::LBRACKET);
    setState(300);
    expression(0);
    setState(301);
    match(qasm3Parser::COMMA);
    setState(302);
    expression(0);
    setState(303);
    match(qasm3Parser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdentifierListContext ------------------------------------------------------------------

qasm3Parser::IdentifierListContext::IdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> qasm3Parser::IdentifierListContext::Identifier() {
  return getTokens(qasm3Parser::Identifier);
}

tree::TerminalNode* qasm3Parser::IdentifierListContext::Identifier(size_t i) {
  return getToken(qasm3Parser::Identifier, i);
}

std::vector<tree::TerminalNode *> qasm3Parser::IdentifierListContext::COMMA() {
  return getTokens(qasm3Parser::COMMA);
}

tree::TerminalNode* qasm3Parser::IdentifierListContext::COMMA(size_t i) {
  return getToken(qasm3Parser::COMMA, i);
}


size_t qasm3Parser::IdentifierListContext::getRuleIndex() const {
  return qasm3Parser::RuleIdentifierList;
}

void qasm3Parser::IdentifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierList(this);
}

void qasm3Parser::IdentifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierList(this);
}

qasm3Parser::IdentifierListContext* qasm3Parser::identifierList() {
  IdentifierListContext *_localctx = _tracker.createInstance<IdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 30, qasm3Parser::RuleIdentifierList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(309);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(305);
        match(qasm3Parser::Identifier);
        setState(306);
        match(qasm3Parser::COMMA); 
      }
      setState(311);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx);
    }
    setState(312);
    match(qasm3Parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantumDeclarationContext ------------------------------------------------------------------

qasm3Parser::QuantumDeclarationContext::QuantumDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::QuantumDeclarationContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

qasm3Parser::DesignatorContext* qasm3Parser::QuantumDeclarationContext::designator() {
  return getRuleContext<qasm3Parser::DesignatorContext>(0);
}


size_t qasm3Parser::QuantumDeclarationContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumDeclaration;
}

void qasm3Parser::QuantumDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumDeclaration(this);
}

void qasm3Parser::QuantumDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumDeclaration(this);
}

qasm3Parser::QuantumDeclarationContext* qasm3Parser::quantumDeclaration() {
  QuantumDeclarationContext *_localctx = _tracker.createInstance<QuantumDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 32, qasm3Parser::RuleQuantumDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(324);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(314);
        match(qasm3Parser::T__4);
        setState(315);
        match(qasm3Parser::Identifier);
        setState(317);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == qasm3Parser::LBRACKET) {
          setState(316);
          designator();
        }
        break;
      }

      case qasm3Parser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(319);
        match(qasm3Parser::T__5);
        setState(321);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == qasm3Parser::LBRACKET) {
          setState(320);
          designator();
        }
        setState(323);
        match(qasm3Parser::Identifier);
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

//----------------- QuantumArgumentContext ------------------------------------------------------------------

qasm3Parser::QuantumArgumentContext::QuantumArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::QuantumArgumentContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

qasm3Parser::DesignatorContext* qasm3Parser::QuantumArgumentContext::designator() {
  return getRuleContext<qasm3Parser::DesignatorContext>(0);
}


size_t qasm3Parser::QuantumArgumentContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumArgument;
}

void qasm3Parser::QuantumArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumArgument(this);
}

void qasm3Parser::QuantumArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumArgument(this);
}

qasm3Parser::QuantumArgumentContext* qasm3Parser::quantumArgument() {
  QuantumArgumentContext *_localctx = _tracker.createInstance<QuantumArgumentContext>(_ctx, getState());
  enterRule(_localctx, 34, qasm3Parser::RuleQuantumArgument);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(336);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__4: {
        enterOuterAlt(_localctx, 1);
        setState(326);
        match(qasm3Parser::T__4);
        setState(327);
        match(qasm3Parser::Identifier);
        setState(329);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == qasm3Parser::LBRACKET) {
          setState(328);
          designator();
        }
        break;
      }

      case qasm3Parser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(331);
        match(qasm3Parser::T__5);
        setState(333);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == qasm3Parser::LBRACKET) {
          setState(332);
          designator();
        }
        setState(335);
        match(qasm3Parser::Identifier);
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

//----------------- QuantumArgumentListContext ------------------------------------------------------------------

qasm3Parser::QuantumArgumentListContext::QuantumArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<qasm3Parser::QuantumArgumentContext *> qasm3Parser::QuantumArgumentListContext::quantumArgument() {
  return getRuleContexts<qasm3Parser::QuantumArgumentContext>();
}

qasm3Parser::QuantumArgumentContext* qasm3Parser::QuantumArgumentListContext::quantumArgument(size_t i) {
  return getRuleContext<qasm3Parser::QuantumArgumentContext>(i);
}

std::vector<tree::TerminalNode *> qasm3Parser::QuantumArgumentListContext::COMMA() {
  return getTokens(qasm3Parser::COMMA);
}

tree::TerminalNode* qasm3Parser::QuantumArgumentListContext::COMMA(size_t i) {
  return getToken(qasm3Parser::COMMA, i);
}


size_t qasm3Parser::QuantumArgumentListContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumArgumentList;
}

void qasm3Parser::QuantumArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumArgumentList(this);
}

void qasm3Parser::QuantumArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumArgumentList(this);
}

qasm3Parser::QuantumArgumentListContext* qasm3Parser::quantumArgumentList() {
  QuantumArgumentListContext *_localctx = _tracker.createInstance<QuantumArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 36, qasm3Parser::RuleQuantumArgumentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(338);
    quantumArgument();
    setState(343);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == qasm3Parser::COMMA) {
      setState(339);
      match(qasm3Parser::COMMA);
      setState(340);
      quantumArgument();
      setState(345);
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

//----------------- BitTypeContext ------------------------------------------------------------------

qasm3Parser::BitTypeContext::BitTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t qasm3Parser::BitTypeContext::getRuleIndex() const {
  return qasm3Parser::RuleBitType;
}

void qasm3Parser::BitTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitType(this);
}

void qasm3Parser::BitTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitType(this);
}

qasm3Parser::BitTypeContext* qasm3Parser::bitType() {
  BitTypeContext *_localctx = _tracker.createInstance<BitTypeContext>(_ctx, getState());
  enterRule(_localctx, 38, qasm3Parser::RuleBitType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(346);
    _la = _input->LA(1);
    if (!(_la == qasm3Parser::T__6

    || _la == qasm3Parser::T__7)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleDesignatorTypeContext ------------------------------------------------------------------

qasm3Parser::SingleDesignatorTypeContext::SingleDesignatorTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t qasm3Parser::SingleDesignatorTypeContext::getRuleIndex() const {
  return qasm3Parser::RuleSingleDesignatorType;
}

void qasm3Parser::SingleDesignatorTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleDesignatorType(this);
}

void qasm3Parser::SingleDesignatorTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleDesignatorType(this);
}

qasm3Parser::SingleDesignatorTypeContext* qasm3Parser::singleDesignatorType() {
  SingleDesignatorTypeContext *_localctx = _tracker.createInstance<SingleDesignatorTypeContext>(_ctx, getState());
  enterRule(_localctx, 40, qasm3Parser::RuleSingleDesignatorType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(348);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << qasm3Parser::T__8)
      | (1ULL << qasm3Parser::T__9)
      | (1ULL << qasm3Parser::T__10)
      | (1ULL << qasm3Parser::T__11))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoubleDesignatorTypeContext ------------------------------------------------------------------

qasm3Parser::DoubleDesignatorTypeContext::DoubleDesignatorTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t qasm3Parser::DoubleDesignatorTypeContext::getRuleIndex() const {
  return qasm3Parser::RuleDoubleDesignatorType;
}

void qasm3Parser::DoubleDesignatorTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoubleDesignatorType(this);
}

void qasm3Parser::DoubleDesignatorTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoubleDesignatorType(this);
}

qasm3Parser::DoubleDesignatorTypeContext* qasm3Parser::doubleDesignatorType() {
  DoubleDesignatorTypeContext *_localctx = _tracker.createInstance<DoubleDesignatorTypeContext>(_ctx, getState());
  enterRule(_localctx, 42, qasm3Parser::RuleDoubleDesignatorType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(350);
    match(qasm3Parser::T__12);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoDesignatorTypeContext ------------------------------------------------------------------

qasm3Parser::NoDesignatorTypeContext::NoDesignatorTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::TimingTypeContext* qasm3Parser::NoDesignatorTypeContext::timingType() {
  return getRuleContext<qasm3Parser::TimingTypeContext>(0);
}


size_t qasm3Parser::NoDesignatorTypeContext::getRuleIndex() const {
  return qasm3Parser::RuleNoDesignatorType;
}

void qasm3Parser::NoDesignatorTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoDesignatorType(this);
}

void qasm3Parser::NoDesignatorTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoDesignatorType(this);
}

qasm3Parser::NoDesignatorTypeContext* qasm3Parser::noDesignatorType() {
  NoDesignatorTypeContext *_localctx = _tracker.createInstance<NoDesignatorTypeContext>(_ctx, getState());
  enterRule(_localctx, 44, qasm3Parser::RuleNoDesignatorType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(354);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__13: {
        enterOuterAlt(_localctx, 1);
        setState(352);
        match(qasm3Parser::T__13);
        break;
      }

      case qasm3Parser::T__80:
      case qasm3Parser::T__81: {
        enterOuterAlt(_localctx, 2);
        setState(353);
        timingType();
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

//----------------- ClassicalTypeContext ------------------------------------------------------------------

qasm3Parser::ClassicalTypeContext::ClassicalTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::SingleDesignatorTypeContext* qasm3Parser::ClassicalTypeContext::singleDesignatorType() {
  return getRuleContext<qasm3Parser::SingleDesignatorTypeContext>(0);
}

qasm3Parser::DesignatorContext* qasm3Parser::ClassicalTypeContext::designator() {
  return getRuleContext<qasm3Parser::DesignatorContext>(0);
}

qasm3Parser::DoubleDesignatorTypeContext* qasm3Parser::ClassicalTypeContext::doubleDesignatorType() {
  return getRuleContext<qasm3Parser::DoubleDesignatorTypeContext>(0);
}

qasm3Parser::DoubleDesignatorContext* qasm3Parser::ClassicalTypeContext::doubleDesignator() {
  return getRuleContext<qasm3Parser::DoubleDesignatorContext>(0);
}

qasm3Parser::NoDesignatorTypeContext* qasm3Parser::ClassicalTypeContext::noDesignatorType() {
  return getRuleContext<qasm3Parser::NoDesignatorTypeContext>(0);
}

qasm3Parser::BitTypeContext* qasm3Parser::ClassicalTypeContext::bitType() {
  return getRuleContext<qasm3Parser::BitTypeContext>(0);
}

tree::TerminalNode* qasm3Parser::ClassicalTypeContext::LBRACKET() {
  return getToken(qasm3Parser::LBRACKET, 0);
}

qasm3Parser::NumericTypeContext* qasm3Parser::ClassicalTypeContext::numericType() {
  return getRuleContext<qasm3Parser::NumericTypeContext>(0);
}

tree::TerminalNode* qasm3Parser::ClassicalTypeContext::RBRACKET() {
  return getToken(qasm3Parser::RBRACKET, 0);
}


size_t qasm3Parser::ClassicalTypeContext::getRuleIndex() const {
  return qasm3Parser::RuleClassicalType;
}

void qasm3Parser::ClassicalTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassicalType(this);
}

void qasm3Parser::ClassicalTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassicalType(this);
}

qasm3Parser::ClassicalTypeContext* qasm3Parser::classicalType() {
  ClassicalTypeContext *_localctx = _tracker.createInstance<ClassicalTypeContext>(_ctx, getState());
  enterRule(_localctx, 46, qasm3Parser::RuleClassicalType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(372);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__8:
      case qasm3Parser::T__9:
      case qasm3Parser::T__10:
      case qasm3Parser::T__11: {
        enterOuterAlt(_localctx, 1);
        setState(356);
        singleDesignatorType();
        setState(357);
        designator();
        break;
      }

      case qasm3Parser::T__12: {
        enterOuterAlt(_localctx, 2);
        setState(359);
        doubleDesignatorType();
        setState(360);
        doubleDesignator();
        break;
      }

      case qasm3Parser::T__13:
      case qasm3Parser::T__80:
      case qasm3Parser::T__81: {
        enterOuterAlt(_localctx, 3);
        setState(362);
        noDesignatorType();
        break;
      }

      case qasm3Parser::T__6:
      case qasm3Parser::T__7: {
        enterOuterAlt(_localctx, 4);
        setState(363);
        bitType();
        setState(365);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == qasm3Parser::LBRACKET) {
          setState(364);
          designator();
        }
        break;
      }

      case qasm3Parser::T__14: {
        enterOuterAlt(_localctx, 5);
        setState(367);
        match(qasm3Parser::T__14);
        setState(368);
        match(qasm3Parser::LBRACKET);
        setState(369);
        numericType();
        setState(370);
        match(qasm3Parser::RBRACKET);
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

//----------------- NumericTypeContext ------------------------------------------------------------------

qasm3Parser::NumericTypeContext::NumericTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::SingleDesignatorTypeContext* qasm3Parser::NumericTypeContext::singleDesignatorType() {
  return getRuleContext<qasm3Parser::SingleDesignatorTypeContext>(0);
}

qasm3Parser::DesignatorContext* qasm3Parser::NumericTypeContext::designator() {
  return getRuleContext<qasm3Parser::DesignatorContext>(0);
}

qasm3Parser::DoubleDesignatorTypeContext* qasm3Parser::NumericTypeContext::doubleDesignatorType() {
  return getRuleContext<qasm3Parser::DoubleDesignatorTypeContext>(0);
}

qasm3Parser::DoubleDesignatorContext* qasm3Parser::NumericTypeContext::doubleDesignator() {
  return getRuleContext<qasm3Parser::DoubleDesignatorContext>(0);
}


size_t qasm3Parser::NumericTypeContext::getRuleIndex() const {
  return qasm3Parser::RuleNumericType;
}

void qasm3Parser::NumericTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumericType(this);
}

void qasm3Parser::NumericTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumericType(this);
}

qasm3Parser::NumericTypeContext* qasm3Parser::numericType() {
  NumericTypeContext *_localctx = _tracker.createInstance<NumericTypeContext>(_ctx, getState());
  enterRule(_localctx, 48, qasm3Parser::RuleNumericType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(380);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__8:
      case qasm3Parser::T__9:
      case qasm3Parser::T__10:
      case qasm3Parser::T__11: {
        enterOuterAlt(_localctx, 1);
        setState(374);
        singleDesignatorType();
        setState(375);
        designator();
        break;
      }

      case qasm3Parser::T__12: {
        enterOuterAlt(_localctx, 2);
        setState(377);
        doubleDesignatorType();
        setState(378);
        doubleDesignator();
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

//----------------- ConstantDeclarationContext ------------------------------------------------------------------

qasm3Parser::ConstantDeclarationContext::ConstantDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::ConstantDeclarationContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

qasm3Parser::EqualsExpressionContext* qasm3Parser::ConstantDeclarationContext::equalsExpression() {
  return getRuleContext<qasm3Parser::EqualsExpressionContext>(0);
}


size_t qasm3Parser::ConstantDeclarationContext::getRuleIndex() const {
  return qasm3Parser::RuleConstantDeclaration;
}

void qasm3Parser::ConstantDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConstantDeclaration(this);
}

void qasm3Parser::ConstantDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConstantDeclaration(this);
}

qasm3Parser::ConstantDeclarationContext* qasm3Parser::constantDeclaration() {
  ConstantDeclarationContext *_localctx = _tracker.createInstance<ConstantDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 50, qasm3Parser::RuleConstantDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(382);
    match(qasm3Parser::T__15);
    setState(383);
    match(qasm3Parser::Identifier);
    setState(384);
    equalsExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleDesignatorDeclarationContext ------------------------------------------------------------------

qasm3Parser::SingleDesignatorDeclarationContext::SingleDesignatorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::SingleDesignatorTypeContext* qasm3Parser::SingleDesignatorDeclarationContext::singleDesignatorType() {
  return getRuleContext<qasm3Parser::SingleDesignatorTypeContext>(0);
}

qasm3Parser::DesignatorContext* qasm3Parser::SingleDesignatorDeclarationContext::designator() {
  return getRuleContext<qasm3Parser::DesignatorContext>(0);
}

tree::TerminalNode* qasm3Parser::SingleDesignatorDeclarationContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

qasm3Parser::EqualsExpressionContext* qasm3Parser::SingleDesignatorDeclarationContext::equalsExpression() {
  return getRuleContext<qasm3Parser::EqualsExpressionContext>(0);
}


size_t qasm3Parser::SingleDesignatorDeclarationContext::getRuleIndex() const {
  return qasm3Parser::RuleSingleDesignatorDeclaration;
}

void qasm3Parser::SingleDesignatorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleDesignatorDeclaration(this);
}

void qasm3Parser::SingleDesignatorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleDesignatorDeclaration(this);
}

qasm3Parser::SingleDesignatorDeclarationContext* qasm3Parser::singleDesignatorDeclaration() {
  SingleDesignatorDeclarationContext *_localctx = _tracker.createInstance<SingleDesignatorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 52, qasm3Parser::RuleSingleDesignatorDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(386);
    singleDesignatorType();
    setState(387);
    designator();
    setState(388);
    match(qasm3Parser::Identifier);
    setState(390);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::EQUALS) {
      setState(389);
      equalsExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DoubleDesignatorDeclarationContext ------------------------------------------------------------------

qasm3Parser::DoubleDesignatorDeclarationContext::DoubleDesignatorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::DoubleDesignatorTypeContext* qasm3Parser::DoubleDesignatorDeclarationContext::doubleDesignatorType() {
  return getRuleContext<qasm3Parser::DoubleDesignatorTypeContext>(0);
}

qasm3Parser::DoubleDesignatorContext* qasm3Parser::DoubleDesignatorDeclarationContext::doubleDesignator() {
  return getRuleContext<qasm3Parser::DoubleDesignatorContext>(0);
}

tree::TerminalNode* qasm3Parser::DoubleDesignatorDeclarationContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

qasm3Parser::EqualsExpressionContext* qasm3Parser::DoubleDesignatorDeclarationContext::equalsExpression() {
  return getRuleContext<qasm3Parser::EqualsExpressionContext>(0);
}


size_t qasm3Parser::DoubleDesignatorDeclarationContext::getRuleIndex() const {
  return qasm3Parser::RuleDoubleDesignatorDeclaration;
}

void qasm3Parser::DoubleDesignatorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDoubleDesignatorDeclaration(this);
}

void qasm3Parser::DoubleDesignatorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDoubleDesignatorDeclaration(this);
}

qasm3Parser::DoubleDesignatorDeclarationContext* qasm3Parser::doubleDesignatorDeclaration() {
  DoubleDesignatorDeclarationContext *_localctx = _tracker.createInstance<DoubleDesignatorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 54, qasm3Parser::RuleDoubleDesignatorDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(392);
    doubleDesignatorType();
    setState(393);
    doubleDesignator();
    setState(394);
    match(qasm3Parser::Identifier);
    setState(396);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::EQUALS) {
      setState(395);
      equalsExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NoDesignatorDeclarationContext ------------------------------------------------------------------

qasm3Parser::NoDesignatorDeclarationContext::NoDesignatorDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::NoDesignatorTypeContext* qasm3Parser::NoDesignatorDeclarationContext::noDesignatorType() {
  return getRuleContext<qasm3Parser::NoDesignatorTypeContext>(0);
}

tree::TerminalNode* qasm3Parser::NoDesignatorDeclarationContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

qasm3Parser::EqualsExpressionContext* qasm3Parser::NoDesignatorDeclarationContext::equalsExpression() {
  return getRuleContext<qasm3Parser::EqualsExpressionContext>(0);
}


size_t qasm3Parser::NoDesignatorDeclarationContext::getRuleIndex() const {
  return qasm3Parser::RuleNoDesignatorDeclaration;
}

void qasm3Parser::NoDesignatorDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNoDesignatorDeclaration(this);
}

void qasm3Parser::NoDesignatorDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNoDesignatorDeclaration(this);
}

qasm3Parser::NoDesignatorDeclarationContext* qasm3Parser::noDesignatorDeclaration() {
  NoDesignatorDeclarationContext *_localctx = _tracker.createInstance<NoDesignatorDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 56, qasm3Parser::RuleNoDesignatorDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(398);
    noDesignatorType();
    setState(399);
    match(qasm3Parser::Identifier);
    setState(401);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::EQUALS) {
      setState(400);
      equalsExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BitDeclarationContext ------------------------------------------------------------------

qasm3Parser::BitDeclarationContext::BitDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::BitDeclarationContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

qasm3Parser::EqualsExpressionContext* qasm3Parser::BitDeclarationContext::equalsExpression() {
  return getRuleContext<qasm3Parser::EqualsExpressionContext>(0);
}

qasm3Parser::DesignatorContext* qasm3Parser::BitDeclarationContext::designator() {
  return getRuleContext<qasm3Parser::DesignatorContext>(0);
}


size_t qasm3Parser::BitDeclarationContext::getRuleIndex() const {
  return qasm3Parser::RuleBitDeclaration;
}

void qasm3Parser::BitDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitDeclaration(this);
}

void qasm3Parser::BitDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitDeclaration(this);
}

qasm3Parser::BitDeclarationContext* qasm3Parser::bitDeclaration() {
  BitDeclarationContext *_localctx = _tracker.createInstance<BitDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 58, qasm3Parser::RuleBitDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(413);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__7: {
        setState(403);
        match(qasm3Parser::T__7);
        setState(404);
        match(qasm3Parser::Identifier);
        setState(406);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == qasm3Parser::LBRACKET) {
          setState(405);
          designator();
        }
        break;
      }

      case qasm3Parser::T__6: {
        setState(408);
        match(qasm3Parser::T__6);
        setState(410);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == qasm3Parser::LBRACKET) {
          setState(409);
          designator();
        }
        setState(412);
        match(qasm3Parser::Identifier);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(416);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::EQUALS) {
      setState(415);
      equalsExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComplexDeclarationContext ------------------------------------------------------------------

qasm3Parser::ComplexDeclarationContext::ComplexDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::ComplexDeclarationContext::LBRACKET() {
  return getToken(qasm3Parser::LBRACKET, 0);
}

qasm3Parser::NumericTypeContext* qasm3Parser::ComplexDeclarationContext::numericType() {
  return getRuleContext<qasm3Parser::NumericTypeContext>(0);
}

tree::TerminalNode* qasm3Parser::ComplexDeclarationContext::RBRACKET() {
  return getToken(qasm3Parser::RBRACKET, 0);
}

tree::TerminalNode* qasm3Parser::ComplexDeclarationContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

qasm3Parser::EqualsExpressionContext* qasm3Parser::ComplexDeclarationContext::equalsExpression() {
  return getRuleContext<qasm3Parser::EqualsExpressionContext>(0);
}


size_t qasm3Parser::ComplexDeclarationContext::getRuleIndex() const {
  return qasm3Parser::RuleComplexDeclaration;
}

void qasm3Parser::ComplexDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComplexDeclaration(this);
}

void qasm3Parser::ComplexDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComplexDeclaration(this);
}

qasm3Parser::ComplexDeclarationContext* qasm3Parser::complexDeclaration() {
  ComplexDeclarationContext *_localctx = _tracker.createInstance<ComplexDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 60, qasm3Parser::RuleComplexDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(418);
    match(qasm3Parser::T__14);
    setState(419);
    match(qasm3Parser::LBRACKET);
    setState(420);
    numericType();
    setState(421);
    match(qasm3Parser::RBRACKET);
    setState(422);
    match(qasm3Parser::Identifier);
    setState(424);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::EQUALS) {
      setState(423);
      equalsExpression();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassicalDeclarationContext ------------------------------------------------------------------

qasm3Parser::ClassicalDeclarationContext::ClassicalDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::SingleDesignatorDeclarationContext* qasm3Parser::ClassicalDeclarationContext::singleDesignatorDeclaration() {
  return getRuleContext<qasm3Parser::SingleDesignatorDeclarationContext>(0);
}

qasm3Parser::DoubleDesignatorDeclarationContext* qasm3Parser::ClassicalDeclarationContext::doubleDesignatorDeclaration() {
  return getRuleContext<qasm3Parser::DoubleDesignatorDeclarationContext>(0);
}

qasm3Parser::NoDesignatorDeclarationContext* qasm3Parser::ClassicalDeclarationContext::noDesignatorDeclaration() {
  return getRuleContext<qasm3Parser::NoDesignatorDeclarationContext>(0);
}

qasm3Parser::BitDeclarationContext* qasm3Parser::ClassicalDeclarationContext::bitDeclaration() {
  return getRuleContext<qasm3Parser::BitDeclarationContext>(0);
}

qasm3Parser::ComplexDeclarationContext* qasm3Parser::ClassicalDeclarationContext::complexDeclaration() {
  return getRuleContext<qasm3Parser::ComplexDeclarationContext>(0);
}


size_t qasm3Parser::ClassicalDeclarationContext::getRuleIndex() const {
  return qasm3Parser::RuleClassicalDeclaration;
}

void qasm3Parser::ClassicalDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassicalDeclaration(this);
}

void qasm3Parser::ClassicalDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassicalDeclaration(this);
}

qasm3Parser::ClassicalDeclarationContext* qasm3Parser::classicalDeclaration() {
  ClassicalDeclarationContext *_localctx = _tracker.createInstance<ClassicalDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 62, qasm3Parser::RuleClassicalDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(431);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__8:
      case qasm3Parser::T__9:
      case qasm3Parser::T__10:
      case qasm3Parser::T__11: {
        enterOuterAlt(_localctx, 1);
        setState(426);
        singleDesignatorDeclaration();
        break;
      }

      case qasm3Parser::T__12: {
        enterOuterAlt(_localctx, 2);
        setState(427);
        doubleDesignatorDeclaration();
        break;
      }

      case qasm3Parser::T__13:
      case qasm3Parser::T__80:
      case qasm3Parser::T__81: {
        enterOuterAlt(_localctx, 3);
        setState(428);
        noDesignatorDeclaration();
        break;
      }

      case qasm3Parser::T__6:
      case qasm3Parser::T__7: {
        enterOuterAlt(_localctx, 4);
        setState(429);
        bitDeclaration();
        break;
      }

      case qasm3Parser::T__14: {
        enterOuterAlt(_localctx, 5);
        setState(430);
        complexDeclaration();
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

//----------------- ClassicalTypeListContext ------------------------------------------------------------------

qasm3Parser::ClassicalTypeListContext::ClassicalTypeListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<qasm3Parser::ClassicalTypeContext *> qasm3Parser::ClassicalTypeListContext::classicalType() {
  return getRuleContexts<qasm3Parser::ClassicalTypeContext>();
}

qasm3Parser::ClassicalTypeContext* qasm3Parser::ClassicalTypeListContext::classicalType(size_t i) {
  return getRuleContext<qasm3Parser::ClassicalTypeContext>(i);
}

std::vector<tree::TerminalNode *> qasm3Parser::ClassicalTypeListContext::COMMA() {
  return getTokens(qasm3Parser::COMMA);
}

tree::TerminalNode* qasm3Parser::ClassicalTypeListContext::COMMA(size_t i) {
  return getToken(qasm3Parser::COMMA, i);
}


size_t qasm3Parser::ClassicalTypeListContext::getRuleIndex() const {
  return qasm3Parser::RuleClassicalTypeList;
}

void qasm3Parser::ClassicalTypeListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassicalTypeList(this);
}

void qasm3Parser::ClassicalTypeListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassicalTypeList(this);
}

qasm3Parser::ClassicalTypeListContext* qasm3Parser::classicalTypeList() {
  ClassicalTypeListContext *_localctx = _tracker.createInstance<ClassicalTypeListContext>(_ctx, getState());
  enterRule(_localctx, 64, qasm3Parser::RuleClassicalTypeList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(438);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(433);
        classicalType();
        setState(434);
        match(qasm3Parser::COMMA); 
      }
      setState(440);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx);
    }
    setState(441);
    classicalType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassicalArgumentContext ------------------------------------------------------------------

qasm3Parser::ClassicalArgumentContext::ClassicalArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::ClassicalArgumentContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

qasm3Parser::SingleDesignatorTypeContext* qasm3Parser::ClassicalArgumentContext::singleDesignatorType() {
  return getRuleContext<qasm3Parser::SingleDesignatorTypeContext>(0);
}

qasm3Parser::DesignatorContext* qasm3Parser::ClassicalArgumentContext::designator() {
  return getRuleContext<qasm3Parser::DesignatorContext>(0);
}

qasm3Parser::DoubleDesignatorTypeContext* qasm3Parser::ClassicalArgumentContext::doubleDesignatorType() {
  return getRuleContext<qasm3Parser::DoubleDesignatorTypeContext>(0);
}

qasm3Parser::DoubleDesignatorContext* qasm3Parser::ClassicalArgumentContext::doubleDesignator() {
  return getRuleContext<qasm3Parser::DoubleDesignatorContext>(0);
}

qasm3Parser::NoDesignatorTypeContext* qasm3Parser::ClassicalArgumentContext::noDesignatorType() {
  return getRuleContext<qasm3Parser::NoDesignatorTypeContext>(0);
}

tree::TerminalNode* qasm3Parser::ClassicalArgumentContext::LBRACKET() {
  return getToken(qasm3Parser::LBRACKET, 0);
}

qasm3Parser::NumericTypeContext* qasm3Parser::ClassicalArgumentContext::numericType() {
  return getRuleContext<qasm3Parser::NumericTypeContext>(0);
}

tree::TerminalNode* qasm3Parser::ClassicalArgumentContext::RBRACKET() {
  return getToken(qasm3Parser::RBRACKET, 0);
}


size_t qasm3Parser::ClassicalArgumentContext::getRuleIndex() const {
  return qasm3Parser::RuleClassicalArgument;
}

void qasm3Parser::ClassicalArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassicalArgument(this);
}

void qasm3Parser::ClassicalArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassicalArgument(this);
}

qasm3Parser::ClassicalArgumentContext* qasm3Parser::classicalArgument() {
  ClassicalArgumentContext *_localctx = _tracker.createInstance<ClassicalArgumentContext>(_ctx, getState());
  enterRule(_localctx, 66, qasm3Parser::RuleClassicalArgument);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(470);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__8:
      case qasm3Parser::T__9:
      case qasm3Parser::T__10:
      case qasm3Parser::T__11:
      case qasm3Parser::T__12:
      case qasm3Parser::T__13:
      case qasm3Parser::T__80:
      case qasm3Parser::T__81: {
        enterOuterAlt(_localctx, 1);
        setState(450);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case qasm3Parser::T__8:
          case qasm3Parser::T__9:
          case qasm3Parser::T__10:
          case qasm3Parser::T__11: {
            setState(443);
            singleDesignatorType();
            setState(444);
            designator();
            break;
          }

          case qasm3Parser::T__12: {
            setState(446);
            doubleDesignatorType();
            setState(447);
            doubleDesignator();
            break;
          }

          case qasm3Parser::T__13:
          case qasm3Parser::T__80:
          case qasm3Parser::T__81: {
            setState(449);
            noDesignatorType();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(452);
        match(qasm3Parser::Identifier);
        break;
      }

      case qasm3Parser::T__7: {
        enterOuterAlt(_localctx, 2);
        setState(454);
        match(qasm3Parser::T__7);
        setState(455);
        match(qasm3Parser::Identifier);
        setState(457);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == qasm3Parser::LBRACKET) {
          setState(456);
          designator();
        }
        break;
      }

      case qasm3Parser::T__6: {
        enterOuterAlt(_localctx, 3);
        setState(459);
        match(qasm3Parser::T__6);
        setState(461);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == qasm3Parser::LBRACKET) {
          setState(460);
          designator();
        }
        setState(463);
        match(qasm3Parser::Identifier);
        break;
      }

      case qasm3Parser::T__14: {
        enterOuterAlt(_localctx, 4);
        setState(464);
        match(qasm3Parser::T__14);
        setState(465);
        match(qasm3Parser::LBRACKET);
        setState(466);
        numericType();
        setState(467);
        match(qasm3Parser::RBRACKET);
        setState(468);
        match(qasm3Parser::Identifier);
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

//----------------- ClassicalArgumentListContext ------------------------------------------------------------------

qasm3Parser::ClassicalArgumentListContext::ClassicalArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<qasm3Parser::ClassicalArgumentContext *> qasm3Parser::ClassicalArgumentListContext::classicalArgument() {
  return getRuleContexts<qasm3Parser::ClassicalArgumentContext>();
}

qasm3Parser::ClassicalArgumentContext* qasm3Parser::ClassicalArgumentListContext::classicalArgument(size_t i) {
  return getRuleContext<qasm3Parser::ClassicalArgumentContext>(i);
}

std::vector<tree::TerminalNode *> qasm3Parser::ClassicalArgumentListContext::COMMA() {
  return getTokens(qasm3Parser::COMMA);
}

tree::TerminalNode* qasm3Parser::ClassicalArgumentListContext::COMMA(size_t i) {
  return getToken(qasm3Parser::COMMA, i);
}


size_t qasm3Parser::ClassicalArgumentListContext::getRuleIndex() const {
  return qasm3Parser::RuleClassicalArgumentList;
}

void qasm3Parser::ClassicalArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterClassicalArgumentList(this);
}

void qasm3Parser::ClassicalArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitClassicalArgumentList(this);
}

qasm3Parser::ClassicalArgumentListContext* qasm3Parser::classicalArgumentList() {
  ClassicalArgumentListContext *_localctx = _tracker.createInstance<ClassicalArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 68, qasm3Parser::RuleClassicalArgumentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(472);
    classicalArgument();
    setState(477);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == qasm3Parser::COMMA) {
      setState(473);
      match(qasm3Parser::COMMA);
      setState(474);
      classicalArgument();
      setState(479);
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

//----------------- AnyTypeArgumentContext ------------------------------------------------------------------

qasm3Parser::AnyTypeArgumentContext::AnyTypeArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::ClassicalArgumentContext* qasm3Parser::AnyTypeArgumentContext::classicalArgument() {
  return getRuleContext<qasm3Parser::ClassicalArgumentContext>(0);
}

qasm3Parser::QuantumArgumentContext* qasm3Parser::AnyTypeArgumentContext::quantumArgument() {
  return getRuleContext<qasm3Parser::QuantumArgumentContext>(0);
}


size_t qasm3Parser::AnyTypeArgumentContext::getRuleIndex() const {
  return qasm3Parser::RuleAnyTypeArgument;
}

void qasm3Parser::AnyTypeArgumentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnyTypeArgument(this);
}

void qasm3Parser::AnyTypeArgumentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnyTypeArgument(this);
}

qasm3Parser::AnyTypeArgumentContext* qasm3Parser::anyTypeArgument() {
  AnyTypeArgumentContext *_localctx = _tracker.createInstance<AnyTypeArgumentContext>(_ctx, getState());
  enterRule(_localctx, 70, qasm3Parser::RuleAnyTypeArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(482);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__6:
      case qasm3Parser::T__7:
      case qasm3Parser::T__8:
      case qasm3Parser::T__9:
      case qasm3Parser::T__10:
      case qasm3Parser::T__11:
      case qasm3Parser::T__12:
      case qasm3Parser::T__13:
      case qasm3Parser::T__14:
      case qasm3Parser::T__80:
      case qasm3Parser::T__81: {
        enterOuterAlt(_localctx, 1);
        setState(480);
        classicalArgument();
        break;
      }

      case qasm3Parser::T__4:
      case qasm3Parser::T__5: {
        enterOuterAlt(_localctx, 2);
        setState(481);
        quantumArgument();
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

//----------------- AnyTypeArgumentListContext ------------------------------------------------------------------

qasm3Parser::AnyTypeArgumentListContext::AnyTypeArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<qasm3Parser::AnyTypeArgumentContext *> qasm3Parser::AnyTypeArgumentListContext::anyTypeArgument() {
  return getRuleContexts<qasm3Parser::AnyTypeArgumentContext>();
}

qasm3Parser::AnyTypeArgumentContext* qasm3Parser::AnyTypeArgumentListContext::anyTypeArgument(size_t i) {
  return getRuleContext<qasm3Parser::AnyTypeArgumentContext>(i);
}

std::vector<tree::TerminalNode *> qasm3Parser::AnyTypeArgumentListContext::COMMA() {
  return getTokens(qasm3Parser::COMMA);
}

tree::TerminalNode* qasm3Parser::AnyTypeArgumentListContext::COMMA(size_t i) {
  return getToken(qasm3Parser::COMMA, i);
}


size_t qasm3Parser::AnyTypeArgumentListContext::getRuleIndex() const {
  return qasm3Parser::RuleAnyTypeArgumentList;
}

void qasm3Parser::AnyTypeArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnyTypeArgumentList(this);
}

void qasm3Parser::AnyTypeArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnyTypeArgumentList(this);
}

qasm3Parser::AnyTypeArgumentListContext* qasm3Parser::anyTypeArgumentList() {
  AnyTypeArgumentListContext *_localctx = _tracker.createInstance<AnyTypeArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 72, qasm3Parser::RuleAnyTypeArgumentList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(489);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(484);
        anyTypeArgument();
        setState(485);
        match(qasm3Parser::COMMA); 
      }
      setState(491);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    }
    setState(492);
    anyTypeArgument();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AliasStatementContext ------------------------------------------------------------------

qasm3Parser::AliasStatementContext::AliasStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::AliasStatementContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

tree::TerminalNode* qasm3Parser::AliasStatementContext::EQUALS() {
  return getToken(qasm3Parser::EQUALS, 0);
}

qasm3Parser::IndexIdentifierContext* qasm3Parser::AliasStatementContext::indexIdentifier() {
  return getRuleContext<qasm3Parser::IndexIdentifierContext>(0);
}

tree::TerminalNode* qasm3Parser::AliasStatementContext::SEMICOLON() {
  return getToken(qasm3Parser::SEMICOLON, 0);
}


size_t qasm3Parser::AliasStatementContext::getRuleIndex() const {
  return qasm3Parser::RuleAliasStatement;
}

void qasm3Parser::AliasStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAliasStatement(this);
}

void qasm3Parser::AliasStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAliasStatement(this);
}

qasm3Parser::AliasStatementContext* qasm3Parser::aliasStatement() {
  AliasStatementContext *_localctx = _tracker.createInstance<AliasStatementContext>(_ctx, getState());
  enterRule(_localctx, 74, qasm3Parser::RuleAliasStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(494);
    match(qasm3Parser::T__16);
    setState(495);
    match(qasm3Parser::Identifier);
    setState(496);
    match(qasm3Parser::EQUALS);
    setState(497);
    indexIdentifier(0);
    setState(498);
    match(qasm3Parser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IndexIdentifierContext ------------------------------------------------------------------

qasm3Parser::IndexIdentifierContext::IndexIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::IndexIdentifierContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

qasm3Parser::RangeDefinitionContext* qasm3Parser::IndexIdentifierContext::rangeDefinition() {
  return getRuleContext<qasm3Parser::RangeDefinitionContext>(0);
}

tree::TerminalNode* qasm3Parser::IndexIdentifierContext::LBRACKET() {
  return getToken(qasm3Parser::LBRACKET, 0);
}

qasm3Parser::ExpressionListContext* qasm3Parser::IndexIdentifierContext::expressionList() {
  return getRuleContext<qasm3Parser::ExpressionListContext>(0);
}

tree::TerminalNode* qasm3Parser::IndexIdentifierContext::RBRACKET() {
  return getToken(qasm3Parser::RBRACKET, 0);
}

std::vector<qasm3Parser::IndexIdentifierContext *> qasm3Parser::IndexIdentifierContext::indexIdentifier() {
  return getRuleContexts<qasm3Parser::IndexIdentifierContext>();
}

qasm3Parser::IndexIdentifierContext* qasm3Parser::IndexIdentifierContext::indexIdentifier(size_t i) {
  return getRuleContext<qasm3Parser::IndexIdentifierContext>(i);
}


size_t qasm3Parser::IndexIdentifierContext::getRuleIndex() const {
  return qasm3Parser::RuleIndexIdentifier;
}

void qasm3Parser::IndexIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexIdentifier(this);
}

void qasm3Parser::IndexIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexIdentifier(this);
}


qasm3Parser::IndexIdentifierContext* qasm3Parser::indexIdentifier() {
   return indexIdentifier(0);
}

qasm3Parser::IndexIdentifierContext* qasm3Parser::indexIdentifier(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  qasm3Parser::IndexIdentifierContext *_localctx = _tracker.createInstance<IndexIdentifierContext>(_ctx, parentState);
  qasm3Parser::IndexIdentifierContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 76;
  enterRecursionRule(_localctx, 76, qasm3Parser::RuleIndexIdentifier, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(510);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      setState(501);
      match(qasm3Parser::Identifier);
      setState(502);
      rangeDefinition();
      break;
    }

    case 2: {
      setState(503);
      match(qasm3Parser::Identifier);
      setState(508);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
      case 1: {
        setState(504);
        match(qasm3Parser::LBRACKET);
        setState(505);
        expressionList();
        setState(506);
        match(qasm3Parser::RBRACKET);
        break;
      }

      default:
        break;
      }
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(517);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<IndexIdentifierContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleIndexIdentifier);
        setState(512);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(513);
        match(qasm3Parser::T__17);
        setState(514);
        indexIdentifier(2); 
      }
      setState(519);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- IndexIdentifierListContext ------------------------------------------------------------------

qasm3Parser::IndexIdentifierListContext::IndexIdentifierListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<qasm3Parser::IndexIdentifierContext *> qasm3Parser::IndexIdentifierListContext::indexIdentifier() {
  return getRuleContexts<qasm3Parser::IndexIdentifierContext>();
}

qasm3Parser::IndexIdentifierContext* qasm3Parser::IndexIdentifierListContext::indexIdentifier(size_t i) {
  return getRuleContext<qasm3Parser::IndexIdentifierContext>(i);
}

std::vector<tree::TerminalNode *> qasm3Parser::IndexIdentifierListContext::COMMA() {
  return getTokens(qasm3Parser::COMMA);
}

tree::TerminalNode* qasm3Parser::IndexIdentifierListContext::COMMA(size_t i) {
  return getToken(qasm3Parser::COMMA, i);
}


size_t qasm3Parser::IndexIdentifierListContext::getRuleIndex() const {
  return qasm3Parser::RuleIndexIdentifierList;
}

void qasm3Parser::IndexIdentifierListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIndexIdentifierList(this);
}

void qasm3Parser::IndexIdentifierListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIndexIdentifierList(this);
}

qasm3Parser::IndexIdentifierListContext* qasm3Parser::indexIdentifierList() {
  IndexIdentifierListContext *_localctx = _tracker.createInstance<IndexIdentifierListContext>(_ctx, getState());
  enterRule(_localctx, 78, qasm3Parser::RuleIndexIdentifierList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(520);
    indexIdentifier(0);
    setState(525);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == qasm3Parser::COMMA) {
      setState(521);
      match(qasm3Parser::COMMA);
      setState(522);
      indexIdentifier(0);
      setState(527);
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

//----------------- RangeDefinitionContext ------------------------------------------------------------------

qasm3Parser::RangeDefinitionContext::RangeDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::RangeDefinitionContext::LBRACKET() {
  return getToken(qasm3Parser::LBRACKET, 0);
}

std::vector<tree::TerminalNode *> qasm3Parser::RangeDefinitionContext::COLON() {
  return getTokens(qasm3Parser::COLON);
}

tree::TerminalNode* qasm3Parser::RangeDefinitionContext::COLON(size_t i) {
  return getToken(qasm3Parser::COLON, i);
}

tree::TerminalNode* qasm3Parser::RangeDefinitionContext::RBRACKET() {
  return getToken(qasm3Parser::RBRACKET, 0);
}

std::vector<qasm3Parser::ExpressionContext *> qasm3Parser::RangeDefinitionContext::expression() {
  return getRuleContexts<qasm3Parser::ExpressionContext>();
}

qasm3Parser::ExpressionContext* qasm3Parser::RangeDefinitionContext::expression(size_t i) {
  return getRuleContext<qasm3Parser::ExpressionContext>(i);
}


size_t qasm3Parser::RangeDefinitionContext::getRuleIndex() const {
  return qasm3Parser::RuleRangeDefinition;
}

void qasm3Parser::RangeDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRangeDefinition(this);
}

void qasm3Parser::RangeDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRangeDefinition(this);
}

qasm3Parser::RangeDefinitionContext* qasm3Parser::rangeDefinition() {
  RangeDefinitionContext *_localctx = _tracker.createInstance<RangeDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 80, qasm3Parser::RuleRangeDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(528);
    match(qasm3Parser::LBRACKET);
    setState(530);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << qasm3Parser::T__6)
      | (1ULL << qasm3Parser::T__7)
      | (1ULL << qasm3Parser::T__8)
      | (1ULL << qasm3Parser::T__9)
      | (1ULL << qasm3Parser::T__10)
      | (1ULL << qasm3Parser::T__11)
      | (1ULL << qasm3Parser::T__12)
      | (1ULL << qasm3Parser::T__13)
      | (1ULL << qasm3Parser::T__14)
      | (1ULL << qasm3Parser::T__30)
      | (1ULL << qasm3Parser::T__31)
      | (1ULL << qasm3Parser::T__45)
      | (1ULL << qasm3Parser::T__46)
      | (1ULL << qasm3Parser::T__47)
      | (1ULL << qasm3Parser::T__48)
      | (1ULL << qasm3Parser::T__49)
      | (1ULL << qasm3Parser::T__50)
      | (1ULL << qasm3Parser::T__51)
      | (1ULL << qasm3Parser::T__52)
      | (1ULL << qasm3Parser::T__53)
      | (1ULL << qasm3Parser::T__54)
      | (1ULL << qasm3Parser::T__55))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & ((1ULL << (qasm3Parser::T__80 - 81))
      | (1ULL << (qasm3Parser::T__81 - 81))
      | (1ULL << (qasm3Parser::T__83 - 81))
      | (1ULL << (qasm3Parser::LPAREN - 81))
      | (1ULL << (qasm3Parser::MINUS - 81))
      | (1ULL << (qasm3Parser::ImagNumber - 81))
      | (1ULL << (qasm3Parser::Constant - 81))
      | (1ULL << (qasm3Parser::Integer - 81))
      | (1ULL << (qasm3Parser::Identifier - 81))
      | (1ULL << (qasm3Parser::RealNumber - 81))
      | (1ULL << (qasm3Parser::TimingLiteral - 81))
      | (1ULL << (qasm3Parser::StringLiteral - 81)))) != 0)) {
      setState(529);
      expression(0);
    }
    setState(532);
    match(qasm3Parser::COLON);
    setState(534);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << qasm3Parser::T__6)
      | (1ULL << qasm3Parser::T__7)
      | (1ULL << qasm3Parser::T__8)
      | (1ULL << qasm3Parser::T__9)
      | (1ULL << qasm3Parser::T__10)
      | (1ULL << qasm3Parser::T__11)
      | (1ULL << qasm3Parser::T__12)
      | (1ULL << qasm3Parser::T__13)
      | (1ULL << qasm3Parser::T__14)
      | (1ULL << qasm3Parser::T__30)
      | (1ULL << qasm3Parser::T__31)
      | (1ULL << qasm3Parser::T__45)
      | (1ULL << qasm3Parser::T__46)
      | (1ULL << qasm3Parser::T__47)
      | (1ULL << qasm3Parser::T__48)
      | (1ULL << qasm3Parser::T__49)
      | (1ULL << qasm3Parser::T__50)
      | (1ULL << qasm3Parser::T__51)
      | (1ULL << qasm3Parser::T__52)
      | (1ULL << qasm3Parser::T__53)
      | (1ULL << qasm3Parser::T__54)
      | (1ULL << qasm3Parser::T__55))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & ((1ULL << (qasm3Parser::T__80 - 81))
      | (1ULL << (qasm3Parser::T__81 - 81))
      | (1ULL << (qasm3Parser::T__83 - 81))
      | (1ULL << (qasm3Parser::LPAREN - 81))
      | (1ULL << (qasm3Parser::MINUS - 81))
      | (1ULL << (qasm3Parser::ImagNumber - 81))
      | (1ULL << (qasm3Parser::Constant - 81))
      | (1ULL << (qasm3Parser::Integer - 81))
      | (1ULL << (qasm3Parser::Identifier - 81))
      | (1ULL << (qasm3Parser::RealNumber - 81))
      | (1ULL << (qasm3Parser::TimingLiteral - 81))
      | (1ULL << (qasm3Parser::StringLiteral - 81)))) != 0)) {
      setState(533);
      expression(0);
    }
    setState(538);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::COLON) {
      setState(536);
      match(qasm3Parser::COLON);
      setState(537);
      expression(0);
    }
    setState(540);
    match(qasm3Parser::RBRACKET);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantumGateDefinitionContext ------------------------------------------------------------------

qasm3Parser::QuantumGateDefinitionContext::QuantumGateDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::QuantumGateSignatureContext* qasm3Parser::QuantumGateDefinitionContext::quantumGateSignature() {
  return getRuleContext<qasm3Parser::QuantumGateSignatureContext>(0);
}

qasm3Parser::QuantumBlockContext* qasm3Parser::QuantumGateDefinitionContext::quantumBlock() {
  return getRuleContext<qasm3Parser::QuantumBlockContext>(0);
}


size_t qasm3Parser::QuantumGateDefinitionContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumGateDefinition;
}

void qasm3Parser::QuantumGateDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumGateDefinition(this);
}

void qasm3Parser::QuantumGateDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumGateDefinition(this);
}

qasm3Parser::QuantumGateDefinitionContext* qasm3Parser::quantumGateDefinition() {
  QuantumGateDefinitionContext *_localctx = _tracker.createInstance<QuantumGateDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 82, qasm3Parser::RuleQuantumGateDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(542);
    match(qasm3Parser::T__18);
    setState(543);
    quantumGateSignature();
    setState(544);
    quantumBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantumGateSignatureContext ------------------------------------------------------------------

qasm3Parser::QuantumGateSignatureContext::QuantumGateSignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::QuantumGateNameContext* qasm3Parser::QuantumGateSignatureContext::quantumGateName() {
  return getRuleContext<qasm3Parser::QuantumGateNameContext>(0);
}

std::vector<qasm3Parser::IdentifierListContext *> qasm3Parser::QuantumGateSignatureContext::identifierList() {
  return getRuleContexts<qasm3Parser::IdentifierListContext>();
}

qasm3Parser::IdentifierListContext* qasm3Parser::QuantumGateSignatureContext::identifierList(size_t i) {
  return getRuleContext<qasm3Parser::IdentifierListContext>(i);
}

tree::TerminalNode* qasm3Parser::QuantumGateSignatureContext::LPAREN() {
  return getToken(qasm3Parser::LPAREN, 0);
}

tree::TerminalNode* qasm3Parser::QuantumGateSignatureContext::RPAREN() {
  return getToken(qasm3Parser::RPAREN, 0);
}


size_t qasm3Parser::QuantumGateSignatureContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumGateSignature;
}

void qasm3Parser::QuantumGateSignatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumGateSignature(this);
}

void qasm3Parser::QuantumGateSignatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumGateSignature(this);
}

qasm3Parser::QuantumGateSignatureContext* qasm3Parser::quantumGateSignature() {
  QuantumGateSignatureContext *_localctx = _tracker.createInstance<QuantumGateSignatureContext>(_ctx, getState());
  enterRule(_localctx, 84, qasm3Parser::RuleQuantumGateSignature);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(546);
    quantumGateName();
    setState(552);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::LPAREN) {
      setState(547);
      match(qasm3Parser::LPAREN);
      setState(549);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == qasm3Parser::Identifier) {
        setState(548);
        identifierList();
      }
      setState(551);
      match(qasm3Parser::RPAREN);
    }
    setState(554);
    identifierList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantumGateNameContext ------------------------------------------------------------------

qasm3Parser::QuantumGateNameContext::QuantumGateNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::QuantumGateNameContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}


size_t qasm3Parser::QuantumGateNameContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumGateName;
}

void qasm3Parser::QuantumGateNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumGateName(this);
}

void qasm3Parser::QuantumGateNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumGateName(this);
}

qasm3Parser::QuantumGateNameContext* qasm3Parser::quantumGateName() {
  QuantumGateNameContext *_localctx = _tracker.createInstance<QuantumGateNameContext>(_ctx, getState());
  enterRule(_localctx, 86, qasm3Parser::RuleQuantumGateName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(556);
    _la = _input->LA(1);
    if (!(_la == qasm3Parser::T__19

    || _la == qasm3Parser::T__20 || _la == qasm3Parser::Identifier)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantumBlockContext ------------------------------------------------------------------

qasm3Parser::QuantumBlockContext::QuantumBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::QuantumBlockContext::LBRACE() {
  return getToken(qasm3Parser::LBRACE, 0);
}

tree::TerminalNode* qasm3Parser::QuantumBlockContext::RBRACE() {
  return getToken(qasm3Parser::RBRACE, 0);
}

std::vector<qasm3Parser::QuantumStatementContext *> qasm3Parser::QuantumBlockContext::quantumStatement() {
  return getRuleContexts<qasm3Parser::QuantumStatementContext>();
}

qasm3Parser::QuantumStatementContext* qasm3Parser::QuantumBlockContext::quantumStatement(size_t i) {
  return getRuleContext<qasm3Parser::QuantumStatementContext>(i);
}

std::vector<qasm3Parser::QuantumLoopContext *> qasm3Parser::QuantumBlockContext::quantumLoop() {
  return getRuleContexts<qasm3Parser::QuantumLoopContext>();
}

qasm3Parser::QuantumLoopContext* qasm3Parser::QuantumBlockContext::quantumLoop(size_t i) {
  return getRuleContext<qasm3Parser::QuantumLoopContext>(i);
}


size_t qasm3Parser::QuantumBlockContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumBlock;
}

void qasm3Parser::QuantumBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumBlock(this);
}

void qasm3Parser::QuantumBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumBlock(this);
}

qasm3Parser::QuantumBlockContext* qasm3Parser::quantumBlock() {
  QuantumBlockContext *_localctx = _tracker.createInstance<QuantumBlockContext>(_ctx, getState());
  enterRule(_localctx, 88, qasm3Parser::RuleQuantumBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(558);
    match(qasm3Parser::LBRACE);
    setState(563);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << qasm3Parser::T__19)
      | (1ULL << qasm3Parser::T__20)
      | (1ULL << qasm3Parser::T__21)
      | (1ULL << qasm3Parser::T__22)
      | (1ULL << qasm3Parser::T__23)
      | (1ULL << qasm3Parser::T__24)
      | (1ULL << qasm3Parser::T__25)
      | (1ULL << qasm3Parser::T__27)
      | (1ULL << qasm3Parser::T__28)
      | (1ULL << qasm3Parser::T__29))) != 0) || ((((_la - 71) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 71)) & ((1ULL << (qasm3Parser::T__70 - 71))
      | (1ULL << (qasm3Parser::T__72 - 71))
      | (1ULL << (qasm3Parser::T__82 - 71))
      | (1ULL << (qasm3Parser::T__84 - 71))
      | (1ULL << (qasm3Parser::T__85 - 71))
      | (1ULL << (qasm3Parser::Identifier - 71)))) != 0)) {
      setState(561);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case qasm3Parser::T__19:
        case qasm3Parser::T__20:
        case qasm3Parser::T__21:
        case qasm3Parser::T__22:
        case qasm3Parser::T__23:
        case qasm3Parser::T__24:
        case qasm3Parser::T__25:
        case qasm3Parser::T__27:
        case qasm3Parser::T__28:
        case qasm3Parser::T__29:
        case qasm3Parser::T__82:
        case qasm3Parser::T__84:
        case qasm3Parser::T__85:
        case qasm3Parser::Identifier: {
          setState(559);
          quantumStatement();
          break;
        }

        case qasm3Parser::T__70:
        case qasm3Parser::T__72: {
          setState(560);
          quantumLoop();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(565);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(566);
    match(qasm3Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantumLoopContext ------------------------------------------------------------------

qasm3Parser::QuantumLoopContext::QuantumLoopContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::LoopSignatureContext* qasm3Parser::QuantumLoopContext::loopSignature() {
  return getRuleContext<qasm3Parser::LoopSignatureContext>(0);
}

qasm3Parser::QuantumLoopBlockContext* qasm3Parser::QuantumLoopContext::quantumLoopBlock() {
  return getRuleContext<qasm3Parser::QuantumLoopBlockContext>(0);
}


size_t qasm3Parser::QuantumLoopContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumLoop;
}

void qasm3Parser::QuantumLoopContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumLoop(this);
}

void qasm3Parser::QuantumLoopContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumLoop(this);
}

qasm3Parser::QuantumLoopContext* qasm3Parser::quantumLoop() {
  QuantumLoopContext *_localctx = _tracker.createInstance<QuantumLoopContext>(_ctx, getState());
  enterRule(_localctx, 90, qasm3Parser::RuleQuantumLoop);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(568);
    loopSignature();
    setState(569);
    quantumLoopBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantumLoopBlockContext ------------------------------------------------------------------

qasm3Parser::QuantumLoopBlockContext::QuantumLoopBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<qasm3Parser::QuantumStatementContext *> qasm3Parser::QuantumLoopBlockContext::quantumStatement() {
  return getRuleContexts<qasm3Parser::QuantumStatementContext>();
}

qasm3Parser::QuantumStatementContext* qasm3Parser::QuantumLoopBlockContext::quantumStatement(size_t i) {
  return getRuleContext<qasm3Parser::QuantumStatementContext>(i);
}

tree::TerminalNode* qasm3Parser::QuantumLoopBlockContext::LBRACE() {
  return getToken(qasm3Parser::LBRACE, 0);
}

tree::TerminalNode* qasm3Parser::QuantumLoopBlockContext::RBRACE() {
  return getToken(qasm3Parser::RBRACE, 0);
}


size_t qasm3Parser::QuantumLoopBlockContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumLoopBlock;
}

void qasm3Parser::QuantumLoopBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumLoopBlock(this);
}

void qasm3Parser::QuantumLoopBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumLoopBlock(this);
}

qasm3Parser::QuantumLoopBlockContext* qasm3Parser::quantumLoopBlock() {
  QuantumLoopBlockContext *_localctx = _tracker.createInstance<QuantumLoopBlockContext>(_ctx, getState());
  enterRule(_localctx, 92, qasm3Parser::RuleQuantumLoopBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(580);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__19:
      case qasm3Parser::T__20:
      case qasm3Parser::T__21:
      case qasm3Parser::T__22:
      case qasm3Parser::T__23:
      case qasm3Parser::T__24:
      case qasm3Parser::T__25:
      case qasm3Parser::T__27:
      case qasm3Parser::T__28:
      case qasm3Parser::T__29:
      case qasm3Parser::T__82:
      case qasm3Parser::T__84:
      case qasm3Parser::T__85:
      case qasm3Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(571);
        quantumStatement();
        break;
      }

      case qasm3Parser::LBRACE: {
        enterOuterAlt(_localctx, 2);
        setState(572);
        match(qasm3Parser::LBRACE);
        setState(576);
        _errHandler->sync(this);
        _la = _input->LA(1);
        while ((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & ((1ULL << qasm3Parser::T__19)
          | (1ULL << qasm3Parser::T__20)
          | (1ULL << qasm3Parser::T__21)
          | (1ULL << qasm3Parser::T__22)
          | (1ULL << qasm3Parser::T__23)
          | (1ULL << qasm3Parser::T__24)
          | (1ULL << qasm3Parser::T__25)
          | (1ULL << qasm3Parser::T__27)
          | (1ULL << qasm3Parser::T__28)
          | (1ULL << qasm3Parser::T__29))) != 0) || ((((_la - 83) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 83)) & ((1ULL << (qasm3Parser::T__82 - 83))
          | (1ULL << (qasm3Parser::T__84 - 83))
          | (1ULL << (qasm3Parser::T__85 - 83))
          | (1ULL << (qasm3Parser::Identifier - 83)))) != 0)) {
          setState(573);
          quantumStatement();
          setState(578);
          _errHandler->sync(this);
          _la = _input->LA(1);
        }
        setState(579);
        match(qasm3Parser::RBRACE);
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

//----------------- QuantumStatementContext ------------------------------------------------------------------

qasm3Parser::QuantumStatementContext::QuantumStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::QuantumInstructionContext* qasm3Parser::QuantumStatementContext::quantumInstruction() {
  return getRuleContext<qasm3Parser::QuantumInstructionContext>(0);
}

tree::TerminalNode* qasm3Parser::QuantumStatementContext::SEMICOLON() {
  return getToken(qasm3Parser::SEMICOLON, 0);
}

qasm3Parser::TimingStatementContext* qasm3Parser::QuantumStatementContext::timingStatement() {
  return getRuleContext<qasm3Parser::TimingStatementContext>(0);
}


size_t qasm3Parser::QuantumStatementContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumStatement;
}

void qasm3Parser::QuantumStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumStatement(this);
}

void qasm3Parser::QuantumStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumStatement(this);
}

qasm3Parser::QuantumStatementContext* qasm3Parser::quantumStatement() {
  QuantumStatementContext *_localctx = _tracker.createInstance<QuantumStatementContext>(_ctx, getState());
  enterRule(_localctx, 94, qasm3Parser::RuleQuantumStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(586);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__19:
      case qasm3Parser::T__20:
      case qasm3Parser::T__21:
      case qasm3Parser::T__22:
      case qasm3Parser::T__23:
      case qasm3Parser::T__24:
      case qasm3Parser::T__25:
      case qasm3Parser::T__27:
      case qasm3Parser::T__28:
      case qasm3Parser::T__29:
      case qasm3Parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(582);
        quantumInstruction();
        setState(583);
        match(qasm3Parser::SEMICOLON);
        break;
      }

      case qasm3Parser::T__82:
      case qasm3Parser::T__84:
      case qasm3Parser::T__85: {
        enterOuterAlt(_localctx, 2);
        setState(585);
        timingStatement();
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

//----------------- QuantumInstructionContext ------------------------------------------------------------------

qasm3Parser::QuantumInstructionContext::QuantumInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::QuantumGateCallContext* qasm3Parser::QuantumInstructionContext::quantumGateCall() {
  return getRuleContext<qasm3Parser::QuantumGateCallContext>(0);
}

qasm3Parser::QuantumPhaseContext* qasm3Parser::QuantumInstructionContext::quantumPhase() {
  return getRuleContext<qasm3Parser::QuantumPhaseContext>(0);
}

qasm3Parser::QuantumMeasurementContext* qasm3Parser::QuantumInstructionContext::quantumMeasurement() {
  return getRuleContext<qasm3Parser::QuantumMeasurementContext>(0);
}

qasm3Parser::QuantumResetContext* qasm3Parser::QuantumInstructionContext::quantumReset() {
  return getRuleContext<qasm3Parser::QuantumResetContext>(0);
}

qasm3Parser::QuantumBarrierContext* qasm3Parser::QuantumInstructionContext::quantumBarrier() {
  return getRuleContext<qasm3Parser::QuantumBarrierContext>(0);
}


size_t qasm3Parser::QuantumInstructionContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumInstruction;
}

void qasm3Parser::QuantumInstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumInstruction(this);
}

void qasm3Parser::QuantumInstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumInstruction(this);
}

qasm3Parser::QuantumInstructionContext* qasm3Parser::quantumInstruction() {
  QuantumInstructionContext *_localctx = _tracker.createInstance<QuantumInstructionContext>(_ctx, getState());
  enterRule(_localctx, 96, qasm3Parser::RuleQuantumInstruction);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(593);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(588);
      quantumGateCall();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(589);
      quantumPhase();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(590);
      quantumMeasurement();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(591);
      quantumReset();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(592);
      quantumBarrier();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantumPhaseContext ------------------------------------------------------------------

qasm3Parser::QuantumPhaseContext::QuantumPhaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::QuantumPhaseContext::LPAREN() {
  return getToken(qasm3Parser::LPAREN, 0);
}

qasm3Parser::ExpressionContext* qasm3Parser::QuantumPhaseContext::expression() {
  return getRuleContext<qasm3Parser::ExpressionContext>(0);
}

tree::TerminalNode* qasm3Parser::QuantumPhaseContext::RPAREN() {
  return getToken(qasm3Parser::RPAREN, 0);
}

std::vector<qasm3Parser::QuantumGateModifierContext *> qasm3Parser::QuantumPhaseContext::quantumGateModifier() {
  return getRuleContexts<qasm3Parser::QuantumGateModifierContext>();
}

qasm3Parser::QuantumGateModifierContext* qasm3Parser::QuantumPhaseContext::quantumGateModifier(size_t i) {
  return getRuleContext<qasm3Parser::QuantumGateModifierContext>(i);
}

qasm3Parser::IndexIdentifierListContext* qasm3Parser::QuantumPhaseContext::indexIdentifierList() {
  return getRuleContext<qasm3Parser::IndexIdentifierListContext>(0);
}


size_t qasm3Parser::QuantumPhaseContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumPhase;
}

void qasm3Parser::QuantumPhaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumPhase(this);
}

void qasm3Parser::QuantumPhaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumPhase(this);
}

qasm3Parser::QuantumPhaseContext* qasm3Parser::quantumPhase() {
  QuantumPhaseContext *_localctx = _tracker.createInstance<QuantumPhaseContext>(_ctx, getState());
  enterRule(_localctx, 98, qasm3Parser::RuleQuantumPhase);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(598);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << qasm3Parser::T__25)
      | (1ULL << qasm3Parser::T__27)
      | (1ULL << qasm3Parser::T__28)
      | (1ULL << qasm3Parser::T__29))) != 0)) {
      setState(595);
      quantumGateModifier();
      setState(600);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(601);
    match(qasm3Parser::T__21);
    setState(602);
    match(qasm3Parser::LPAREN);
    setState(603);
    expression(0);
    setState(604);
    match(qasm3Parser::RPAREN);
    setState(606);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::Identifier) {
      setState(605);
      indexIdentifierList();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantumResetContext ------------------------------------------------------------------

qasm3Parser::QuantumResetContext::QuantumResetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::IndexIdentifierListContext* qasm3Parser::QuantumResetContext::indexIdentifierList() {
  return getRuleContext<qasm3Parser::IndexIdentifierListContext>(0);
}


size_t qasm3Parser::QuantumResetContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumReset;
}

void qasm3Parser::QuantumResetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumReset(this);
}

void qasm3Parser::QuantumResetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumReset(this);
}

qasm3Parser::QuantumResetContext* qasm3Parser::quantumReset() {
  QuantumResetContext *_localctx = _tracker.createInstance<QuantumResetContext>(_ctx, getState());
  enterRule(_localctx, 100, qasm3Parser::RuleQuantumReset);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(608);
    match(qasm3Parser::T__22);
    setState(609);
    indexIdentifierList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantumMeasurementContext ------------------------------------------------------------------

qasm3Parser::QuantumMeasurementContext::QuantumMeasurementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::IndexIdentifierListContext* qasm3Parser::QuantumMeasurementContext::indexIdentifierList() {
  return getRuleContext<qasm3Parser::IndexIdentifierListContext>(0);
}


size_t qasm3Parser::QuantumMeasurementContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumMeasurement;
}

void qasm3Parser::QuantumMeasurementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumMeasurement(this);
}

void qasm3Parser::QuantumMeasurementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumMeasurement(this);
}

qasm3Parser::QuantumMeasurementContext* qasm3Parser::quantumMeasurement() {
  QuantumMeasurementContext *_localctx = _tracker.createInstance<QuantumMeasurementContext>(_ctx, getState());
  enterRule(_localctx, 102, qasm3Parser::RuleQuantumMeasurement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(611);
    match(qasm3Parser::T__23);
    setState(612);
    indexIdentifierList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantumMeasurementAssignmentContext ------------------------------------------------------------------

qasm3Parser::QuantumMeasurementAssignmentContext::QuantumMeasurementAssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::QuantumMeasurementContext* qasm3Parser::QuantumMeasurementAssignmentContext::quantumMeasurement() {
  return getRuleContext<qasm3Parser::QuantumMeasurementContext>(0);
}

tree::TerminalNode* qasm3Parser::QuantumMeasurementAssignmentContext::ARROW() {
  return getToken(qasm3Parser::ARROW, 0);
}

qasm3Parser::IndexIdentifierListContext* qasm3Parser::QuantumMeasurementAssignmentContext::indexIdentifierList() {
  return getRuleContext<qasm3Parser::IndexIdentifierListContext>(0);
}

tree::TerminalNode* qasm3Parser::QuantumMeasurementAssignmentContext::EQUALS() {
  return getToken(qasm3Parser::EQUALS, 0);
}


size_t qasm3Parser::QuantumMeasurementAssignmentContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumMeasurementAssignment;
}

void qasm3Parser::QuantumMeasurementAssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumMeasurementAssignment(this);
}

void qasm3Parser::QuantumMeasurementAssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumMeasurementAssignment(this);
}

qasm3Parser::QuantumMeasurementAssignmentContext* qasm3Parser::quantumMeasurementAssignment() {
  QuantumMeasurementAssignmentContext *_localctx = _tracker.createInstance<QuantumMeasurementAssignmentContext>(_ctx, getState());
  enterRule(_localctx, 104, qasm3Parser::RuleQuantumMeasurementAssignment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(623);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__23: {
        enterOuterAlt(_localctx, 1);
        setState(614);
        quantumMeasurement();
        setState(617);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == qasm3Parser::ARROW) {
          setState(615);
          match(qasm3Parser::ARROW);
          setState(616);
          indexIdentifierList();
        }
        break;
      }

      case qasm3Parser::Identifier: {
        enterOuterAlt(_localctx, 2);
        setState(619);
        indexIdentifierList();
        setState(620);
        match(qasm3Parser::EQUALS);
        setState(621);
        quantumMeasurement();
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

//----------------- QuantumBarrierContext ------------------------------------------------------------------

qasm3Parser::QuantumBarrierContext::QuantumBarrierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::IndexIdentifierListContext* qasm3Parser::QuantumBarrierContext::indexIdentifierList() {
  return getRuleContext<qasm3Parser::IndexIdentifierListContext>(0);
}


size_t qasm3Parser::QuantumBarrierContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumBarrier;
}

void qasm3Parser::QuantumBarrierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumBarrier(this);
}

void qasm3Parser::QuantumBarrierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumBarrier(this);
}

qasm3Parser::QuantumBarrierContext* qasm3Parser::quantumBarrier() {
  QuantumBarrierContext *_localctx = _tracker.createInstance<QuantumBarrierContext>(_ctx, getState());
  enterRule(_localctx, 106, qasm3Parser::RuleQuantumBarrier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(625);
    match(qasm3Parser::T__24);
    setState(627);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::Identifier) {
      setState(626);
      indexIdentifierList();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantumGateModifierContext ------------------------------------------------------------------

qasm3Parser::QuantumGateModifierContext::QuantumGateModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::PowModifierContext* qasm3Parser::QuantumGateModifierContext::powModifier() {
  return getRuleContext<qasm3Parser::PowModifierContext>(0);
}

qasm3Parser::CtrlModifierContext* qasm3Parser::QuantumGateModifierContext::ctrlModifier() {
  return getRuleContext<qasm3Parser::CtrlModifierContext>(0);
}


size_t qasm3Parser::QuantumGateModifierContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumGateModifier;
}

void qasm3Parser::QuantumGateModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumGateModifier(this);
}

void qasm3Parser::QuantumGateModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumGateModifier(this);
}

qasm3Parser::QuantumGateModifierContext* qasm3Parser::quantumGateModifier() {
  QuantumGateModifierContext *_localctx = _tracker.createInstance<QuantumGateModifierContext>(_ctx, getState());
  enterRule(_localctx, 108, qasm3Parser::RuleQuantumGateModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(632);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__25: {
        setState(629);
        match(qasm3Parser::T__25);
        break;
      }

      case qasm3Parser::T__27: {
        setState(630);
        powModifier();
        break;
      }

      case qasm3Parser::T__28:
      case qasm3Parser::T__29: {
        setState(631);
        ctrlModifier();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(634);
    match(qasm3Parser::T__26);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PowModifierContext ------------------------------------------------------------------

qasm3Parser::PowModifierContext::PowModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::PowModifierContext::LPAREN() {
  return getToken(qasm3Parser::LPAREN, 0);
}

qasm3Parser::ExpressionContext* qasm3Parser::PowModifierContext::expression() {
  return getRuleContext<qasm3Parser::ExpressionContext>(0);
}

tree::TerminalNode* qasm3Parser::PowModifierContext::RPAREN() {
  return getToken(qasm3Parser::RPAREN, 0);
}


size_t qasm3Parser::PowModifierContext::getRuleIndex() const {
  return qasm3Parser::RulePowModifier;
}

void qasm3Parser::PowModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowModifier(this);
}

void qasm3Parser::PowModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowModifier(this);
}

qasm3Parser::PowModifierContext* qasm3Parser::powModifier() {
  PowModifierContext *_localctx = _tracker.createInstance<PowModifierContext>(_ctx, getState());
  enterRule(_localctx, 110, qasm3Parser::RulePowModifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(636);
    match(qasm3Parser::T__27);
    setState(637);
    match(qasm3Parser::LPAREN);
    setState(638);
    expression(0);
    setState(639);
    match(qasm3Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CtrlModifierContext ------------------------------------------------------------------

qasm3Parser::CtrlModifierContext::CtrlModifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::CtrlModifierContext::LPAREN() {
  return getToken(qasm3Parser::LPAREN, 0);
}

qasm3Parser::ExpressionContext* qasm3Parser::CtrlModifierContext::expression() {
  return getRuleContext<qasm3Parser::ExpressionContext>(0);
}

tree::TerminalNode* qasm3Parser::CtrlModifierContext::RPAREN() {
  return getToken(qasm3Parser::RPAREN, 0);
}


size_t qasm3Parser::CtrlModifierContext::getRuleIndex() const {
  return qasm3Parser::RuleCtrlModifier;
}

void qasm3Parser::CtrlModifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCtrlModifier(this);
}

void qasm3Parser::CtrlModifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCtrlModifier(this);
}

qasm3Parser::CtrlModifierContext* qasm3Parser::ctrlModifier() {
  CtrlModifierContext *_localctx = _tracker.createInstance<CtrlModifierContext>(_ctx, getState());
  enterRule(_localctx, 112, qasm3Parser::RuleCtrlModifier);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(641);
    _la = _input->LA(1);
    if (!(_la == qasm3Parser::T__28

    || _la == qasm3Parser::T__29)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(646);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::LPAREN) {
      setState(642);
      match(qasm3Parser::LPAREN);
      setState(643);
      expression(0);
      setState(644);
      match(qasm3Parser::RPAREN);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- QuantumGateCallContext ------------------------------------------------------------------

qasm3Parser::QuantumGateCallContext::QuantumGateCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::QuantumGateNameContext* qasm3Parser::QuantumGateCallContext::quantumGateName() {
  return getRuleContext<qasm3Parser::QuantumGateNameContext>(0);
}

qasm3Parser::IndexIdentifierListContext* qasm3Parser::QuantumGateCallContext::indexIdentifierList() {
  return getRuleContext<qasm3Parser::IndexIdentifierListContext>(0);
}

std::vector<qasm3Parser::QuantumGateModifierContext *> qasm3Parser::QuantumGateCallContext::quantumGateModifier() {
  return getRuleContexts<qasm3Parser::QuantumGateModifierContext>();
}

qasm3Parser::QuantumGateModifierContext* qasm3Parser::QuantumGateCallContext::quantumGateModifier(size_t i) {
  return getRuleContext<qasm3Parser::QuantumGateModifierContext>(i);
}

tree::TerminalNode* qasm3Parser::QuantumGateCallContext::LPAREN() {
  return getToken(qasm3Parser::LPAREN, 0);
}

qasm3Parser::ExpressionListContext* qasm3Parser::QuantumGateCallContext::expressionList() {
  return getRuleContext<qasm3Parser::ExpressionListContext>(0);
}

tree::TerminalNode* qasm3Parser::QuantumGateCallContext::RPAREN() {
  return getToken(qasm3Parser::RPAREN, 0);
}


size_t qasm3Parser::QuantumGateCallContext::getRuleIndex() const {
  return qasm3Parser::RuleQuantumGateCall;
}

void qasm3Parser::QuantumGateCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterQuantumGateCall(this);
}

void qasm3Parser::QuantumGateCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitQuantumGateCall(this);
}

qasm3Parser::QuantumGateCallContext* qasm3Parser::quantumGateCall() {
  QuantumGateCallContext *_localctx = _tracker.createInstance<QuantumGateCallContext>(_ctx, getState());
  enterRule(_localctx, 114, qasm3Parser::RuleQuantumGateCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(651);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << qasm3Parser::T__25)
      | (1ULL << qasm3Parser::T__27)
      | (1ULL << qasm3Parser::T__28)
      | (1ULL << qasm3Parser::T__29))) != 0)) {
      setState(648);
      quantumGateModifier();
      setState(653);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(654);
    quantumGateName();
    setState(659);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::LPAREN) {
      setState(655);
      match(qasm3Parser::LPAREN);
      setState(656);
      expressionList();
      setState(657);
      match(qasm3Parser::RPAREN);
    }
    setState(661);
    indexIdentifierList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryOperatorContext ------------------------------------------------------------------

qasm3Parser::UnaryOperatorContext::UnaryOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::UnaryOperatorContext::MINUS() {
  return getToken(qasm3Parser::MINUS, 0);
}


size_t qasm3Parser::UnaryOperatorContext::getRuleIndex() const {
  return qasm3Parser::RuleUnaryOperator;
}

void qasm3Parser::UnaryOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryOperator(this);
}

void qasm3Parser::UnaryOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryOperator(this);
}

qasm3Parser::UnaryOperatorContext* qasm3Parser::unaryOperator() {
  UnaryOperatorContext *_localctx = _tracker.createInstance<UnaryOperatorContext>(_ctx, getState());
  enterRule(_localctx, 116, qasm3Parser::RuleUnaryOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(663);
    _la = _input->LA(1);
    if (!(_la == qasm3Parser::T__30

    || _la == qasm3Parser::T__31 || _la == qasm3Parser::MINUS)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ComparisonOperatorContext ------------------------------------------------------------------

qasm3Parser::ComparisonOperatorContext::ComparisonOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t qasm3Parser::ComparisonOperatorContext::getRuleIndex() const {
  return qasm3Parser::RuleComparisonOperator;
}

void qasm3Parser::ComparisonOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonOperator(this);
}

void qasm3Parser::ComparisonOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonOperator(this);
}

qasm3Parser::ComparisonOperatorContext* qasm3Parser::comparisonOperator() {
  ComparisonOperatorContext *_localctx = _tracker.createInstance<ComparisonOperatorContext>(_ctx, getState());
  enterRule(_localctx, 118, qasm3Parser::RuleComparisonOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(665);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << qasm3Parser::T__32)
      | (1ULL << qasm3Parser::T__33)
      | (1ULL << qasm3Parser::T__34)
      | (1ULL << qasm3Parser::T__35))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EqualityOperatorContext ------------------------------------------------------------------

qasm3Parser::EqualityOperatorContext::EqualityOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t qasm3Parser::EqualityOperatorContext::getRuleIndex() const {
  return qasm3Parser::RuleEqualityOperator;
}

void qasm3Parser::EqualityOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityOperator(this);
}

void qasm3Parser::EqualityOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityOperator(this);
}

qasm3Parser::EqualityOperatorContext* qasm3Parser::equalityOperator() {
  EqualityOperatorContext *_localctx = _tracker.createInstance<EqualityOperatorContext>(_ctx, getState());
  enterRule(_localctx, 120, qasm3Parser::RuleEqualityOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(667);
    _la = _input->LA(1);
    if (!(_la == qasm3Parser::T__36

    || _la == qasm3Parser::T__37)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LogicalOperatorContext ------------------------------------------------------------------

qasm3Parser::LogicalOperatorContext::LogicalOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t qasm3Parser::LogicalOperatorContext::getRuleIndex() const {
  return qasm3Parser::RuleLogicalOperator;
}

void qasm3Parser::LogicalOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOperator(this);
}

void qasm3Parser::LogicalOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOperator(this);
}

qasm3Parser::LogicalOperatorContext* qasm3Parser::logicalOperator() {
  LogicalOperatorContext *_localctx = _tracker.createInstance<LogicalOperatorContext>(_ctx, getState());
  enterRule(_localctx, 122, qasm3Parser::RuleLogicalOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(669);
    _la = _input->LA(1);
    if (!(_la == qasm3Parser::T__17

    || _la == qasm3Parser::T__38)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionStatementContext ------------------------------------------------------------------

qasm3Parser::ExpressionStatementContext::ExpressionStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::ExpressionContext* qasm3Parser::ExpressionStatementContext::expression() {
  return getRuleContext<qasm3Parser::ExpressionContext>(0);
}

tree::TerminalNode* qasm3Parser::ExpressionStatementContext::SEMICOLON() {
  return getToken(qasm3Parser::SEMICOLON, 0);
}


size_t qasm3Parser::ExpressionStatementContext::getRuleIndex() const {
  return qasm3Parser::RuleExpressionStatement;
}

void qasm3Parser::ExpressionStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionStatement(this);
}

void qasm3Parser::ExpressionStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionStatement(this);
}

qasm3Parser::ExpressionStatementContext* qasm3Parser::expressionStatement() {
  ExpressionStatementContext *_localctx = _tracker.createInstance<ExpressionStatementContext>(_ctx, getState());
  enterRule(_localctx, 124, qasm3Parser::RuleExpressionStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(671);
    expression(0);
    setState(672);
    match(qasm3Parser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

qasm3Parser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::ExpressionTerminatorContext* qasm3Parser::ExpressionContext::expressionTerminator() {
  return getRuleContext<qasm3Parser::ExpressionTerminatorContext>(0);
}

qasm3Parser::UnaryExpressionContext* qasm3Parser::ExpressionContext::unaryExpression() {
  return getRuleContext<qasm3Parser::UnaryExpressionContext>(0);
}

qasm3Parser::LogicalAndExpressionContext* qasm3Parser::ExpressionContext::logicalAndExpression() {
  return getRuleContext<qasm3Parser::LogicalAndExpressionContext>(0);
}

qasm3Parser::ExpressionContext* qasm3Parser::ExpressionContext::expression() {
  return getRuleContext<qasm3Parser::ExpressionContext>(0);
}


size_t qasm3Parser::ExpressionContext::getRuleIndex() const {
  return qasm3Parser::RuleExpression;
}

void qasm3Parser::ExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpression(this);
}

void qasm3Parser::ExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpression(this);
}


qasm3Parser::ExpressionContext* qasm3Parser::expression() {
   return expression(0);
}

qasm3Parser::ExpressionContext* qasm3Parser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  qasm3Parser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  qasm3Parser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 126;
  enterRecursionRule(_localctx, 126, qasm3Parser::RuleExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(678);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 63, _ctx)) {
    case 1: {
      setState(675);
      expressionTerminator(0);
      break;
    }

    case 2: {
      setState(676);
      unaryExpression();
      break;
    }

    case 3: {
      setState(677);
      logicalAndExpression(0);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(685);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpression);
        setState(680);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(681);
        match(qasm3Parser::T__17);
        setState(682);
        logicalAndExpression(0); 
      }
      setState(687);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 64, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalAndExpressionContext ------------------------------------------------------------------

qasm3Parser::LogicalAndExpressionContext::LogicalAndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::BitOrExpressionContext* qasm3Parser::LogicalAndExpressionContext::bitOrExpression() {
  return getRuleContext<qasm3Parser::BitOrExpressionContext>(0);
}

qasm3Parser::LogicalAndExpressionContext* qasm3Parser::LogicalAndExpressionContext::logicalAndExpression() {
  return getRuleContext<qasm3Parser::LogicalAndExpressionContext>(0);
}


size_t qasm3Parser::LogicalAndExpressionContext::getRuleIndex() const {
  return qasm3Parser::RuleLogicalAndExpression;
}

void qasm3Parser::LogicalAndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalAndExpression(this);
}

void qasm3Parser::LogicalAndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalAndExpression(this);
}


qasm3Parser::LogicalAndExpressionContext* qasm3Parser::logicalAndExpression() {
   return logicalAndExpression(0);
}

qasm3Parser::LogicalAndExpressionContext* qasm3Parser::logicalAndExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  qasm3Parser::LogicalAndExpressionContext *_localctx = _tracker.createInstance<LogicalAndExpressionContext>(_ctx, parentState);
  qasm3Parser::LogicalAndExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 128;
  enterRecursionRule(_localctx, 128, qasm3Parser::RuleLogicalAndExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(689);
    bitOrExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(696);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalAndExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalAndExpression);
        setState(691);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(692);
        match(qasm3Parser::T__38);
        setState(693);
        bitOrExpression(0); 
      }
      setState(698);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 65, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BitOrExpressionContext ------------------------------------------------------------------

qasm3Parser::BitOrExpressionContext::BitOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::XOrExpressionContext* qasm3Parser::BitOrExpressionContext::xOrExpression() {
  return getRuleContext<qasm3Parser::XOrExpressionContext>(0);
}

qasm3Parser::BitOrExpressionContext* qasm3Parser::BitOrExpressionContext::bitOrExpression() {
  return getRuleContext<qasm3Parser::BitOrExpressionContext>(0);
}


size_t qasm3Parser::BitOrExpressionContext::getRuleIndex() const {
  return qasm3Parser::RuleBitOrExpression;
}

void qasm3Parser::BitOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitOrExpression(this);
}

void qasm3Parser::BitOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitOrExpression(this);
}


qasm3Parser::BitOrExpressionContext* qasm3Parser::bitOrExpression() {
   return bitOrExpression(0);
}

qasm3Parser::BitOrExpressionContext* qasm3Parser::bitOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  qasm3Parser::BitOrExpressionContext *_localctx = _tracker.createInstance<BitOrExpressionContext>(_ctx, parentState);
  qasm3Parser::BitOrExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 130;
  enterRecursionRule(_localctx, 130, qasm3Parser::RuleBitOrExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(700);
    xOrExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(707);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BitOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBitOrExpression);
        setState(702);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(703);
        match(qasm3Parser::T__39);
        setState(704);
        xOrExpression(0); 
      }
      setState(709);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 66, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- XOrExpressionContext ------------------------------------------------------------------

qasm3Parser::XOrExpressionContext::XOrExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::BitAndExpressionContext* qasm3Parser::XOrExpressionContext::bitAndExpression() {
  return getRuleContext<qasm3Parser::BitAndExpressionContext>(0);
}

qasm3Parser::XOrExpressionContext* qasm3Parser::XOrExpressionContext::xOrExpression() {
  return getRuleContext<qasm3Parser::XOrExpressionContext>(0);
}


size_t qasm3Parser::XOrExpressionContext::getRuleIndex() const {
  return qasm3Parser::RuleXOrExpression;
}

void qasm3Parser::XOrExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXOrExpression(this);
}

void qasm3Parser::XOrExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXOrExpression(this);
}


qasm3Parser::XOrExpressionContext* qasm3Parser::xOrExpression() {
   return xOrExpression(0);
}

qasm3Parser::XOrExpressionContext* qasm3Parser::xOrExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  qasm3Parser::XOrExpressionContext *_localctx = _tracker.createInstance<XOrExpressionContext>(_ctx, parentState);
  qasm3Parser::XOrExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 132;
  enterRecursionRule(_localctx, 132, qasm3Parser::RuleXOrExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(711);
    bitAndExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(718);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<XOrExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleXOrExpression);
        setState(713);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(714);
        match(qasm3Parser::T__40);
        setState(715);
        bitAndExpression(0); 
      }
      setState(720);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 67, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BitAndExpressionContext ------------------------------------------------------------------

qasm3Parser::BitAndExpressionContext::BitAndExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::EqualityExpressionContext* qasm3Parser::BitAndExpressionContext::equalityExpression() {
  return getRuleContext<qasm3Parser::EqualityExpressionContext>(0);
}

qasm3Parser::BitAndExpressionContext* qasm3Parser::BitAndExpressionContext::bitAndExpression() {
  return getRuleContext<qasm3Parser::BitAndExpressionContext>(0);
}


size_t qasm3Parser::BitAndExpressionContext::getRuleIndex() const {
  return qasm3Parser::RuleBitAndExpression;
}

void qasm3Parser::BitAndExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitAndExpression(this);
}

void qasm3Parser::BitAndExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitAndExpression(this);
}


qasm3Parser::BitAndExpressionContext* qasm3Parser::bitAndExpression() {
   return bitAndExpression(0);
}

qasm3Parser::BitAndExpressionContext* qasm3Parser::bitAndExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  qasm3Parser::BitAndExpressionContext *_localctx = _tracker.createInstance<BitAndExpressionContext>(_ctx, parentState);
  qasm3Parser::BitAndExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 134;
  enterRecursionRule(_localctx, 134, qasm3Parser::RuleBitAndExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(722);
    equalityExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(729);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BitAndExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBitAndExpression);
        setState(724);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(725);
        match(qasm3Parser::T__41);
        setState(726);
        equalityExpression(0); 
      }
      setState(731);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 68, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqualityExpressionContext ------------------------------------------------------------------

qasm3Parser::EqualityExpressionContext::EqualityExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::ComparisonExpressionContext* qasm3Parser::EqualityExpressionContext::comparisonExpression() {
  return getRuleContext<qasm3Parser::ComparisonExpressionContext>(0);
}

qasm3Parser::EqualityExpressionContext* qasm3Parser::EqualityExpressionContext::equalityExpression() {
  return getRuleContext<qasm3Parser::EqualityExpressionContext>(0);
}

qasm3Parser::EqualityOperatorContext* qasm3Parser::EqualityExpressionContext::equalityOperator() {
  return getRuleContext<qasm3Parser::EqualityOperatorContext>(0);
}


size_t qasm3Parser::EqualityExpressionContext::getRuleIndex() const {
  return qasm3Parser::RuleEqualityExpression;
}

void qasm3Parser::EqualityExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualityExpression(this);
}

void qasm3Parser::EqualityExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualityExpression(this);
}


qasm3Parser::EqualityExpressionContext* qasm3Parser::equalityExpression() {
   return equalityExpression(0);
}

qasm3Parser::EqualityExpressionContext* qasm3Parser::equalityExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  qasm3Parser::EqualityExpressionContext *_localctx = _tracker.createInstance<EqualityExpressionContext>(_ctx, parentState);
  qasm3Parser::EqualityExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 136;
  enterRecursionRule(_localctx, 136, qasm3Parser::RuleEqualityExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(733);
    comparisonExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(741);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EqualityExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEqualityExpression);
        setState(735);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(736);
        equalityOperator();
        setState(737);
        comparisonExpression(0); 
      }
      setState(743);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 69, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ComparisonExpressionContext ------------------------------------------------------------------

qasm3Parser::ComparisonExpressionContext::ComparisonExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::BitShiftExpressionContext* qasm3Parser::ComparisonExpressionContext::bitShiftExpression() {
  return getRuleContext<qasm3Parser::BitShiftExpressionContext>(0);
}

qasm3Parser::ComparisonExpressionContext* qasm3Parser::ComparisonExpressionContext::comparisonExpression() {
  return getRuleContext<qasm3Parser::ComparisonExpressionContext>(0);
}

qasm3Parser::ComparisonOperatorContext* qasm3Parser::ComparisonExpressionContext::comparisonOperator() {
  return getRuleContext<qasm3Parser::ComparisonOperatorContext>(0);
}


size_t qasm3Parser::ComparisonExpressionContext::getRuleIndex() const {
  return qasm3Parser::RuleComparisonExpression;
}

void qasm3Parser::ComparisonExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterComparisonExpression(this);
}

void qasm3Parser::ComparisonExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitComparisonExpression(this);
}


qasm3Parser::ComparisonExpressionContext* qasm3Parser::comparisonExpression() {
   return comparisonExpression(0);
}

qasm3Parser::ComparisonExpressionContext* qasm3Parser::comparisonExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  qasm3Parser::ComparisonExpressionContext *_localctx = _tracker.createInstance<ComparisonExpressionContext>(_ctx, parentState);
  qasm3Parser::ComparisonExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 138;
  enterRecursionRule(_localctx, 138, qasm3Parser::RuleComparisonExpression, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(745);
    bitShiftExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(753);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ComparisonExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleComparisonExpression);
        setState(747);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(748);
        comparisonOperator();
        setState(749);
        bitShiftExpression(0); 
      }
      setState(755);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 70, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BitShiftExpressionContext ------------------------------------------------------------------

qasm3Parser::BitShiftExpressionContext::BitShiftExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::AdditiveExpressionContext* qasm3Parser::BitShiftExpressionContext::additiveExpression() {
  return getRuleContext<qasm3Parser::AdditiveExpressionContext>(0);
}

qasm3Parser::BitShiftExpressionContext* qasm3Parser::BitShiftExpressionContext::bitShiftExpression() {
  return getRuleContext<qasm3Parser::BitShiftExpressionContext>(0);
}


size_t qasm3Parser::BitShiftExpressionContext::getRuleIndex() const {
  return qasm3Parser::RuleBitShiftExpression;
}

void qasm3Parser::BitShiftExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBitShiftExpression(this);
}

void qasm3Parser::BitShiftExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBitShiftExpression(this);
}


qasm3Parser::BitShiftExpressionContext* qasm3Parser::bitShiftExpression() {
   return bitShiftExpression(0);
}

qasm3Parser::BitShiftExpressionContext* qasm3Parser::bitShiftExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  qasm3Parser::BitShiftExpressionContext *_localctx = _tracker.createInstance<BitShiftExpressionContext>(_ctx, parentState);
  qasm3Parser::BitShiftExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 140;
  enterRecursionRule(_localctx, 140, qasm3Parser::RuleBitShiftExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(757);
    additiveExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(764);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<BitShiftExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleBitShiftExpression);
        setState(759);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(760);
        _la = _input->LA(1);
        if (!(_la == qasm3Parser::T__42

        || _la == qasm3Parser::T__43)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(761);
        additiveExpression(0); 
      }
      setState(766);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 71, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AdditiveExpressionContext ------------------------------------------------------------------

qasm3Parser::AdditiveExpressionContext::AdditiveExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::MultiplicativeExpressionContext* qasm3Parser::AdditiveExpressionContext::multiplicativeExpression() {
  return getRuleContext<qasm3Parser::MultiplicativeExpressionContext>(0);
}

qasm3Parser::AdditiveExpressionContext* qasm3Parser::AdditiveExpressionContext::additiveExpression() {
  return getRuleContext<qasm3Parser::AdditiveExpressionContext>(0);
}

tree::TerminalNode* qasm3Parser::AdditiveExpressionContext::PLUS() {
  return getToken(qasm3Parser::PLUS, 0);
}

tree::TerminalNode* qasm3Parser::AdditiveExpressionContext::MINUS() {
  return getToken(qasm3Parser::MINUS, 0);
}


size_t qasm3Parser::AdditiveExpressionContext::getRuleIndex() const {
  return qasm3Parser::RuleAdditiveExpression;
}

void qasm3Parser::AdditiveExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditiveExpression(this);
}

void qasm3Parser::AdditiveExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditiveExpression(this);
}


qasm3Parser::AdditiveExpressionContext* qasm3Parser::additiveExpression() {
   return additiveExpression(0);
}

qasm3Parser::AdditiveExpressionContext* qasm3Parser::additiveExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  qasm3Parser::AdditiveExpressionContext *_localctx = _tracker.createInstance<AdditiveExpressionContext>(_ctx, parentState);
  qasm3Parser::AdditiveExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 142;
  enterRecursionRule(_localctx, 142, qasm3Parser::RuleAdditiveExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(768);
    multiplicativeExpression(0);
    _ctx->stop = _input->LT(-1);
    setState(775);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AdditiveExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAdditiveExpression);
        setState(770);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(771);
        _la = _input->LA(1);
        if (!(_la == qasm3Parser::PLUS

        || _la == qasm3Parser::MINUS)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(772);
        multiplicativeExpression(0); 
      }
      setState(777);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 72, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- MultiplicativeExpressionContext ------------------------------------------------------------------

qasm3Parser::MultiplicativeExpressionContext::MultiplicativeExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::PowerExpressionContext* qasm3Parser::MultiplicativeExpressionContext::powerExpression() {
  return getRuleContext<qasm3Parser::PowerExpressionContext>(0);
}

qasm3Parser::UnaryExpressionContext* qasm3Parser::MultiplicativeExpressionContext::unaryExpression() {
  return getRuleContext<qasm3Parser::UnaryExpressionContext>(0);
}

qasm3Parser::MultiplicativeExpressionContext* qasm3Parser::MultiplicativeExpressionContext::multiplicativeExpression() {
  return getRuleContext<qasm3Parser::MultiplicativeExpressionContext>(0);
}

tree::TerminalNode* qasm3Parser::MultiplicativeExpressionContext::MUL() {
  return getToken(qasm3Parser::MUL, 0);
}

tree::TerminalNode* qasm3Parser::MultiplicativeExpressionContext::DIV() {
  return getToken(qasm3Parser::DIV, 0);
}

tree::TerminalNode* qasm3Parser::MultiplicativeExpressionContext::MOD() {
  return getToken(qasm3Parser::MOD, 0);
}


size_t qasm3Parser::MultiplicativeExpressionContext::getRuleIndex() const {
  return qasm3Parser::RuleMultiplicativeExpression;
}

void qasm3Parser::MultiplicativeExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicativeExpression(this);
}

void qasm3Parser::MultiplicativeExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicativeExpression(this);
}


qasm3Parser::MultiplicativeExpressionContext* qasm3Parser::multiplicativeExpression() {
   return multiplicativeExpression(0);
}

qasm3Parser::MultiplicativeExpressionContext* qasm3Parser::multiplicativeExpression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  qasm3Parser::MultiplicativeExpressionContext *_localctx = _tracker.createInstance<MultiplicativeExpressionContext>(_ctx, parentState);
  qasm3Parser::MultiplicativeExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 144;
  enterRecursionRule(_localctx, 144, qasm3Parser::RuleMultiplicativeExpression, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(781);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__6:
      case qasm3Parser::T__7:
      case qasm3Parser::T__8:
      case qasm3Parser::T__9:
      case qasm3Parser::T__10:
      case qasm3Parser::T__11:
      case qasm3Parser::T__12:
      case qasm3Parser::T__13:
      case qasm3Parser::T__14:
      case qasm3Parser::T__45:
      case qasm3Parser::T__46:
      case qasm3Parser::T__47:
      case qasm3Parser::T__48:
      case qasm3Parser::T__49:
      case qasm3Parser::T__50:
      case qasm3Parser::T__51:
      case qasm3Parser::T__52:
      case qasm3Parser::T__53:
      case qasm3Parser::T__54:
      case qasm3Parser::T__55:
      case qasm3Parser::T__80:
      case qasm3Parser::T__81:
      case qasm3Parser::T__83:
      case qasm3Parser::LPAREN:
      case qasm3Parser::ImagNumber:
      case qasm3Parser::Constant:
      case qasm3Parser::Integer:
      case qasm3Parser::Identifier:
      case qasm3Parser::RealNumber:
      case qasm3Parser::TimingLiteral:
      case qasm3Parser::StringLiteral: {
        setState(779);
        powerExpression();
        break;
      }

      case qasm3Parser::T__30:
      case qasm3Parser::T__31:
      case qasm3Parser::MINUS: {
        setState(780);
        unaryExpression();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(791);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<MultiplicativeExpressionContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMultiplicativeExpression);
        setState(783);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(784);
        _la = _input->LA(1);
        if (!(((((_la - 104) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 104)) & ((1ULL << (qasm3Parser::MUL - 104))
          | (1ULL << (qasm3Parser::DIV - 104))
          | (1ULL << (qasm3Parser::MOD - 104)))) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(787);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case qasm3Parser::T__6:
          case qasm3Parser::T__7:
          case qasm3Parser::T__8:
          case qasm3Parser::T__9:
          case qasm3Parser::T__10:
          case qasm3Parser::T__11:
          case qasm3Parser::T__12:
          case qasm3Parser::T__13:
          case qasm3Parser::T__14:
          case qasm3Parser::T__45:
          case qasm3Parser::T__46:
          case qasm3Parser::T__47:
          case qasm3Parser::T__48:
          case qasm3Parser::T__49:
          case qasm3Parser::T__50:
          case qasm3Parser::T__51:
          case qasm3Parser::T__52:
          case qasm3Parser::T__53:
          case qasm3Parser::T__54:
          case qasm3Parser::T__55:
          case qasm3Parser::T__80:
          case qasm3Parser::T__81:
          case qasm3Parser::T__83:
          case qasm3Parser::LPAREN:
          case qasm3Parser::ImagNumber:
          case qasm3Parser::Constant:
          case qasm3Parser::Integer:
          case qasm3Parser::Identifier:
          case qasm3Parser::RealNumber:
          case qasm3Parser::TimingLiteral:
          case qasm3Parser::StringLiteral: {
            setState(785);
            powerExpression();
            break;
          }

          case qasm3Parser::T__30:
          case qasm3Parser::T__31:
          case qasm3Parser::MINUS: {
            setState(786);
            unaryExpression();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(793);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 75, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UnaryExpressionContext ------------------------------------------------------------------

qasm3Parser::UnaryExpressionContext::UnaryExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::UnaryOperatorContext* qasm3Parser::UnaryExpressionContext::unaryOperator() {
  return getRuleContext<qasm3Parser::UnaryOperatorContext>(0);
}

qasm3Parser::PowerExpressionContext* qasm3Parser::UnaryExpressionContext::powerExpression() {
  return getRuleContext<qasm3Parser::PowerExpressionContext>(0);
}


size_t qasm3Parser::UnaryExpressionContext::getRuleIndex() const {
  return qasm3Parser::RuleUnaryExpression;
}

void qasm3Parser::UnaryExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnaryExpression(this);
}

void qasm3Parser::UnaryExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnaryExpression(this);
}

qasm3Parser::UnaryExpressionContext* qasm3Parser::unaryExpression() {
  UnaryExpressionContext *_localctx = _tracker.createInstance<UnaryExpressionContext>(_ctx, getState());
  enterRule(_localctx, 146, qasm3Parser::RuleUnaryExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(794);
    unaryOperator();
    setState(795);
    powerExpression();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PowerExpressionContext ------------------------------------------------------------------

qasm3Parser::PowerExpressionContext::PowerExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::ExpressionTerminatorContext* qasm3Parser::PowerExpressionContext::expressionTerminator() {
  return getRuleContext<qasm3Parser::ExpressionTerminatorContext>(0);
}

qasm3Parser::PowerExpressionContext* qasm3Parser::PowerExpressionContext::powerExpression() {
  return getRuleContext<qasm3Parser::PowerExpressionContext>(0);
}


size_t qasm3Parser::PowerExpressionContext::getRuleIndex() const {
  return qasm3Parser::RulePowerExpression;
}

void qasm3Parser::PowerExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPowerExpression(this);
}

void qasm3Parser::PowerExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPowerExpression(this);
}

qasm3Parser::PowerExpressionContext* qasm3Parser::powerExpression() {
  PowerExpressionContext *_localctx = _tracker.createInstance<PowerExpressionContext>(_ctx, getState());
  enterRule(_localctx, 148, qasm3Parser::RulePowerExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(802);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 76, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(797);
      expressionTerminator(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(798);
      expressionTerminator(0);
      setState(799);
      match(qasm3Parser::T__44);
      setState(800);
      powerExpression();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionTerminatorContext ------------------------------------------------------------------

qasm3Parser::ExpressionTerminatorContext::ExpressionTerminatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::ExpressionTerminatorContext::Constant() {
  return getToken(qasm3Parser::Constant, 0);
}

tree::TerminalNode* qasm3Parser::ExpressionTerminatorContext::Integer() {
  return getToken(qasm3Parser::Integer, 0);
}

tree::TerminalNode* qasm3Parser::ExpressionTerminatorContext::RealNumber() {
  return getToken(qasm3Parser::RealNumber, 0);
}

tree::TerminalNode* qasm3Parser::ExpressionTerminatorContext::ImagNumber() {
  return getToken(qasm3Parser::ImagNumber, 0);
}

qasm3Parser::BooleanLiteralContext* qasm3Parser::ExpressionTerminatorContext::booleanLiteral() {
  return getRuleContext<qasm3Parser::BooleanLiteralContext>(0);
}

tree::TerminalNode* qasm3Parser::ExpressionTerminatorContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

tree::TerminalNode* qasm3Parser::ExpressionTerminatorContext::StringLiteral() {
  return getToken(qasm3Parser::StringLiteral, 0);
}

qasm3Parser::BuiltInCallContext* qasm3Parser::ExpressionTerminatorContext::builtInCall() {
  return getRuleContext<qasm3Parser::BuiltInCallContext>(0);
}

qasm3Parser::ExternOrSubroutineCallContext* qasm3Parser::ExpressionTerminatorContext::externOrSubroutineCall() {
  return getRuleContext<qasm3Parser::ExternOrSubroutineCallContext>(0);
}

qasm3Parser::TimingIdentifierContext* qasm3Parser::ExpressionTerminatorContext::timingIdentifier() {
  return getRuleContext<qasm3Parser::TimingIdentifierContext>(0);
}

tree::TerminalNode* qasm3Parser::ExpressionTerminatorContext::LPAREN() {
  return getToken(qasm3Parser::LPAREN, 0);
}

qasm3Parser::ExpressionContext* qasm3Parser::ExpressionTerminatorContext::expression() {
  return getRuleContext<qasm3Parser::ExpressionContext>(0);
}

tree::TerminalNode* qasm3Parser::ExpressionTerminatorContext::RPAREN() {
  return getToken(qasm3Parser::RPAREN, 0);
}

qasm3Parser::ExpressionTerminatorContext* qasm3Parser::ExpressionTerminatorContext::expressionTerminator() {
  return getRuleContext<qasm3Parser::ExpressionTerminatorContext>(0);
}

tree::TerminalNode* qasm3Parser::ExpressionTerminatorContext::LBRACKET() {
  return getToken(qasm3Parser::LBRACKET, 0);
}

tree::TerminalNode* qasm3Parser::ExpressionTerminatorContext::RBRACKET() {
  return getToken(qasm3Parser::RBRACKET, 0);
}


size_t qasm3Parser::ExpressionTerminatorContext::getRuleIndex() const {
  return qasm3Parser::RuleExpressionTerminator;
}

void qasm3Parser::ExpressionTerminatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionTerminator(this);
}

void qasm3Parser::ExpressionTerminatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionTerminator(this);
}


qasm3Parser::ExpressionTerminatorContext* qasm3Parser::expressionTerminator() {
   return expressionTerminator(0);
}

qasm3Parser::ExpressionTerminatorContext* qasm3Parser::expressionTerminator(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  qasm3Parser::ExpressionTerminatorContext *_localctx = _tracker.createInstance<ExpressionTerminatorContext>(_ctx, parentState);
  qasm3Parser::ExpressionTerminatorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 150;
  enterRecursionRule(_localctx, 150, qasm3Parser::RuleExpressionTerminator, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(819);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 77, _ctx)) {
    case 1: {
      setState(805);
      match(qasm3Parser::Constant);
      break;
    }

    case 2: {
      setState(806);
      match(qasm3Parser::Integer);
      break;
    }

    case 3: {
      setState(807);
      match(qasm3Parser::RealNumber);
      break;
    }

    case 4: {
      setState(808);
      match(qasm3Parser::ImagNumber);
      break;
    }

    case 5: {
      setState(809);
      booleanLiteral();
      break;
    }

    case 6: {
      setState(810);
      match(qasm3Parser::Identifier);
      break;
    }

    case 7: {
      setState(811);
      match(qasm3Parser::StringLiteral);
      break;
    }

    case 8: {
      setState(812);
      builtInCall();
      break;
    }

    case 9: {
      setState(813);
      externOrSubroutineCall();
      break;
    }

    case 10: {
      setState(814);
      timingIdentifier();
      break;
    }

    case 11: {
      setState(815);
      match(qasm3Parser::LPAREN);
      setState(816);
      expression(0);
      setState(817);
      match(qasm3Parser::RPAREN);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(828);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ExpressionTerminatorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleExpressionTerminator);
        setState(821);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(822);
        match(qasm3Parser::LBRACKET);
        setState(823);
        expression(0);
        setState(824);
        match(qasm3Parser::RBRACKET); 
      }
      setState(830);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 78, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- BooleanLiteralContext ------------------------------------------------------------------

qasm3Parser::BooleanLiteralContext::BooleanLiteralContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t qasm3Parser::BooleanLiteralContext::getRuleIndex() const {
  return qasm3Parser::RuleBooleanLiteral;
}

void qasm3Parser::BooleanLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBooleanLiteral(this);
}

void qasm3Parser::BooleanLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBooleanLiteral(this);
}

qasm3Parser::BooleanLiteralContext* qasm3Parser::booleanLiteral() {
  BooleanLiteralContext *_localctx = _tracker.createInstance<BooleanLiteralContext>(_ctx, getState());
  enterRule(_localctx, 152, qasm3Parser::RuleBooleanLiteral);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(831);
    _la = _input->LA(1);
    if (!(_la == qasm3Parser::T__45

    || _la == qasm3Parser::T__46)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BuiltInCallContext ------------------------------------------------------------------

qasm3Parser::BuiltInCallContext::BuiltInCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::BuiltInCallContext::LPAREN() {
  return getToken(qasm3Parser::LPAREN, 0);
}

qasm3Parser::ExpressionListContext* qasm3Parser::BuiltInCallContext::expressionList() {
  return getRuleContext<qasm3Parser::ExpressionListContext>(0);
}

tree::TerminalNode* qasm3Parser::BuiltInCallContext::RPAREN() {
  return getToken(qasm3Parser::RPAREN, 0);
}

qasm3Parser::BuiltInMathContext* qasm3Parser::BuiltInCallContext::builtInMath() {
  return getRuleContext<qasm3Parser::BuiltInMathContext>(0);
}

qasm3Parser::CastOperatorContext* qasm3Parser::BuiltInCallContext::castOperator() {
  return getRuleContext<qasm3Parser::CastOperatorContext>(0);
}


size_t qasm3Parser::BuiltInCallContext::getRuleIndex() const {
  return qasm3Parser::RuleBuiltInCall;
}

void qasm3Parser::BuiltInCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBuiltInCall(this);
}

void qasm3Parser::BuiltInCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBuiltInCall(this);
}

qasm3Parser::BuiltInCallContext* qasm3Parser::builtInCall() {
  BuiltInCallContext *_localctx = _tracker.createInstance<BuiltInCallContext>(_ctx, getState());
  enterRule(_localctx, 154, qasm3Parser::RuleBuiltInCall);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(835);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__47:
      case qasm3Parser::T__48:
      case qasm3Parser::T__49:
      case qasm3Parser::T__50:
      case qasm3Parser::T__51:
      case qasm3Parser::T__52:
      case qasm3Parser::T__53:
      case qasm3Parser::T__54:
      case qasm3Parser::T__55: {
        setState(833);
        builtInMath();
        break;
      }

      case qasm3Parser::T__6:
      case qasm3Parser::T__7:
      case qasm3Parser::T__8:
      case qasm3Parser::T__9:
      case qasm3Parser::T__10:
      case qasm3Parser::T__11:
      case qasm3Parser::T__12:
      case qasm3Parser::T__13:
      case qasm3Parser::T__14:
      case qasm3Parser::T__80:
      case qasm3Parser::T__81: {
        setState(834);
        castOperator();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(837);
    match(qasm3Parser::LPAREN);
    setState(838);
    expressionList();
    setState(839);
    match(qasm3Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BuiltInMathContext ------------------------------------------------------------------

qasm3Parser::BuiltInMathContext::BuiltInMathContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t qasm3Parser::BuiltInMathContext::getRuleIndex() const {
  return qasm3Parser::RuleBuiltInMath;
}

void qasm3Parser::BuiltInMathContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBuiltInMath(this);
}

void qasm3Parser::BuiltInMathContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBuiltInMath(this);
}

qasm3Parser::BuiltInMathContext* qasm3Parser::builtInMath() {
  BuiltInMathContext *_localctx = _tracker.createInstance<BuiltInMathContext>(_ctx, getState());
  enterRule(_localctx, 156, qasm3Parser::RuleBuiltInMath);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(841);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << qasm3Parser::T__47)
      | (1ULL << qasm3Parser::T__48)
      | (1ULL << qasm3Parser::T__49)
      | (1ULL << qasm3Parser::T__50)
      | (1ULL << qasm3Parser::T__51)
      | (1ULL << qasm3Parser::T__52)
      | (1ULL << qasm3Parser::T__53)
      | (1ULL << qasm3Parser::T__54)
      | (1ULL << qasm3Parser::T__55))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastOperatorContext ------------------------------------------------------------------

qasm3Parser::CastOperatorContext::CastOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::ClassicalTypeContext* qasm3Parser::CastOperatorContext::classicalType() {
  return getRuleContext<qasm3Parser::ClassicalTypeContext>(0);
}


size_t qasm3Parser::CastOperatorContext::getRuleIndex() const {
  return qasm3Parser::RuleCastOperator;
}

void qasm3Parser::CastOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCastOperator(this);
}

void qasm3Parser::CastOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCastOperator(this);
}

qasm3Parser::CastOperatorContext* qasm3Parser::castOperator() {
  CastOperatorContext *_localctx = _tracker.createInstance<CastOperatorContext>(_ctx, getState());
  enterRule(_localctx, 158, qasm3Parser::RuleCastOperator);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(843);
    classicalType();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionListContext ------------------------------------------------------------------

qasm3Parser::ExpressionListContext::ExpressionListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<qasm3Parser::ExpressionContext *> qasm3Parser::ExpressionListContext::expression() {
  return getRuleContexts<qasm3Parser::ExpressionContext>();
}

qasm3Parser::ExpressionContext* qasm3Parser::ExpressionListContext::expression(size_t i) {
  return getRuleContext<qasm3Parser::ExpressionContext>(i);
}

std::vector<tree::TerminalNode *> qasm3Parser::ExpressionListContext::COMMA() {
  return getTokens(qasm3Parser::COMMA);
}

tree::TerminalNode* qasm3Parser::ExpressionListContext::COMMA(size_t i) {
  return getToken(qasm3Parser::COMMA, i);
}


size_t qasm3Parser::ExpressionListContext::getRuleIndex() const {
  return qasm3Parser::RuleExpressionList;
}

void qasm3Parser::ExpressionListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpressionList(this);
}

void qasm3Parser::ExpressionListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpressionList(this);
}

qasm3Parser::ExpressionListContext* qasm3Parser::expressionList() {
  ExpressionListContext *_localctx = _tracker.createInstance<ExpressionListContext>(_ctx, getState());
  enterRule(_localctx, 160, qasm3Parser::RuleExpressionList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(845);
    expression(0);
    setState(850);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == qasm3Parser::COMMA) {
      setState(846);
      match(qasm3Parser::COMMA);
      setState(847);
      expression(0);
      setState(852);
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

//----------------- EqualsExpressionContext ------------------------------------------------------------------

qasm3Parser::EqualsExpressionContext::EqualsExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::EqualsExpressionContext::EQUALS() {
  return getToken(qasm3Parser::EQUALS, 0);
}

qasm3Parser::ExpressionContext* qasm3Parser::EqualsExpressionContext::expression() {
  return getRuleContext<qasm3Parser::ExpressionContext>(0);
}


size_t qasm3Parser::EqualsExpressionContext::getRuleIndex() const {
  return qasm3Parser::RuleEqualsExpression;
}

void qasm3Parser::EqualsExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEqualsExpression(this);
}

void qasm3Parser::EqualsExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEqualsExpression(this);
}

qasm3Parser::EqualsExpressionContext* qasm3Parser::equalsExpression() {
  EqualsExpressionContext *_localctx = _tracker.createInstance<EqualsExpressionContext>(_ctx, getState());
  enterRule(_localctx, 162, qasm3Parser::RuleEqualsExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(853);
    match(qasm3Parser::EQUALS);
    setState(854);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentOperatorContext ------------------------------------------------------------------

qasm3Parser::AssignmentOperatorContext::AssignmentOperatorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::AssignmentOperatorContext::EQUALS() {
  return getToken(qasm3Parser::EQUALS, 0);
}


size_t qasm3Parser::AssignmentOperatorContext::getRuleIndex() const {
  return qasm3Parser::RuleAssignmentOperator;
}

void qasm3Parser::AssignmentOperatorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignmentOperator(this);
}

void qasm3Parser::AssignmentOperatorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignmentOperator(this);
}

qasm3Parser::AssignmentOperatorContext* qasm3Parser::assignmentOperator() {
  AssignmentOperatorContext *_localctx = _tracker.createInstance<AssignmentOperatorContext>(_ctx, getState());
  enterRule(_localctx, 164, qasm3Parser::RuleAssignmentOperator);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(856);
    _la = _input->LA(1);
    if (!(((((_la - 57) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 57)) & ((1ULL << (qasm3Parser::T__56 - 57))
      | (1ULL << (qasm3Parser::T__57 - 57))
      | (1ULL << (qasm3Parser::T__58 - 57))
      | (1ULL << (qasm3Parser::T__59 - 57))
      | (1ULL << (qasm3Parser::T__60 - 57))
      | (1ULL << (qasm3Parser::T__61 - 57))
      | (1ULL << (qasm3Parser::T__62 - 57))
      | (1ULL << (qasm3Parser::T__63 - 57))
      | (1ULL << (qasm3Parser::T__64 - 57))
      | (1ULL << (qasm3Parser::T__65 - 57))
      | (1ULL << (qasm3Parser::T__66 - 57))
      | (1ULL << (qasm3Parser::T__67 - 57))
      | (1ULL << (qasm3Parser::EQUALS - 57)))) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetDeclarationContext ------------------------------------------------------------------

qasm3Parser::SetDeclarationContext::SetDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::SetDeclarationContext::LBRACE() {
  return getToken(qasm3Parser::LBRACE, 0);
}

qasm3Parser::ExpressionListContext* qasm3Parser::SetDeclarationContext::expressionList() {
  return getRuleContext<qasm3Parser::ExpressionListContext>(0);
}

tree::TerminalNode* qasm3Parser::SetDeclarationContext::RBRACE() {
  return getToken(qasm3Parser::RBRACE, 0);
}

qasm3Parser::RangeDefinitionContext* qasm3Parser::SetDeclarationContext::rangeDefinition() {
  return getRuleContext<qasm3Parser::RangeDefinitionContext>(0);
}

tree::TerminalNode* qasm3Parser::SetDeclarationContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}


size_t qasm3Parser::SetDeclarationContext::getRuleIndex() const {
  return qasm3Parser::RuleSetDeclaration;
}

void qasm3Parser::SetDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSetDeclaration(this);
}

void qasm3Parser::SetDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSetDeclaration(this);
}

qasm3Parser::SetDeclarationContext* qasm3Parser::setDeclaration() {
  SetDeclarationContext *_localctx = _tracker.createInstance<SetDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 166, qasm3Parser::RuleSetDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(864);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::LBRACE: {
        enterOuterAlt(_localctx, 1);
        setState(858);
        match(qasm3Parser::LBRACE);
        setState(859);
        expressionList();
        setState(860);
        match(qasm3Parser::RBRACE);
        break;
      }

      case qasm3Parser::LBRACKET: {
        enterOuterAlt(_localctx, 2);
        setState(862);
        rangeDefinition();
        break;
      }

      case qasm3Parser::Identifier: {
        enterOuterAlt(_localctx, 3);
        setState(863);
        match(qasm3Parser::Identifier);
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

//----------------- ProgramBlockContext ------------------------------------------------------------------

qasm3Parser::ProgramBlockContext::ProgramBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<qasm3Parser::StatementContext *> qasm3Parser::ProgramBlockContext::statement() {
  return getRuleContexts<qasm3Parser::StatementContext>();
}

qasm3Parser::StatementContext* qasm3Parser::ProgramBlockContext::statement(size_t i) {
  return getRuleContext<qasm3Parser::StatementContext>(i);
}

std::vector<qasm3Parser::ControlDirectiveContext *> qasm3Parser::ProgramBlockContext::controlDirective() {
  return getRuleContexts<qasm3Parser::ControlDirectiveContext>();
}

qasm3Parser::ControlDirectiveContext* qasm3Parser::ProgramBlockContext::controlDirective(size_t i) {
  return getRuleContext<qasm3Parser::ControlDirectiveContext>(i);
}

tree::TerminalNode* qasm3Parser::ProgramBlockContext::LBRACE() {
  return getToken(qasm3Parser::LBRACE, 0);
}

tree::TerminalNode* qasm3Parser::ProgramBlockContext::RBRACE() {
  return getToken(qasm3Parser::RBRACE, 0);
}


size_t qasm3Parser::ProgramBlockContext::getRuleIndex() const {
  return qasm3Parser::RuleProgramBlock;
}

void qasm3Parser::ProgramBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgramBlock(this);
}

void qasm3Parser::ProgramBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgramBlock(this);
}

qasm3Parser::ProgramBlockContext* qasm3Parser::programBlock() {
  ProgramBlockContext *_localctx = _tracker.createInstance<ProgramBlockContext>(_ctx, getState());
  enterRule(_localctx, 168, qasm3Parser::RuleProgramBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(877);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 84, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(866);
      statement();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(867);
      controlDirective();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(868);
      match(qasm3Parser::LBRACE);
      setState(873);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << qasm3Parser::T__6)
        | (1ULL << qasm3Parser::T__7)
        | (1ULL << qasm3Parser::T__8)
        | (1ULL << qasm3Parser::T__9)
        | (1ULL << qasm3Parser::T__10)
        | (1ULL << qasm3Parser::T__11)
        | (1ULL << qasm3Parser::T__12)
        | (1ULL << qasm3Parser::T__13)
        | (1ULL << qasm3Parser::T__14)
        | (1ULL << qasm3Parser::T__15)
        | (1ULL << qasm3Parser::T__16)
        | (1ULL << qasm3Parser::T__19)
        | (1ULL << qasm3Parser::T__20)
        | (1ULL << qasm3Parser::T__21)
        | (1ULL << qasm3Parser::T__22)
        | (1ULL << qasm3Parser::T__23)
        | (1ULL << qasm3Parser::T__24)
        | (1ULL << qasm3Parser::T__25)
        | (1ULL << qasm3Parser::T__27)
        | (1ULL << qasm3Parser::T__28)
        | (1ULL << qasm3Parser::T__29)
        | (1ULL << qasm3Parser::T__30)
        | (1ULL << qasm3Parser::T__31)
        | (1ULL << qasm3Parser::T__45)
        | (1ULL << qasm3Parser::T__46)
        | (1ULL << qasm3Parser::T__47)
        | (1ULL << qasm3Parser::T__48)
        | (1ULL << qasm3Parser::T__49)
        | (1ULL << qasm3Parser::T__50)
        | (1ULL << qasm3Parser::T__51)
        | (1ULL << qasm3Parser::T__52)
        | (1ULL << qasm3Parser::T__53)
        | (1ULL << qasm3Parser::T__54)
        | (1ULL << qasm3Parser::T__55))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 69)) & ((1ULL << (qasm3Parser::T__68 - 69))
        | (1ULL << (qasm3Parser::T__70 - 69))
        | (1ULL << (qasm3Parser::T__72 - 69))
        | (1ULL << (qasm3Parser::T__73 - 69))
        | (1ULL << (qasm3Parser::T__74 - 69))
        | (1ULL << (qasm3Parser::T__75 - 69))
        | (1ULL << (qasm3Parser::T__76 - 69))
        | (1ULL << (qasm3Parser::T__80 - 69))
        | (1ULL << (qasm3Parser::T__81 - 69))
        | (1ULL << (qasm3Parser::T__82 - 69))
        | (1ULL << (qasm3Parser::T__83 - 69))
        | (1ULL << (qasm3Parser::T__84 - 69))
        | (1ULL << (qasm3Parser::T__85 - 69))
        | (1ULL << (qasm3Parser::LPAREN - 69))
        | (1ULL << (qasm3Parser::MINUS - 69))
        | (1ULL << (qasm3Parser::ImagNumber - 69))
        | (1ULL << (qasm3Parser::Constant - 69))
        | (1ULL << (qasm3Parser::Integer - 69))
        | (1ULL << (qasm3Parser::Identifier - 69))
        | (1ULL << (qasm3Parser::RealNumber - 69))
        | (1ULL << (qasm3Parser::TimingLiteral - 69))
        | (1ULL << (qasm3Parser::StringLiteral - 69)))) != 0)) {
        setState(871);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 82, _ctx)) {
        case 1: {
          setState(869);
          statement();
          break;
        }

        case 2: {
          setState(870);
          controlDirective();
          break;
        }

        default:
          break;
        }
        setState(875);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(876);
      match(qasm3Parser::RBRACE);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BranchingStatementContext ------------------------------------------------------------------

qasm3Parser::BranchingStatementContext::BranchingStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::BranchingStatementContext::LPAREN() {
  return getToken(qasm3Parser::LPAREN, 0);
}

qasm3Parser::ExpressionContext* qasm3Parser::BranchingStatementContext::expression() {
  return getRuleContext<qasm3Parser::ExpressionContext>(0);
}

tree::TerminalNode* qasm3Parser::BranchingStatementContext::RPAREN() {
  return getToken(qasm3Parser::RPAREN, 0);
}

std::vector<qasm3Parser::ProgramBlockContext *> qasm3Parser::BranchingStatementContext::programBlock() {
  return getRuleContexts<qasm3Parser::ProgramBlockContext>();
}

qasm3Parser::ProgramBlockContext* qasm3Parser::BranchingStatementContext::programBlock(size_t i) {
  return getRuleContext<qasm3Parser::ProgramBlockContext>(i);
}


size_t qasm3Parser::BranchingStatementContext::getRuleIndex() const {
  return qasm3Parser::RuleBranchingStatement;
}

void qasm3Parser::BranchingStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBranchingStatement(this);
}

void qasm3Parser::BranchingStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBranchingStatement(this);
}

qasm3Parser::BranchingStatementContext* qasm3Parser::branchingStatement() {
  BranchingStatementContext *_localctx = _tracker.createInstance<BranchingStatementContext>(_ctx, getState());
  enterRule(_localctx, 170, qasm3Parser::RuleBranchingStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(879);
    match(qasm3Parser::T__68);
    setState(880);
    match(qasm3Parser::LPAREN);
    setState(881);
    expression(0);
    setState(882);
    match(qasm3Parser::RPAREN);
    setState(883);
    programBlock();
    setState(886);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 85, _ctx)) {
    case 1: {
      setState(884);
      match(qasm3Parser::T__69);
      setState(885);
      programBlock();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LoopSignatureContext ------------------------------------------------------------------

qasm3Parser::LoopSignatureContext::LoopSignatureContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::LoopSignatureContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

qasm3Parser::SetDeclarationContext* qasm3Parser::LoopSignatureContext::setDeclaration() {
  return getRuleContext<qasm3Parser::SetDeclarationContext>(0);
}

tree::TerminalNode* qasm3Parser::LoopSignatureContext::LPAREN() {
  return getToken(qasm3Parser::LPAREN, 0);
}

qasm3Parser::ExpressionContext* qasm3Parser::LoopSignatureContext::expression() {
  return getRuleContext<qasm3Parser::ExpressionContext>(0);
}

tree::TerminalNode* qasm3Parser::LoopSignatureContext::RPAREN() {
  return getToken(qasm3Parser::RPAREN, 0);
}


size_t qasm3Parser::LoopSignatureContext::getRuleIndex() const {
  return qasm3Parser::RuleLoopSignature;
}

void qasm3Parser::LoopSignatureContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopSignature(this);
}

void qasm3Parser::LoopSignatureContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopSignature(this);
}

qasm3Parser::LoopSignatureContext* qasm3Parser::loopSignature() {
  LoopSignatureContext *_localctx = _tracker.createInstance<LoopSignatureContext>(_ctx, getState());
  enterRule(_localctx, 172, qasm3Parser::RuleLoopSignature);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(897);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__70: {
        enterOuterAlt(_localctx, 1);
        setState(888);
        match(qasm3Parser::T__70);
        setState(889);
        match(qasm3Parser::Identifier);
        setState(890);
        match(qasm3Parser::T__71);
        setState(891);
        setDeclaration();
        break;
      }

      case qasm3Parser::T__72: {
        enterOuterAlt(_localctx, 2);
        setState(892);
        match(qasm3Parser::T__72);
        setState(893);
        match(qasm3Parser::LPAREN);
        setState(894);
        expression(0);
        setState(895);
        match(qasm3Parser::RPAREN);
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

//----------------- LoopStatementContext ------------------------------------------------------------------

qasm3Parser::LoopStatementContext::LoopStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::LoopSignatureContext* qasm3Parser::LoopStatementContext::loopSignature() {
  return getRuleContext<qasm3Parser::LoopSignatureContext>(0);
}

qasm3Parser::ProgramBlockContext* qasm3Parser::LoopStatementContext::programBlock() {
  return getRuleContext<qasm3Parser::ProgramBlockContext>(0);
}


size_t qasm3Parser::LoopStatementContext::getRuleIndex() const {
  return qasm3Parser::RuleLoopStatement;
}

void qasm3Parser::LoopStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLoopStatement(this);
}

void qasm3Parser::LoopStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLoopStatement(this);
}

qasm3Parser::LoopStatementContext* qasm3Parser::loopStatement() {
  LoopStatementContext *_localctx = _tracker.createInstance<LoopStatementContext>(_ctx, getState());
  enterRule(_localctx, 174, qasm3Parser::RuleLoopStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(899);
    loopSignature();
    setState(900);
    programBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EndStatementContext ------------------------------------------------------------------

qasm3Parser::EndStatementContext::EndStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::EndStatementContext::SEMICOLON() {
  return getToken(qasm3Parser::SEMICOLON, 0);
}


size_t qasm3Parser::EndStatementContext::getRuleIndex() const {
  return qasm3Parser::RuleEndStatement;
}

void qasm3Parser::EndStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEndStatement(this);
}

void qasm3Parser::EndStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEndStatement(this);
}

qasm3Parser::EndStatementContext* qasm3Parser::endStatement() {
  EndStatementContext *_localctx = _tracker.createInstance<EndStatementContext>(_ctx, getState());
  enterRule(_localctx, 176, qasm3Parser::RuleEndStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(902);
    match(qasm3Parser::T__73);
    setState(903);
    match(qasm3Parser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnStatementContext ------------------------------------------------------------------

qasm3Parser::ReturnStatementContext::ReturnStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::ReturnStatementContext::SEMICOLON() {
  return getToken(qasm3Parser::SEMICOLON, 0);
}

qasm3Parser::ExpressionContext* qasm3Parser::ReturnStatementContext::expression() {
  return getRuleContext<qasm3Parser::ExpressionContext>(0);
}

qasm3Parser::QuantumMeasurementContext* qasm3Parser::ReturnStatementContext::quantumMeasurement() {
  return getRuleContext<qasm3Parser::QuantumMeasurementContext>(0);
}


size_t qasm3Parser::ReturnStatementContext::getRuleIndex() const {
  return qasm3Parser::RuleReturnStatement;
}

void qasm3Parser::ReturnStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturnStatement(this);
}

void qasm3Parser::ReturnStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturnStatement(this);
}

qasm3Parser::ReturnStatementContext* qasm3Parser::returnStatement() {
  ReturnStatementContext *_localctx = _tracker.createInstance<ReturnStatementContext>(_ctx, getState());
  enterRule(_localctx, 178, qasm3Parser::RuleReturnStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(905);
    match(qasm3Parser::T__74);
    setState(908);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__6:
      case qasm3Parser::T__7:
      case qasm3Parser::T__8:
      case qasm3Parser::T__9:
      case qasm3Parser::T__10:
      case qasm3Parser::T__11:
      case qasm3Parser::T__12:
      case qasm3Parser::T__13:
      case qasm3Parser::T__14:
      case qasm3Parser::T__30:
      case qasm3Parser::T__31:
      case qasm3Parser::T__45:
      case qasm3Parser::T__46:
      case qasm3Parser::T__47:
      case qasm3Parser::T__48:
      case qasm3Parser::T__49:
      case qasm3Parser::T__50:
      case qasm3Parser::T__51:
      case qasm3Parser::T__52:
      case qasm3Parser::T__53:
      case qasm3Parser::T__54:
      case qasm3Parser::T__55:
      case qasm3Parser::T__80:
      case qasm3Parser::T__81:
      case qasm3Parser::T__83:
      case qasm3Parser::LPAREN:
      case qasm3Parser::MINUS:
      case qasm3Parser::ImagNumber:
      case qasm3Parser::Constant:
      case qasm3Parser::Integer:
      case qasm3Parser::Identifier:
      case qasm3Parser::RealNumber:
      case qasm3Parser::TimingLiteral:
      case qasm3Parser::StringLiteral: {
        setState(906);
        expression(0);
        break;
      }

      case qasm3Parser::T__23: {
        setState(907);
        quantumMeasurement();
        break;
      }

      case qasm3Parser::SEMICOLON: {
        break;
      }

    default:
      break;
    }
    setState(910);
    match(qasm3Parser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ControlDirectiveContext ------------------------------------------------------------------

qasm3Parser::ControlDirectiveContext::ControlDirectiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::ControlDirectiveContext::SEMICOLON() {
  return getToken(qasm3Parser::SEMICOLON, 0);
}

qasm3Parser::EndStatementContext* qasm3Parser::ControlDirectiveContext::endStatement() {
  return getRuleContext<qasm3Parser::EndStatementContext>(0);
}

qasm3Parser::ReturnStatementContext* qasm3Parser::ControlDirectiveContext::returnStatement() {
  return getRuleContext<qasm3Parser::ReturnStatementContext>(0);
}


size_t qasm3Parser::ControlDirectiveContext::getRuleIndex() const {
  return qasm3Parser::RuleControlDirective;
}

void qasm3Parser::ControlDirectiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterControlDirective(this);
}

void qasm3Parser::ControlDirectiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitControlDirective(this);
}

qasm3Parser::ControlDirectiveContext* qasm3Parser::controlDirective() {
  ControlDirectiveContext *_localctx = _tracker.createInstance<ControlDirectiveContext>(_ctx, getState());
  enterRule(_localctx, 180, qasm3Parser::RuleControlDirective);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(916);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__75:
      case qasm3Parser::T__76: {
        enterOuterAlt(_localctx, 1);
        setState(912);
        _la = _input->LA(1);
        if (!(_la == qasm3Parser::T__75

        || _la == qasm3Parser::T__76)) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(913);
        match(qasm3Parser::SEMICOLON);
        break;
      }

      case qasm3Parser::T__73: {
        enterOuterAlt(_localctx, 2);
        setState(914);
        endStatement();
        break;
      }

      case qasm3Parser::T__74: {
        enterOuterAlt(_localctx, 3);
        setState(915);
        returnStatement();
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

//----------------- ExternDeclarationContext ------------------------------------------------------------------

qasm3Parser::ExternDeclarationContext::ExternDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::ExternDeclarationContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

tree::TerminalNode* qasm3Parser::ExternDeclarationContext::LPAREN() {
  return getToken(qasm3Parser::LPAREN, 0);
}

tree::TerminalNode* qasm3Parser::ExternDeclarationContext::RPAREN() {
  return getToken(qasm3Parser::RPAREN, 0);
}

tree::TerminalNode* qasm3Parser::ExternDeclarationContext::SEMICOLON() {
  return getToken(qasm3Parser::SEMICOLON, 0);
}

qasm3Parser::ClassicalTypeListContext* qasm3Parser::ExternDeclarationContext::classicalTypeList() {
  return getRuleContext<qasm3Parser::ClassicalTypeListContext>(0);
}

qasm3Parser::ReturnSignatureContext* qasm3Parser::ExternDeclarationContext::returnSignature() {
  return getRuleContext<qasm3Parser::ReturnSignatureContext>(0);
}


size_t qasm3Parser::ExternDeclarationContext::getRuleIndex() const {
  return qasm3Parser::RuleExternDeclaration;
}

void qasm3Parser::ExternDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExternDeclaration(this);
}

void qasm3Parser::ExternDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExternDeclaration(this);
}

qasm3Parser::ExternDeclarationContext* qasm3Parser::externDeclaration() {
  ExternDeclarationContext *_localctx = _tracker.createInstance<ExternDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 182, qasm3Parser::RuleExternDeclaration);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(918);
    match(qasm3Parser::T__77);
    setState(919);
    match(qasm3Parser::Identifier);
    setState(920);
    match(qasm3Parser::LPAREN);
    setState(922);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << qasm3Parser::T__6)
      | (1ULL << qasm3Parser::T__7)
      | (1ULL << qasm3Parser::T__8)
      | (1ULL << qasm3Parser::T__9)
      | (1ULL << qasm3Parser::T__10)
      | (1ULL << qasm3Parser::T__11)
      | (1ULL << qasm3Parser::T__12)
      | (1ULL << qasm3Parser::T__13)
      | (1ULL << qasm3Parser::T__14))) != 0) || _la == qasm3Parser::T__80

    || _la == qasm3Parser::T__81) {
      setState(921);
      classicalTypeList();
    }
    setState(924);
    match(qasm3Parser::RPAREN);
    setState(926);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::ARROW) {
      setState(925);
      returnSignature();
    }
    setState(928);
    match(qasm3Parser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExternOrSubroutineCallContext ------------------------------------------------------------------

qasm3Parser::ExternOrSubroutineCallContext::ExternOrSubroutineCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::ExternOrSubroutineCallContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

tree::TerminalNode* qasm3Parser::ExternOrSubroutineCallContext::LPAREN() {
  return getToken(qasm3Parser::LPAREN, 0);
}

tree::TerminalNode* qasm3Parser::ExternOrSubroutineCallContext::RPAREN() {
  return getToken(qasm3Parser::RPAREN, 0);
}

qasm3Parser::ExpressionListContext* qasm3Parser::ExternOrSubroutineCallContext::expressionList() {
  return getRuleContext<qasm3Parser::ExpressionListContext>(0);
}


size_t qasm3Parser::ExternOrSubroutineCallContext::getRuleIndex() const {
  return qasm3Parser::RuleExternOrSubroutineCall;
}

void qasm3Parser::ExternOrSubroutineCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExternOrSubroutineCall(this);
}

void qasm3Parser::ExternOrSubroutineCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExternOrSubroutineCall(this);
}

qasm3Parser::ExternOrSubroutineCallContext* qasm3Parser::externOrSubroutineCall() {
  ExternOrSubroutineCallContext *_localctx = _tracker.createInstance<ExternOrSubroutineCallContext>(_ctx, getState());
  enterRule(_localctx, 184, qasm3Parser::RuleExternOrSubroutineCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(930);
    match(qasm3Parser::Identifier);
    setState(931);
    match(qasm3Parser::LPAREN);
    setState(933);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << qasm3Parser::T__6)
      | (1ULL << qasm3Parser::T__7)
      | (1ULL << qasm3Parser::T__8)
      | (1ULL << qasm3Parser::T__9)
      | (1ULL << qasm3Parser::T__10)
      | (1ULL << qasm3Parser::T__11)
      | (1ULL << qasm3Parser::T__12)
      | (1ULL << qasm3Parser::T__13)
      | (1ULL << qasm3Parser::T__14)
      | (1ULL << qasm3Parser::T__30)
      | (1ULL << qasm3Parser::T__31)
      | (1ULL << qasm3Parser::T__45)
      | (1ULL << qasm3Parser::T__46)
      | (1ULL << qasm3Parser::T__47)
      | (1ULL << qasm3Parser::T__48)
      | (1ULL << qasm3Parser::T__49)
      | (1ULL << qasm3Parser::T__50)
      | (1ULL << qasm3Parser::T__51)
      | (1ULL << qasm3Parser::T__52)
      | (1ULL << qasm3Parser::T__53)
      | (1ULL << qasm3Parser::T__54)
      | (1ULL << qasm3Parser::T__55))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 81)) & ((1ULL << (qasm3Parser::T__80 - 81))
      | (1ULL << (qasm3Parser::T__81 - 81))
      | (1ULL << (qasm3Parser::T__83 - 81))
      | (1ULL << (qasm3Parser::LPAREN - 81))
      | (1ULL << (qasm3Parser::MINUS - 81))
      | (1ULL << (qasm3Parser::ImagNumber - 81))
      | (1ULL << (qasm3Parser::Constant - 81))
      | (1ULL << (qasm3Parser::Integer - 81))
      | (1ULL << (qasm3Parser::Identifier - 81))
      | (1ULL << (qasm3Parser::RealNumber - 81))
      | (1ULL << (qasm3Parser::TimingLiteral - 81))
      | (1ULL << (qasm3Parser::StringLiteral - 81)))) != 0)) {
      setState(932);
      expressionList();
    }
    setState(935);
    match(qasm3Parser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubroutineDefinitionContext ------------------------------------------------------------------

qasm3Parser::SubroutineDefinitionContext::SubroutineDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::SubroutineDefinitionContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

tree::TerminalNode* qasm3Parser::SubroutineDefinitionContext::LPAREN() {
  return getToken(qasm3Parser::LPAREN, 0);
}

tree::TerminalNode* qasm3Parser::SubroutineDefinitionContext::RPAREN() {
  return getToken(qasm3Parser::RPAREN, 0);
}

qasm3Parser::SubroutineBlockContext* qasm3Parser::SubroutineDefinitionContext::subroutineBlock() {
  return getRuleContext<qasm3Parser::SubroutineBlockContext>(0);
}

qasm3Parser::AnyTypeArgumentListContext* qasm3Parser::SubroutineDefinitionContext::anyTypeArgumentList() {
  return getRuleContext<qasm3Parser::AnyTypeArgumentListContext>(0);
}

qasm3Parser::ReturnSignatureContext* qasm3Parser::SubroutineDefinitionContext::returnSignature() {
  return getRuleContext<qasm3Parser::ReturnSignatureContext>(0);
}


size_t qasm3Parser::SubroutineDefinitionContext::getRuleIndex() const {
  return qasm3Parser::RuleSubroutineDefinition;
}

void qasm3Parser::SubroutineDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubroutineDefinition(this);
}

void qasm3Parser::SubroutineDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubroutineDefinition(this);
}

qasm3Parser::SubroutineDefinitionContext* qasm3Parser::subroutineDefinition() {
  SubroutineDefinitionContext *_localctx = _tracker.createInstance<SubroutineDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 186, qasm3Parser::RuleSubroutineDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(937);
    match(qasm3Parser::T__78);
    setState(938);
    match(qasm3Parser::Identifier);
    setState(939);
    match(qasm3Parser::LPAREN);
    setState(941);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << qasm3Parser::T__4)
      | (1ULL << qasm3Parser::T__5)
      | (1ULL << qasm3Parser::T__6)
      | (1ULL << qasm3Parser::T__7)
      | (1ULL << qasm3Parser::T__8)
      | (1ULL << qasm3Parser::T__9)
      | (1ULL << qasm3Parser::T__10)
      | (1ULL << qasm3Parser::T__11)
      | (1ULL << qasm3Parser::T__12)
      | (1ULL << qasm3Parser::T__13)
      | (1ULL << qasm3Parser::T__14))) != 0) || _la == qasm3Parser::T__80

    || _la == qasm3Parser::T__81) {
      setState(940);
      anyTypeArgumentList();
    }
    setState(943);
    match(qasm3Parser::RPAREN);
    setState(945);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::ARROW) {
      setState(944);
      returnSignature();
    }
    setState(947);
    subroutineBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SubroutineBlockContext ------------------------------------------------------------------

qasm3Parser::SubroutineBlockContext::SubroutineBlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::SubroutineBlockContext::LBRACE() {
  return getToken(qasm3Parser::LBRACE, 0);
}

tree::TerminalNode* qasm3Parser::SubroutineBlockContext::RBRACE() {
  return getToken(qasm3Parser::RBRACE, 0);
}

std::vector<qasm3Parser::StatementContext *> qasm3Parser::SubroutineBlockContext::statement() {
  return getRuleContexts<qasm3Parser::StatementContext>();
}

qasm3Parser::StatementContext* qasm3Parser::SubroutineBlockContext::statement(size_t i) {
  return getRuleContext<qasm3Parser::StatementContext>(i);
}

qasm3Parser::ReturnStatementContext* qasm3Parser::SubroutineBlockContext::returnStatement() {
  return getRuleContext<qasm3Parser::ReturnStatementContext>(0);
}


size_t qasm3Parser::SubroutineBlockContext::getRuleIndex() const {
  return qasm3Parser::RuleSubroutineBlock;
}

void qasm3Parser::SubroutineBlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSubroutineBlock(this);
}

void qasm3Parser::SubroutineBlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSubroutineBlock(this);
}

qasm3Parser::SubroutineBlockContext* qasm3Parser::subroutineBlock() {
  SubroutineBlockContext *_localctx = _tracker.createInstance<SubroutineBlockContext>(_ctx, getState());
  enterRule(_localctx, 188, qasm3Parser::RuleSubroutineBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(949);
    match(qasm3Parser::LBRACE);
    setState(953);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << qasm3Parser::T__6)
      | (1ULL << qasm3Parser::T__7)
      | (1ULL << qasm3Parser::T__8)
      | (1ULL << qasm3Parser::T__9)
      | (1ULL << qasm3Parser::T__10)
      | (1ULL << qasm3Parser::T__11)
      | (1ULL << qasm3Parser::T__12)
      | (1ULL << qasm3Parser::T__13)
      | (1ULL << qasm3Parser::T__14)
      | (1ULL << qasm3Parser::T__15)
      | (1ULL << qasm3Parser::T__16)
      | (1ULL << qasm3Parser::T__19)
      | (1ULL << qasm3Parser::T__20)
      | (1ULL << qasm3Parser::T__21)
      | (1ULL << qasm3Parser::T__22)
      | (1ULL << qasm3Parser::T__23)
      | (1ULL << qasm3Parser::T__24)
      | (1ULL << qasm3Parser::T__25)
      | (1ULL << qasm3Parser::T__27)
      | (1ULL << qasm3Parser::T__28)
      | (1ULL << qasm3Parser::T__29)
      | (1ULL << qasm3Parser::T__30)
      | (1ULL << qasm3Parser::T__31)
      | (1ULL << qasm3Parser::T__45)
      | (1ULL << qasm3Parser::T__46)
      | (1ULL << qasm3Parser::T__47)
      | (1ULL << qasm3Parser::T__48)
      | (1ULL << qasm3Parser::T__49)
      | (1ULL << qasm3Parser::T__50)
      | (1ULL << qasm3Parser::T__51)
      | (1ULL << qasm3Parser::T__52)
      | (1ULL << qasm3Parser::T__53)
      | (1ULL << qasm3Parser::T__54)
      | (1ULL << qasm3Parser::T__55))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (qasm3Parser::T__68 - 69))
      | (1ULL << (qasm3Parser::T__70 - 69))
      | (1ULL << (qasm3Parser::T__72 - 69))
      | (1ULL << (qasm3Parser::T__73 - 69))
      | (1ULL << (qasm3Parser::T__80 - 69))
      | (1ULL << (qasm3Parser::T__81 - 69))
      | (1ULL << (qasm3Parser::T__82 - 69))
      | (1ULL << (qasm3Parser::T__83 - 69))
      | (1ULL << (qasm3Parser::T__84 - 69))
      | (1ULL << (qasm3Parser::T__85 - 69))
      | (1ULL << (qasm3Parser::LPAREN - 69))
      | (1ULL << (qasm3Parser::MINUS - 69))
      | (1ULL << (qasm3Parser::ImagNumber - 69))
      | (1ULL << (qasm3Parser::Constant - 69))
      | (1ULL << (qasm3Parser::Integer - 69))
      | (1ULL << (qasm3Parser::Identifier - 69))
      | (1ULL << (qasm3Parser::RealNumber - 69))
      | (1ULL << (qasm3Parser::TimingLiteral - 69))
      | (1ULL << (qasm3Parser::StringLiteral - 69)))) != 0)) {
      setState(950);
      statement();
      setState(955);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(957);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::T__74) {
      setState(956);
      returnStatement();
    }
    setState(959);
    match(qasm3Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PragmaContext ------------------------------------------------------------------

qasm3Parser::PragmaContext::PragmaContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::PragmaContext::LBRACE() {
  return getToken(qasm3Parser::LBRACE, 0);
}

tree::TerminalNode* qasm3Parser::PragmaContext::RBRACE() {
  return getToken(qasm3Parser::RBRACE, 0);
}

std::vector<qasm3Parser::StatementContext *> qasm3Parser::PragmaContext::statement() {
  return getRuleContexts<qasm3Parser::StatementContext>();
}

qasm3Parser::StatementContext* qasm3Parser::PragmaContext::statement(size_t i) {
  return getRuleContext<qasm3Parser::StatementContext>(i);
}


size_t qasm3Parser::PragmaContext::getRuleIndex() const {
  return qasm3Parser::RulePragma;
}

void qasm3Parser::PragmaContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPragma(this);
}

void qasm3Parser::PragmaContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPragma(this);
}

qasm3Parser::PragmaContext* qasm3Parser::pragma() {
  PragmaContext *_localctx = _tracker.createInstance<PragmaContext>(_ctx, getState());
  enterRule(_localctx, 190, qasm3Parser::RulePragma);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(961);
    match(qasm3Parser::T__79);
    setState(962);
    match(qasm3Parser::LBRACE);
    setState(966);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & ((1ULL << qasm3Parser::T__6)
      | (1ULL << qasm3Parser::T__7)
      | (1ULL << qasm3Parser::T__8)
      | (1ULL << qasm3Parser::T__9)
      | (1ULL << qasm3Parser::T__10)
      | (1ULL << qasm3Parser::T__11)
      | (1ULL << qasm3Parser::T__12)
      | (1ULL << qasm3Parser::T__13)
      | (1ULL << qasm3Parser::T__14)
      | (1ULL << qasm3Parser::T__15)
      | (1ULL << qasm3Parser::T__16)
      | (1ULL << qasm3Parser::T__19)
      | (1ULL << qasm3Parser::T__20)
      | (1ULL << qasm3Parser::T__21)
      | (1ULL << qasm3Parser::T__22)
      | (1ULL << qasm3Parser::T__23)
      | (1ULL << qasm3Parser::T__24)
      | (1ULL << qasm3Parser::T__25)
      | (1ULL << qasm3Parser::T__27)
      | (1ULL << qasm3Parser::T__28)
      | (1ULL << qasm3Parser::T__29)
      | (1ULL << qasm3Parser::T__30)
      | (1ULL << qasm3Parser::T__31)
      | (1ULL << qasm3Parser::T__45)
      | (1ULL << qasm3Parser::T__46)
      | (1ULL << qasm3Parser::T__47)
      | (1ULL << qasm3Parser::T__48)
      | (1ULL << qasm3Parser::T__49)
      | (1ULL << qasm3Parser::T__50)
      | (1ULL << qasm3Parser::T__51)
      | (1ULL << qasm3Parser::T__52)
      | (1ULL << qasm3Parser::T__53)
      | (1ULL << qasm3Parser::T__54)
      | (1ULL << qasm3Parser::T__55))) != 0) || ((((_la - 69) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 69)) & ((1ULL << (qasm3Parser::T__68 - 69))
      | (1ULL << (qasm3Parser::T__70 - 69))
      | (1ULL << (qasm3Parser::T__72 - 69))
      | (1ULL << (qasm3Parser::T__73 - 69))
      | (1ULL << (qasm3Parser::T__80 - 69))
      | (1ULL << (qasm3Parser::T__81 - 69))
      | (1ULL << (qasm3Parser::T__82 - 69))
      | (1ULL << (qasm3Parser::T__83 - 69))
      | (1ULL << (qasm3Parser::T__84 - 69))
      | (1ULL << (qasm3Parser::T__85 - 69))
      | (1ULL << (qasm3Parser::LPAREN - 69))
      | (1ULL << (qasm3Parser::MINUS - 69))
      | (1ULL << (qasm3Parser::ImagNumber - 69))
      | (1ULL << (qasm3Parser::Constant - 69))
      | (1ULL << (qasm3Parser::Integer - 69))
      | (1ULL << (qasm3Parser::Identifier - 69))
      | (1ULL << (qasm3Parser::RealNumber - 69))
      | (1ULL << (qasm3Parser::TimingLiteral - 69))
      | (1ULL << (qasm3Parser::StringLiteral - 69)))) != 0)) {
      setState(963);
      statement();
      setState(968);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(969);
    match(qasm3Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TimingTypeContext ------------------------------------------------------------------

qasm3Parser::TimingTypeContext::TimingTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t qasm3Parser::TimingTypeContext::getRuleIndex() const {
  return qasm3Parser::RuleTimingType;
}

void qasm3Parser::TimingTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTimingType(this);
}

void qasm3Parser::TimingTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTimingType(this);
}

qasm3Parser::TimingTypeContext* qasm3Parser::timingType() {
  TimingTypeContext *_localctx = _tracker.createInstance<TimingTypeContext>(_ctx, getState());
  enterRule(_localctx, 192, qasm3Parser::RuleTimingType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(971);
    _la = _input->LA(1);
    if (!(_la == qasm3Parser::T__80

    || _la == qasm3Parser::T__81)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TimingBoxContext ------------------------------------------------------------------

qasm3Parser::TimingBoxContext::TimingBoxContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::QuantumBlockContext* qasm3Parser::TimingBoxContext::quantumBlock() {
  return getRuleContext<qasm3Parser::QuantumBlockContext>(0);
}

qasm3Parser::DesignatorContext* qasm3Parser::TimingBoxContext::designator() {
  return getRuleContext<qasm3Parser::DesignatorContext>(0);
}


size_t qasm3Parser::TimingBoxContext::getRuleIndex() const {
  return qasm3Parser::RuleTimingBox;
}

void qasm3Parser::TimingBoxContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTimingBox(this);
}

void qasm3Parser::TimingBoxContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTimingBox(this);
}

qasm3Parser::TimingBoxContext* qasm3Parser::timingBox() {
  TimingBoxContext *_localctx = _tracker.createInstance<TimingBoxContext>(_ctx, getState());
  enterRule(_localctx, 194, qasm3Parser::RuleTimingBox);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(973);
    match(qasm3Parser::T__82);
    setState(975);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::LBRACKET) {
      setState(974);
      designator();
    }
    setState(977);
    quantumBlock();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TimingIdentifierContext ------------------------------------------------------------------

qasm3Parser::TimingIdentifierContext::TimingIdentifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::TimingIdentifierContext::TimingLiteral() {
  return getToken(qasm3Parser::TimingLiteral, 0);
}

tree::TerminalNode* qasm3Parser::TimingIdentifierContext::LPAREN() {
  return getToken(qasm3Parser::LPAREN, 0);
}

tree::TerminalNode* qasm3Parser::TimingIdentifierContext::RPAREN() {
  return getToken(qasm3Parser::RPAREN, 0);
}

tree::TerminalNode* qasm3Parser::TimingIdentifierContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

qasm3Parser::QuantumBlockContext* qasm3Parser::TimingIdentifierContext::quantumBlock() {
  return getRuleContext<qasm3Parser::QuantumBlockContext>(0);
}


size_t qasm3Parser::TimingIdentifierContext::getRuleIndex() const {
  return qasm3Parser::RuleTimingIdentifier;
}

void qasm3Parser::TimingIdentifierContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTimingIdentifier(this);
}

void qasm3Parser::TimingIdentifierContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTimingIdentifier(this);
}

qasm3Parser::TimingIdentifierContext* qasm3Parser::timingIdentifier() {
  TimingIdentifierContext *_localctx = _tracker.createInstance<TimingIdentifierContext>(_ctx, getState());
  enterRule(_localctx, 196, qasm3Parser::RuleTimingIdentifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(987);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::TimingLiteral: {
        enterOuterAlt(_localctx, 1);
        setState(979);
        match(qasm3Parser::TimingLiteral);
        break;
      }

      case qasm3Parser::T__83: {
        enterOuterAlt(_localctx, 2);
        setState(980);
        match(qasm3Parser::T__83);
        setState(981);
        match(qasm3Parser::LPAREN);
        setState(984);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case qasm3Parser::Identifier: {
            setState(982);
            match(qasm3Parser::Identifier);
            break;
          }

          case qasm3Parser::LBRACE: {
            setState(983);
            quantumBlock();
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(986);
        match(qasm3Parser::RPAREN);
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

//----------------- TimingInstructionNameContext ------------------------------------------------------------------

qasm3Parser::TimingInstructionNameContext::TimingInstructionNameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t qasm3Parser::TimingInstructionNameContext::getRuleIndex() const {
  return qasm3Parser::RuleTimingInstructionName;
}

void qasm3Parser::TimingInstructionNameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTimingInstructionName(this);
}

void qasm3Parser::TimingInstructionNameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTimingInstructionName(this);
}

qasm3Parser::TimingInstructionNameContext* qasm3Parser::timingInstructionName() {
  TimingInstructionNameContext *_localctx = _tracker.createInstance<TimingInstructionNameContext>(_ctx, getState());
  enterRule(_localctx, 198, qasm3Parser::RuleTimingInstructionName);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(989);
    _la = _input->LA(1);
    if (!(_la == qasm3Parser::T__84

    || _la == qasm3Parser::T__85)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TimingInstructionContext ------------------------------------------------------------------

qasm3Parser::TimingInstructionContext::TimingInstructionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::TimingInstructionNameContext* qasm3Parser::TimingInstructionContext::timingInstructionName() {
  return getRuleContext<qasm3Parser::TimingInstructionNameContext>(0);
}

qasm3Parser::DesignatorContext* qasm3Parser::TimingInstructionContext::designator() {
  return getRuleContext<qasm3Parser::DesignatorContext>(0);
}

qasm3Parser::IndexIdentifierListContext* qasm3Parser::TimingInstructionContext::indexIdentifierList() {
  return getRuleContext<qasm3Parser::IndexIdentifierListContext>(0);
}

tree::TerminalNode* qasm3Parser::TimingInstructionContext::LPAREN() {
  return getToken(qasm3Parser::LPAREN, 0);
}

tree::TerminalNode* qasm3Parser::TimingInstructionContext::RPAREN() {
  return getToken(qasm3Parser::RPAREN, 0);
}

qasm3Parser::ExpressionListContext* qasm3Parser::TimingInstructionContext::expressionList() {
  return getRuleContext<qasm3Parser::ExpressionListContext>(0);
}


size_t qasm3Parser::TimingInstructionContext::getRuleIndex() const {
  return qasm3Parser::RuleTimingInstruction;
}

void qasm3Parser::TimingInstructionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTimingInstruction(this);
}

void qasm3Parser::TimingInstructionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTimingInstruction(this);
}

qasm3Parser::TimingInstructionContext* qasm3Parser::timingInstruction() {
  TimingInstructionContext *_localctx = _tracker.createInstance<TimingInstructionContext>(_ctx, getState());
  enterRule(_localctx, 200, qasm3Parser::RuleTimingInstruction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(991);
    timingInstructionName();
    setState(997);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::LPAREN) {
      setState(992);
      match(qasm3Parser::LPAREN);
      setState(994);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << qasm3Parser::T__6)
        | (1ULL << qasm3Parser::T__7)
        | (1ULL << qasm3Parser::T__8)
        | (1ULL << qasm3Parser::T__9)
        | (1ULL << qasm3Parser::T__10)
        | (1ULL << qasm3Parser::T__11)
        | (1ULL << qasm3Parser::T__12)
        | (1ULL << qasm3Parser::T__13)
        | (1ULL << qasm3Parser::T__14)
        | (1ULL << qasm3Parser::T__30)
        | (1ULL << qasm3Parser::T__31)
        | (1ULL << qasm3Parser::T__45)
        | (1ULL << qasm3Parser::T__46)
        | (1ULL << qasm3Parser::T__47)
        | (1ULL << qasm3Parser::T__48)
        | (1ULL << qasm3Parser::T__49)
        | (1ULL << qasm3Parser::T__50)
        | (1ULL << qasm3Parser::T__51)
        | (1ULL << qasm3Parser::T__52)
        | (1ULL << qasm3Parser::T__53)
        | (1ULL << qasm3Parser::T__54)
        | (1ULL << qasm3Parser::T__55))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 81)) & ((1ULL << (qasm3Parser::T__80 - 81))
        | (1ULL << (qasm3Parser::T__81 - 81))
        | (1ULL << (qasm3Parser::T__83 - 81))
        | (1ULL << (qasm3Parser::LPAREN - 81))
        | (1ULL << (qasm3Parser::MINUS - 81))
        | (1ULL << (qasm3Parser::ImagNumber - 81))
        | (1ULL << (qasm3Parser::Constant - 81))
        | (1ULL << (qasm3Parser::Integer - 81))
        | (1ULL << (qasm3Parser::Identifier - 81))
        | (1ULL << (qasm3Parser::RealNumber - 81))
        | (1ULL << (qasm3Parser::TimingLiteral - 81))
        | (1ULL << (qasm3Parser::StringLiteral - 81)))) != 0)) {
        setState(993);
        expressionList();
      }
      setState(996);
      match(qasm3Parser::RPAREN);
    }
    setState(999);
    designator();
    setState(1000);
    indexIdentifierList();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TimingStatementContext ------------------------------------------------------------------

qasm3Parser::TimingStatementContext::TimingStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::TimingInstructionContext* qasm3Parser::TimingStatementContext::timingInstruction() {
  return getRuleContext<qasm3Parser::TimingInstructionContext>(0);
}

tree::TerminalNode* qasm3Parser::TimingStatementContext::SEMICOLON() {
  return getToken(qasm3Parser::SEMICOLON, 0);
}

qasm3Parser::TimingBoxContext* qasm3Parser::TimingStatementContext::timingBox() {
  return getRuleContext<qasm3Parser::TimingBoxContext>(0);
}


size_t qasm3Parser::TimingStatementContext::getRuleIndex() const {
  return qasm3Parser::RuleTimingStatement;
}

void qasm3Parser::TimingStatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTimingStatement(this);
}

void qasm3Parser::TimingStatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTimingStatement(this);
}

qasm3Parser::TimingStatementContext* qasm3Parser::timingStatement() {
  TimingStatementContext *_localctx = _tracker.createInstance<TimingStatementContext>(_ctx, getState());
  enterRule(_localctx, 202, qasm3Parser::RuleTimingStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1006);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__84:
      case qasm3Parser::T__85: {
        enterOuterAlt(_localctx, 1);
        setState(1002);
        timingInstruction();
        setState(1003);
        match(qasm3Parser::SEMICOLON);
        break;
      }

      case qasm3Parser::T__82: {
        enterOuterAlt(_localctx, 2);
        setState(1005);
        timingBox();
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

//----------------- CalibrationContext ------------------------------------------------------------------

qasm3Parser::CalibrationContext::CalibrationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::CalibrationGrammarDeclarationContext* qasm3Parser::CalibrationContext::calibrationGrammarDeclaration() {
  return getRuleContext<qasm3Parser::CalibrationGrammarDeclarationContext>(0);
}

qasm3Parser::CalibrationDefinitionContext* qasm3Parser::CalibrationContext::calibrationDefinition() {
  return getRuleContext<qasm3Parser::CalibrationDefinitionContext>(0);
}


size_t qasm3Parser::CalibrationContext::getRuleIndex() const {
  return qasm3Parser::RuleCalibration;
}

void qasm3Parser::CalibrationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCalibration(this);
}

void qasm3Parser::CalibrationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCalibration(this);
}

qasm3Parser::CalibrationContext* qasm3Parser::calibration() {
  CalibrationContext *_localctx = _tracker.createInstance<CalibrationContext>(_ctx, getState());
  enterRule(_localctx, 204, qasm3Parser::RuleCalibration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1010);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case qasm3Parser::T__86: {
        enterOuterAlt(_localctx, 1);
        setState(1008);
        calibrationGrammarDeclaration();
        break;
      }

      case qasm3Parser::T__87: {
        enterOuterAlt(_localctx, 2);
        setState(1009);
        calibrationDefinition();
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

//----------------- CalibrationGrammarDeclarationContext ------------------------------------------------------------------

qasm3Parser::CalibrationGrammarDeclarationContext::CalibrationGrammarDeclarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::CalibrationGrammarContext* qasm3Parser::CalibrationGrammarDeclarationContext::calibrationGrammar() {
  return getRuleContext<qasm3Parser::CalibrationGrammarContext>(0);
}

tree::TerminalNode* qasm3Parser::CalibrationGrammarDeclarationContext::SEMICOLON() {
  return getToken(qasm3Parser::SEMICOLON, 0);
}


size_t qasm3Parser::CalibrationGrammarDeclarationContext::getRuleIndex() const {
  return qasm3Parser::RuleCalibrationGrammarDeclaration;
}

void qasm3Parser::CalibrationGrammarDeclarationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCalibrationGrammarDeclaration(this);
}

void qasm3Parser::CalibrationGrammarDeclarationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCalibrationGrammarDeclaration(this);
}

qasm3Parser::CalibrationGrammarDeclarationContext* qasm3Parser::calibrationGrammarDeclaration() {
  CalibrationGrammarDeclarationContext *_localctx = _tracker.createInstance<CalibrationGrammarDeclarationContext>(_ctx, getState());
  enterRule(_localctx, 206, qasm3Parser::RuleCalibrationGrammarDeclaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1012);
    match(qasm3Parser::T__86);
    setState(1013);
    calibrationGrammar();
    setState(1014);
    match(qasm3Parser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CalibrationDefinitionContext ------------------------------------------------------------------

qasm3Parser::CalibrationDefinitionContext::CalibrationDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::CalibrationDefinitionContext::Identifier() {
  return getToken(qasm3Parser::Identifier, 0);
}

qasm3Parser::IdentifierListContext* qasm3Parser::CalibrationDefinitionContext::identifierList() {
  return getRuleContext<qasm3Parser::IdentifierListContext>(0);
}

tree::TerminalNode* qasm3Parser::CalibrationDefinitionContext::LBRACE() {
  return getToken(qasm3Parser::LBRACE, 0);
}

tree::TerminalNode* qasm3Parser::CalibrationDefinitionContext::RBRACE() {
  return getToken(qasm3Parser::RBRACE, 0);
}

tree::TerminalNode* qasm3Parser::CalibrationDefinitionContext::LPAREN() {
  return getToken(qasm3Parser::LPAREN, 0);
}

tree::TerminalNode* qasm3Parser::CalibrationDefinitionContext::RPAREN() {
  return getToken(qasm3Parser::RPAREN, 0);
}

qasm3Parser::ReturnSignatureContext* qasm3Parser::CalibrationDefinitionContext::returnSignature() {
  return getRuleContext<qasm3Parser::ReturnSignatureContext>(0);
}

qasm3Parser::CalibrationArgumentListContext* qasm3Parser::CalibrationDefinitionContext::calibrationArgumentList() {
  return getRuleContext<qasm3Parser::CalibrationArgumentListContext>(0);
}


size_t qasm3Parser::CalibrationDefinitionContext::getRuleIndex() const {
  return qasm3Parser::RuleCalibrationDefinition;
}

void qasm3Parser::CalibrationDefinitionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCalibrationDefinition(this);
}

void qasm3Parser::CalibrationDefinitionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCalibrationDefinition(this);
}

qasm3Parser::CalibrationDefinitionContext* qasm3Parser::calibrationDefinition() {
  CalibrationDefinitionContext *_localctx = _tracker.createInstance<CalibrationDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 208, qasm3Parser::RuleCalibrationDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(1016);
    match(qasm3Parser::T__87);
    setState(1017);
    match(qasm3Parser::Identifier);
    setState(1023);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::LPAREN) {
      setState(1018);
      match(qasm3Parser::LPAREN);
      setState(1020);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if ((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & ((1ULL << qasm3Parser::T__6)
        | (1ULL << qasm3Parser::T__7)
        | (1ULL << qasm3Parser::T__8)
        | (1ULL << qasm3Parser::T__9)
        | (1ULL << qasm3Parser::T__10)
        | (1ULL << qasm3Parser::T__11)
        | (1ULL << qasm3Parser::T__12)
        | (1ULL << qasm3Parser::T__13)
        | (1ULL << qasm3Parser::T__14)
        | (1ULL << qasm3Parser::T__30)
        | (1ULL << qasm3Parser::T__31)
        | (1ULL << qasm3Parser::T__45)
        | (1ULL << qasm3Parser::T__46)
        | (1ULL << qasm3Parser::T__47)
        | (1ULL << qasm3Parser::T__48)
        | (1ULL << qasm3Parser::T__49)
        | (1ULL << qasm3Parser::T__50)
        | (1ULL << qasm3Parser::T__51)
        | (1ULL << qasm3Parser::T__52)
        | (1ULL << qasm3Parser::T__53)
        | (1ULL << qasm3Parser::T__54)
        | (1ULL << qasm3Parser::T__55))) != 0) || ((((_la - 81) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 81)) & ((1ULL << (qasm3Parser::T__80 - 81))
        | (1ULL << (qasm3Parser::T__81 - 81))
        | (1ULL << (qasm3Parser::T__83 - 81))
        | (1ULL << (qasm3Parser::LPAREN - 81))
        | (1ULL << (qasm3Parser::MINUS - 81))
        | (1ULL << (qasm3Parser::ImagNumber - 81))
        | (1ULL << (qasm3Parser::Constant - 81))
        | (1ULL << (qasm3Parser::Integer - 81))
        | (1ULL << (qasm3Parser::Identifier - 81))
        | (1ULL << (qasm3Parser::RealNumber - 81))
        | (1ULL << (qasm3Parser::TimingLiteral - 81))
        | (1ULL << (qasm3Parser::StringLiteral - 81)))) != 0)) {
        setState(1019);
        calibrationArgumentList();
      }
      setState(1022);
      match(qasm3Parser::RPAREN);
    }
    setState(1025);
    identifierList();
    setState(1027);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == qasm3Parser::ARROW) {
      setState(1026);
      returnSignature();
    }
    setState(1029);
    match(qasm3Parser::LBRACE);
    setState(1033);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx);
    while (alt != 1 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1 + 1) {
        setState(1030);
        matchWildcard(); 
      }
      setState(1035);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 107, _ctx);
    }
    setState(1036);
    match(qasm3Parser::RBRACE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CalibrationGrammarContext ------------------------------------------------------------------

qasm3Parser::CalibrationGrammarContext::CalibrationGrammarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* qasm3Parser::CalibrationGrammarContext::StringLiteral() {
  return getToken(qasm3Parser::StringLiteral, 0);
}


size_t qasm3Parser::CalibrationGrammarContext::getRuleIndex() const {
  return qasm3Parser::RuleCalibrationGrammar;
}

void qasm3Parser::CalibrationGrammarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCalibrationGrammar(this);
}

void qasm3Parser::CalibrationGrammarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCalibrationGrammar(this);
}

qasm3Parser::CalibrationGrammarContext* qasm3Parser::calibrationGrammar() {
  CalibrationGrammarContext *_localctx = _tracker.createInstance<CalibrationGrammarContext>(_ctx, getState());
  enterRule(_localctx, 210, qasm3Parser::RuleCalibrationGrammar);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(1038);
    _la = _input->LA(1);
    if (!(_la == qasm3Parser::T__88

    || _la == qasm3Parser::StringLiteral)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CalibrationArgumentListContext ------------------------------------------------------------------

qasm3Parser::CalibrationArgumentListContext::CalibrationArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

qasm3Parser::ClassicalArgumentListContext* qasm3Parser::CalibrationArgumentListContext::classicalArgumentList() {
  return getRuleContext<qasm3Parser::ClassicalArgumentListContext>(0);
}

qasm3Parser::ExpressionListContext* qasm3Parser::CalibrationArgumentListContext::expressionList() {
  return getRuleContext<qasm3Parser::ExpressionListContext>(0);
}


size_t qasm3Parser::CalibrationArgumentListContext::getRuleIndex() const {
  return qasm3Parser::RuleCalibrationArgumentList;
}

void qasm3Parser::CalibrationArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCalibrationArgumentList(this);
}

void qasm3Parser::CalibrationArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<qasm3Listener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCalibrationArgumentList(this);
}

qasm3Parser::CalibrationArgumentListContext* qasm3Parser::calibrationArgumentList() {
  CalibrationArgumentListContext *_localctx = _tracker.createInstance<CalibrationArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 212, qasm3Parser::RuleCalibrationArgumentList);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(1042);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 108, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(1040);
      classicalArgumentList();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(1041);
      expressionList();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool qasm3Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 38: return indexIdentifierSempred(dynamic_cast<IndexIdentifierContext *>(context), predicateIndex);
    case 63: return expressionSempred(dynamic_cast<ExpressionContext *>(context), predicateIndex);
    case 64: return logicalAndExpressionSempred(dynamic_cast<LogicalAndExpressionContext *>(context), predicateIndex);
    case 65: return bitOrExpressionSempred(dynamic_cast<BitOrExpressionContext *>(context), predicateIndex);
    case 66: return xOrExpressionSempred(dynamic_cast<XOrExpressionContext *>(context), predicateIndex);
    case 67: return bitAndExpressionSempred(dynamic_cast<BitAndExpressionContext *>(context), predicateIndex);
    case 68: return equalityExpressionSempred(dynamic_cast<EqualityExpressionContext *>(context), predicateIndex);
    case 69: return comparisonExpressionSempred(dynamic_cast<ComparisonExpressionContext *>(context), predicateIndex);
    case 70: return bitShiftExpressionSempred(dynamic_cast<BitShiftExpressionContext *>(context), predicateIndex);
    case 71: return additiveExpressionSempred(dynamic_cast<AdditiveExpressionContext *>(context), predicateIndex);
    case 72: return multiplicativeExpressionSempred(dynamic_cast<MultiplicativeExpressionContext *>(context), predicateIndex);
    case 75: return expressionTerminatorSempred(dynamic_cast<ExpressionTerminatorContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool qasm3Parser::indexIdentifierSempred(IndexIdentifierContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool qasm3Parser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool qasm3Parser::logicalAndExpressionSempred(LogicalAndExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool qasm3Parser::bitOrExpressionSempred(BitOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool qasm3Parser::xOrExpressionSempred(XOrExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool qasm3Parser::bitAndExpressionSempred(BitAndExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool qasm3Parser::equalityExpressionSempred(EqualityExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool qasm3Parser::comparisonExpressionSempred(ComparisonExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool qasm3Parser::bitShiftExpressionSempred(BitShiftExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool qasm3Parser::additiveExpressionSempred(AdditiveExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 9: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool qasm3Parser::multiplicativeExpressionSempred(MultiplicativeExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool qasm3Parser::expressionTerminatorSempred(ExpressionTerminatorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 11: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

// Static vars and initialization.
std::vector<dfa::DFA> qasm3Parser::_decisionToDFA;
atn::PredictionContextCache qasm3Parser::_sharedContextCache;

// We own the ATN which in turn owns the ATN states.
atn::ATN qasm3Parser::_atn;
std::vector<uint16_t> qasm3Parser::_serializedATN;

std::vector<std::string> qasm3Parser::_ruleNames = {
  "program", "header", "version", "include", "ioIdentifier", "io", "globalStatement", 
  "statement", "quantumDeclarationStatement", "classicalDeclarationStatement", 
  "classicalAssignment", "assignmentStatement", "returnSignature", "designator", 
  "doubleDesignator", "identifierList", "quantumDeclaration", "quantumArgument", 
  "quantumArgumentList", "bitType", "singleDesignatorType", "doubleDesignatorType", 
  "noDesignatorType", "classicalType", "numericType", "constantDeclaration", 
  "singleDesignatorDeclaration", "doubleDesignatorDeclaration", "noDesignatorDeclaration", 
  "bitDeclaration", "complexDeclaration", "classicalDeclaration", "classicalTypeList", 
  "classicalArgument", "classicalArgumentList", "anyTypeArgument", "anyTypeArgumentList", 
  "aliasStatement", "indexIdentifier", "indexIdentifierList", "rangeDefinition", 
  "quantumGateDefinition", "quantumGateSignature", "quantumGateName", "quantumBlock", 
  "quantumLoop", "quantumLoopBlock", "quantumStatement", "quantumInstruction", 
  "quantumPhase", "quantumReset", "quantumMeasurement", "quantumMeasurementAssignment", 
  "quantumBarrier", "quantumGateModifier", "powModifier", "ctrlModifier", 
  "quantumGateCall", "unaryOperator", "comparisonOperator", "equalityOperator", 
  "logicalOperator", "expressionStatement", "expression", "logicalAndExpression", 
  "bitOrExpression", "xOrExpression", "bitAndExpression", "equalityExpression", 
  "comparisonExpression", "bitShiftExpression", "additiveExpression", "multiplicativeExpression", 
  "unaryExpression", "powerExpression", "expressionTerminator", "booleanLiteral", 
  "builtInCall", "builtInMath", "castOperator", "expressionList", "equalsExpression", 
  "assignmentOperator", "setDeclaration", "programBlock", "branchingStatement", 
  "loopSignature", "loopStatement", "endStatement", "returnStatement", "controlDirective", 
  "externDeclaration", "externOrSubroutineCall", "subroutineDefinition", 
  "subroutineBlock", "pragma", "timingType", "timingBox", "timingIdentifier", 
  "timingInstructionName", "timingInstruction", "timingStatement", "calibration", 
  "calibrationGrammarDeclaration", "calibrationDefinition", "calibrationGrammar", 
  "calibrationArgumentList"
};

std::vector<std::string> qasm3Parser::_literalNames = {
  "", "'OPENQASM'", "'include'", "'input'", "'output'", "'qreg'", "'qubit'", 
  "'bit'", "'creg'", "'int'", "'uint'", "'float'", "'angle'", "'fixed'", 
  "'bool'", "'complex'", "'const'", "'let'", "'||'", "'gate'", "'U'", "'CX'", 
  "'gphase'", "'reset'", "'measure'", "'barrier'", "'inv'", "'@'", "'pow'", 
  "'ctrl'", "'negctrl'", "'~'", "'!'", "'>'", "'<'", "'>='", "'<='", "'=='", 
  "'!='", "'&&'", "'|'", "'^'", "'&'", "'<<'", "'>>'", "'**'", "'true'", 
  "'false'", "'sin'", "'cos'", "'tan'", "'exp'", "'ln'", "'sqrt'", "'rotl'", 
  "'rotr'", "'popcount'", "'+='", "'-='", "'*='", "'/='", "'&='", "'|='", 
  "'~='", "'^='", "'<<='", "'>>='", "'%='", "'**='", "'if'", "'else'", "'for'", 
  "'in'", "'while'", "'end'", "'return'", "'break'", "'continue'", "'extern'", 
  "'def'", "'#pragma'", "'duration'", "'stretch'", "'box'", "'durationof'", 
  "'delay'", "'rotary'", "'defcalgrammar'", "'defcal'", "'\"openpulse\"'", 
  "'['", "']'", "'{'", "'}'", "'('", "')'", "':'", "';'", "'.'", "','", 
  "'='", "'->'", "'+'", "'-'", "'*'", "'/'", "'%'", "'im'"
};

std::vector<std::string> qasm3Parser::_symbolicNames = {
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
  "LBRACKET", "RBRACKET", "LBRACE", "RBRACE", "LPAREN", "RPAREN", "COLON", 
  "SEMICOLON", "DOT", "COMMA", "EQUALS", "ARROW", "PLUS", "MINUS", "MUL", 
  "DIV", "MOD", "IMAG", "ImagNumber", "Constant", "Whitespace", "Newline", 
  "Integer", "Identifier", "RealNumber", "TimingLiteral", "StringLiteral", 
  "LineComment", "BlockComment"
};

dfa::Vocabulary qasm3Parser::_vocabulary(_literalNames, _symbolicNames);

std::vector<std::string> qasm3Parser::_tokenNames;

qasm3Parser::Initializer::Initializer() {
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

  static const uint16_t serializedATNSegment0[] = {
    0x3, 0x608b, 0xa72a, 0x8133, 0xb9ed, 0x417c, 0x3be7, 0x7786, 0x5964, 
       0x3, 0x78, 0x417, 0x4, 0x2, 0x9, 0x2, 0x4, 0x3, 0x9, 0x3, 0x4, 0x4, 
       0x9, 0x4, 0x4, 0x5, 0x9, 0x5, 0x4, 0x6, 0x9, 0x6, 0x4, 0x7, 0x9, 
       0x7, 0x4, 0x8, 0x9, 0x8, 0x4, 0x9, 0x9, 0x9, 0x4, 0xa, 0x9, 0xa, 
       0x4, 0xb, 0x9, 0xb, 0x4, 0xc, 0x9, 0xc, 0x4, 0xd, 0x9, 0xd, 0x4, 
       0xe, 0x9, 0xe, 0x4, 0xf, 0x9, 0xf, 0x4, 0x10, 0x9, 0x10, 0x4, 0x11, 
       0x9, 0x11, 0x4, 0x12, 0x9, 0x12, 0x4, 0x13, 0x9, 0x13, 0x4, 0x14, 
       0x9, 0x14, 0x4, 0x15, 0x9, 0x15, 0x4, 0x16, 0x9, 0x16, 0x4, 0x17, 
       0x9, 0x17, 0x4, 0x18, 0x9, 0x18, 0x4, 0x19, 0x9, 0x19, 0x4, 0x1a, 
       0x9, 0x1a, 0x4, 0x1b, 0x9, 0x1b, 0x4, 0x1c, 0x9, 0x1c, 0x4, 0x1d, 
       0x9, 0x1d, 0x4, 0x1e, 0x9, 0x1e, 0x4, 0x1f, 0x9, 0x1f, 0x4, 0x20, 
       0x9, 0x20, 0x4, 0x21, 0x9, 0x21, 0x4, 0x22, 0x9, 0x22, 0x4, 0x23, 
       0x9, 0x23, 0x4, 0x24, 0x9, 0x24, 0x4, 0x25, 0x9, 0x25, 0x4, 0x26, 
       0x9, 0x26, 0x4, 0x27, 0x9, 0x27, 0x4, 0x28, 0x9, 0x28, 0x4, 0x29, 
       0x9, 0x29, 0x4, 0x2a, 0x9, 0x2a, 0x4, 0x2b, 0x9, 0x2b, 0x4, 0x2c, 
       0x9, 0x2c, 0x4, 0x2d, 0x9, 0x2d, 0x4, 0x2e, 0x9, 0x2e, 0x4, 0x2f, 
       0x9, 0x2f, 0x4, 0x30, 0x9, 0x30, 0x4, 0x31, 0x9, 0x31, 0x4, 0x32, 
       0x9, 0x32, 0x4, 0x33, 0x9, 0x33, 0x4, 0x34, 0x9, 0x34, 0x4, 0x35, 
       0x9, 0x35, 0x4, 0x36, 0x9, 0x36, 0x4, 0x37, 0x9, 0x37, 0x4, 0x38, 
       0x9, 0x38, 0x4, 0x39, 0x9, 0x39, 0x4, 0x3a, 0x9, 0x3a, 0x4, 0x3b, 
       0x9, 0x3b, 0x4, 0x3c, 0x9, 0x3c, 0x4, 0x3d, 0x9, 0x3d, 0x4, 0x3e, 
       0x9, 0x3e, 0x4, 0x3f, 0x9, 0x3f, 0x4, 0x40, 0x9, 0x40, 0x4, 0x41, 
       0x9, 0x41, 0x4, 0x42, 0x9, 0x42, 0x4, 0x43, 0x9, 0x43, 0x4, 0x44, 
       0x9, 0x44, 0x4, 0x45, 0x9, 0x45, 0x4, 0x46, 0x9, 0x46, 0x4, 0x47, 
       0x9, 0x47, 0x4, 0x48, 0x9, 0x48, 0x4, 0x49, 0x9, 0x49, 0x4, 0x4a, 
       0x9, 0x4a, 0x4, 0x4b, 0x9, 0x4b, 0x4, 0x4c, 0x9, 0x4c, 0x4, 0x4d, 
       0x9, 0x4d, 0x4, 0x4e, 0x9, 0x4e, 0x4, 0x4f, 0x9, 0x4f, 0x4, 0x50, 
       0x9, 0x50, 0x4, 0x51, 0x9, 0x51, 0x4, 0x52, 0x9, 0x52, 0x4, 0x53, 
       0x9, 0x53, 0x4, 0x54, 0x9, 0x54, 0x4, 0x55, 0x9, 0x55, 0x4, 0x56, 
       0x9, 0x56, 0x4, 0x57, 0x9, 0x57, 0x4, 0x58, 0x9, 0x58, 0x4, 0x59, 
       0x9, 0x59, 0x4, 0x5a, 0x9, 0x5a, 0x4, 0x5b, 0x9, 0x5b, 0x4, 0x5c, 
       0x9, 0x5c, 0x4, 0x5d, 0x9, 0x5d, 0x4, 0x5e, 0x9, 0x5e, 0x4, 0x5f, 
       0x9, 0x5f, 0x4, 0x60, 0x9, 0x60, 0x4, 0x61, 0x9, 0x61, 0x4, 0x62, 
       0x9, 0x62, 0x4, 0x63, 0x9, 0x63, 0x4, 0x64, 0x9, 0x64, 0x4, 0x65, 
       0x9, 0x65, 0x4, 0x66, 0x9, 0x66, 0x4, 0x67, 0x9, 0x67, 0x4, 0x68, 
       0x9, 0x68, 0x4, 0x69, 0x9, 0x69, 0x4, 0x6a, 0x9, 0x6a, 0x4, 0x6b, 
       0x9, 0x6b, 0x4, 0x6c, 0x9, 0x6c, 0x3, 0x2, 0x3, 0x2, 0x3, 0x2, 0x7, 
       0x2, 0xdc, 0xa, 0x2, 0xc, 0x2, 0xe, 0x2, 0xdf, 0xb, 0x2, 0x3, 0x3, 
       0x5, 0x3, 0xe2, 0xa, 0x3, 0x3, 0x3, 0x7, 0x3, 0xe5, 0xa, 0x3, 0xc, 
       0x3, 0xe, 0x3, 0xe8, 0xb, 0x3, 0x3, 0x3, 0x7, 0x3, 0xeb, 0xa, 0x3, 
       0xc, 0x3, 0xe, 0x3, 0xee, 0xb, 0x3, 0x3, 0x4, 0x3, 0x4, 0x3, 0x4, 
       0x3, 0x4, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x5, 0x3, 0x6, 0x3, 
       0x6, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x7, 0x3, 0x8, 
       0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x3, 0x8, 0x5, 0x8, 0x105, 
       0xa, 0x8, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 0x9, 0x3, 
       0x9, 0x3, 0x9, 0x3, 0x9, 0x5, 0x9, 0x10f, 0xa, 0x9, 0x3, 0xa, 0x3, 
       0xa, 0x3, 0xa, 0x3, 0xb, 0x3, 0xb, 0x5, 0xb, 0x116, 0xa, 0xb, 0x3, 
       0xb, 0x3, 0xb, 0x3, 0xc, 0x3, 0xc, 0x5, 0xc, 0x11c, 0xa, 0xc, 0x3, 
       0xc, 0x3, 0xc, 0x3, 0xc, 0x3, 0xd, 0x3, 0xd, 0x5, 0xd, 0x123, 0xa, 
       0xd, 0x3, 0xd, 0x3, 0xd, 0x3, 0xe, 0x3, 0xe, 0x3, 0xe, 0x3, 0xf, 
       0x3, 0xf, 0x3, 0xf, 0x3, 0xf, 0x3, 0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 
       0x10, 0x3, 0x10, 0x3, 0x10, 0x3, 0x11, 0x3, 0x11, 0x7, 0x11, 0x136, 
       0xa, 0x11, 0xc, 0x11, 0xe, 0x11, 0x139, 0xb, 0x11, 0x3, 0x11, 0x3, 
       0x11, 0x3, 0x12, 0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x140, 0xa, 0x12, 
       0x3, 0x12, 0x3, 0x12, 0x5, 0x12, 0x144, 0xa, 0x12, 0x3, 0x12, 0x5, 
       0x12, 0x147, 0xa, 0x12, 0x3, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 
       0x14c, 0xa, 0x13, 0x3, 0x13, 0x3, 0x13, 0x5, 0x13, 0x150, 0xa, 0x13, 
       0x3, 0x13, 0x5, 0x13, 0x153, 0xa, 0x13, 0x3, 0x14, 0x3, 0x14, 0x3, 
       0x14, 0x7, 0x14, 0x158, 0xa, 0x14, 0xc, 0x14, 0xe, 0x14, 0x15b, 0xb, 
       0x14, 0x3, 0x15, 0x3, 0x15, 0x3, 0x16, 0x3, 0x16, 0x3, 0x17, 0x3, 
       0x17, 0x3, 0x18, 0x3, 0x18, 0x5, 0x18, 0x165, 0xa, 0x18, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 
       0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x170, 0xa, 0x19, 0x3, 0x19, 0x3, 
       0x19, 0x3, 0x19, 0x3, 0x19, 0x3, 0x19, 0x5, 0x19, 0x177, 0xa, 0x19, 
       0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 0x3, 0x1a, 
       0x5, 0x1a, 0x17f, 0xa, 0x1a, 0x3, 0x1b, 0x3, 0x1b, 0x3, 0x1b, 0x3, 
       0x1b, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x3, 0x1c, 0x5, 0x1c, 0x189, 
       0xa, 0x1c, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x3, 0x1d, 0x5, 0x1d, 
       0x18f, 0xa, 0x1d, 0x3, 0x1e, 0x3, 0x1e, 0x3, 0x1e, 0x5, 0x1e, 0x194, 
       0xa, 0x1e, 0x3, 0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x199, 0xa, 
       0x1f, 0x3, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x19d, 0xa, 0x1f, 0x3, 0x1f, 
       0x5, 0x1f, 0x1a0, 0xa, 0x1f, 0x3, 0x1f, 0x5, 0x1f, 0x1a3, 0xa, 0x1f, 
       0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 0x3, 0x20, 
       0x5, 0x20, 0x1ab, 0xa, 0x20, 0x3, 0x21, 0x3, 0x21, 0x3, 0x21, 0x3, 
       0x21, 0x3, 0x21, 0x5, 0x21, 0x1b2, 0xa, 0x21, 0x3, 0x22, 0x3, 0x22, 
       0x3, 0x22, 0x7, 0x22, 0x1b7, 0xa, 0x22, 0xc, 0x22, 0xe, 0x22, 0x1ba, 
       0xb, 0x22, 0x3, 0x22, 0x3, 0x22, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 
       0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x1c5, 0xa, 
       0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 
       0x23, 0x1cc, 0xa, 0x23, 0x3, 0x23, 0x3, 0x23, 0x5, 0x23, 0x1d0, 0xa, 
       0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 0x23, 0x3, 
       0x23, 0x3, 0x23, 0x5, 0x23, 0x1d9, 0xa, 0x23, 0x3, 0x24, 0x3, 0x24, 
       0x3, 0x24, 0x7, 0x24, 0x1de, 0xa, 0x24, 0xc, 0x24, 0xe, 0x24, 0x1e1, 
       0xb, 0x24, 0x3, 0x25, 0x3, 0x25, 0x5, 0x25, 0x1e5, 0xa, 0x25, 0x3, 
       0x26, 0x3, 0x26, 0x3, 0x26, 0x7, 0x26, 0x1ea, 0xa, 0x26, 0xc, 0x26, 
       0xe, 0x26, 0x1ed, 0xb, 0x26, 0x3, 0x26, 0x3, 0x26, 0x3, 0x27, 0x3, 
       0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x27, 0x3, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 0x28, 0x3, 
       0x28, 0x5, 0x28, 0x1ff, 0xa, 0x28, 0x5, 0x28, 0x201, 0xa, 0x28, 0x3, 
       0x28, 0x3, 0x28, 0x3, 0x28, 0x7, 0x28, 0x206, 0xa, 0x28, 0xc, 0x28, 
       0xe, 0x28, 0x209, 0xb, 0x28, 0x3, 0x29, 0x3, 0x29, 0x3, 0x29, 0x7, 
       0x29, 0x20e, 0xa, 0x29, 0xc, 0x29, 0xe, 0x29, 0x211, 0xb, 0x29, 0x3, 
       0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x215, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 
       0x5, 0x2a, 0x219, 0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x5, 0x2a, 0x21d, 
       0xa, 0x2a, 0x3, 0x2a, 0x3, 0x2a, 0x3, 0x2b, 0x3, 0x2b, 0x3, 0x2b, 
       0x3, 0x2b, 0x3, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x228, 0xa, 
       0x2c, 0x3, 0x2c, 0x5, 0x2c, 0x22b, 0xa, 0x2c, 0x3, 0x2c, 0x3, 0x2c, 
       0x3, 0x2d, 0x3, 0x2d, 0x3, 0x2e, 0x3, 0x2e, 0x3, 0x2e, 0x7, 0x2e, 
       0x234, 0xa, 0x2e, 0xc, 0x2e, 0xe, 0x2e, 0x237, 0xb, 0x2e, 0x3, 0x2e, 
       0x3, 0x2e, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x2f, 0x3, 0x30, 0x3, 0x30, 
       0x3, 0x30, 0x7, 0x30, 0x241, 0xa, 0x30, 0xc, 0x30, 0xe, 0x30, 0x244, 
       0xb, 0x30, 0x3, 0x30, 0x5, 0x30, 0x247, 0xa, 0x30, 0x3, 0x31, 0x3, 
       0x31, 0x3, 0x31, 0x3, 0x31, 0x5, 0x31, 0x24d, 0xa, 0x31, 0x3, 0x32, 
       0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x3, 0x32, 0x5, 0x32, 0x254, 0xa, 
       0x32, 0x3, 0x33, 0x7, 0x33, 0x257, 0xa, 0x33, 0xc, 0x33, 0xe, 0x33, 
       0x25a, 0xb, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 0x33, 0x3, 
       0x33, 0x5, 0x33, 0x261, 0xa, 0x33, 0x3, 0x34, 0x3, 0x34, 0x3, 0x34, 
       0x3, 0x35, 0x3, 0x35, 0x3, 0x35, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 
       0x5, 0x36, 0x26c, 0xa, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 0x36, 0x3, 
       0x36, 0x5, 0x36, 0x272, 0xa, 0x36, 0x3, 0x37, 0x3, 0x37, 0x5, 0x37, 
       0x276, 0xa, 0x37, 0x3, 0x38, 0x3, 0x38, 0x3, 0x38, 0x5, 0x38, 0x27b, 
       0xa, 0x38, 0x3, 0x38, 0x3, 0x38, 0x3, 0x39, 0x3, 0x39, 0x3, 0x39, 
       0x3, 0x39, 0x3, 0x39, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 0x3, 0x3a, 
       0x3, 0x3a, 0x5, 0x3a, 0x289, 0xa, 0x3a, 0x3, 0x3b, 0x7, 0x3b, 0x28c, 
       0xa, 0x3b, 0xc, 0x3b, 0xe, 0x3b, 0x28f, 0xb, 0x3b, 0x3, 0x3b, 0x3, 
       0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3b, 0x5, 0x3b, 0x296, 0xa, 0x3b, 
       0x3, 0x3b, 0x3, 0x3b, 0x3, 0x3c, 0x3, 0x3c, 0x3, 0x3d, 0x3, 0x3d, 
       0x3, 0x3e, 0x3, 0x3e, 0x3, 0x3f, 0x3, 0x3f, 0x3, 0x40, 0x3, 0x40, 
       0x3, 0x40, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x5, 0x41, 
       0x2a9, 0xa, 0x41, 0x3, 0x41, 0x3, 0x41, 0x3, 0x41, 0x7, 0x41, 0x2ae, 
       0xa, 0x41, 0xc, 0x41, 0xe, 0x41, 0x2b1, 0xb, 0x41, 0x3, 0x42, 0x3, 
       0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x3, 0x42, 0x7, 0x42, 0x2b9, 
       0xa, 0x42, 0xc, 0x42, 0xe, 0x42, 0x2bc, 0xb, 0x42, 0x3, 0x43, 0x3, 
       0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x3, 0x43, 0x7, 0x43, 0x2c4, 
       0xa, 0x43, 0xc, 0x43, 0xe, 0x43, 0x2c7, 0xb, 0x43, 0x3, 0x44, 0x3, 
       0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x3, 0x44, 0x7, 0x44, 0x2cf, 
       0xa, 0x44, 0xc, 0x44, 0xe, 0x44, 0x2d2, 0xb, 0x44, 0x3, 0x45, 0x3, 
       0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x3, 0x45, 0x7, 0x45, 0x2da, 
       0xa, 0x45, 0xc, 0x45, 0xe, 0x45, 0x2dd, 0xb, 0x45, 0x3, 0x46, 0x3, 
       0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x3, 0x46, 0x7, 
       0x46, 0x2e6, 0xa, 0x46, 0xc, 0x46, 0xe, 0x46, 0x2e9, 0xb, 0x46, 0x3, 
       0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 0x47, 0x3, 
       0x47, 0x7, 0x47, 0x2f2, 0xa, 0x47, 0xc, 0x47, 0xe, 0x47, 0x2f5, 0xb, 
       0x47, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 0x48, 0x3, 
       0x48, 0x7, 0x48, 0x2fd, 0xa, 0x48, 0xc, 0x48, 0xe, 0x48, 0x300, 0xb, 
       0x48, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 0x49, 0x3, 
       0x49, 0x7, 0x49, 0x308, 0xa, 0x49, 0xc, 0x49, 0xe, 0x49, 0x30b, 0xb, 
       0x49, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x310, 0xa, 0x4a, 
       0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x3, 0x4a, 0x5, 0x4a, 0x316, 0xa, 
       0x4a, 0x7, 0x4a, 0x318, 0xa, 0x4a, 0xc, 0x4a, 0xe, 0x4a, 0x31b, 0xb, 
       0x4a, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4b, 0x3, 0x4c, 0x3, 0x4c, 0x3, 
       0x4c, 0x3, 0x4c, 0x3, 0x4c, 0x5, 0x4c, 0x325, 0xa, 0x4c, 0x3, 0x4d, 
       0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
       0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 
       0x3, 0x4d, 0x3, 0x4d, 0x5, 0x4d, 0x336, 0xa, 0x4d, 0x3, 0x4d, 0x3, 
       0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x3, 0x4d, 0x7, 0x4d, 0x33d, 0xa, 0x4d, 
       0xc, 0x4d, 0xe, 0x4d, 0x340, 0xb, 0x4d, 0x3, 0x4e, 0x3, 0x4e, 0x3, 
       0x4f, 0x3, 0x4f, 0x5, 0x4f, 0x346, 0xa, 0x4f, 0x3, 0x4f, 0x3, 0x4f, 
       0x3, 0x4f, 0x3, 0x4f, 0x3, 0x50, 0x3, 0x50, 0x3, 0x51, 0x3, 0x51, 
       0x3, 0x52, 0x3, 0x52, 0x3, 0x52, 0x7, 0x52, 0x353, 0xa, 0x52, 0xc, 
       0x52, 0xe, 0x52, 0x356, 0xb, 0x52, 0x3, 0x53, 0x3, 0x53, 0x3, 0x53, 
       0x3, 0x54, 0x3, 0x54, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 0x3, 0x55, 
       0x3, 0x55, 0x3, 0x55, 0x5, 0x55, 0x363, 0xa, 0x55, 0x3, 0x56, 0x3, 
       0x56, 0x3, 0x56, 0x3, 0x56, 0x3, 0x56, 0x7, 0x56, 0x36a, 0xa, 0x56, 
       0xc, 0x56, 0xe, 0x56, 0x36d, 0xb, 0x56, 0x3, 0x56, 0x5, 0x56, 0x370, 
       0xa, 0x56, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 0x3, 0x57, 
       0x3, 0x57, 0x3, 0x57, 0x5, 0x57, 0x379, 0xa, 0x57, 0x3, 0x58, 0x3, 
       0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 0x58, 0x3, 
       0x58, 0x3, 0x58, 0x5, 0x58, 0x384, 0xa, 0x58, 0x3, 0x59, 0x3, 0x59, 
       0x3, 0x59, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5a, 0x3, 0x5b, 0x3, 0x5b, 
       0x3, 0x5b, 0x5, 0x5b, 0x38f, 0xa, 0x5b, 0x3, 0x5b, 0x3, 0x5b, 0x3, 
       0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x3, 0x5c, 0x5, 0x5c, 0x397, 0xa, 0x5c, 
       0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 0x39d, 0xa, 
       0x5d, 0x3, 0x5d, 0x3, 0x5d, 0x5, 0x5d, 0x3a1, 0xa, 0x5d, 0x3, 0x5d, 
       0x3, 0x5d, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x5, 0x5e, 0x3a8, 0xa, 
       0x5e, 0x3, 0x5e, 0x3, 0x5e, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 
       0x5f, 0x5, 0x5f, 0x3b0, 0xa, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x5, 0x5f, 
       0x3b4, 0xa, 0x5f, 0x3, 0x5f, 0x3, 0x5f, 0x3, 0x60, 0x3, 0x60, 0x7, 
       0x60, 0x3ba, 0xa, 0x60, 0xc, 0x60, 0xe, 0x60, 0x3bd, 0xb, 0x60, 0x3, 
       0x60, 0x5, 0x60, 0x3c0, 0xa, 0x60, 0x3, 0x60, 0x3, 0x60, 0x3, 0x61, 
       0x3, 0x61, 0x3, 0x61, 0x7, 0x61, 0x3c7, 0xa, 0x61, 0xc, 0x61, 0xe, 
       0x61, 0x3ca, 0xb, 0x61, 0x3, 0x61, 0x3, 0x61, 0x3, 0x62, 0x3, 0x62, 
       0x3, 0x63, 0x3, 0x63, 0x5, 0x63, 0x3d2, 0xa, 0x63, 0x3, 0x63, 0x3, 
       0x63, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x3, 0x64, 0x5, 
       0x64, 0x3db, 0xa, 0x64, 0x3, 0x64, 0x5, 0x64, 0x3de, 0xa, 0x64, 0x3, 
       0x65, 0x3, 0x65, 0x3, 0x66, 0x3, 0x66, 0x3, 0x66, 0x5, 0x66, 0x3e5, 
       0xa, 0x66, 0x3, 0x66, 0x5, 0x66, 0x3e8, 0xa, 0x66, 0x3, 0x66, 0x3, 
       0x66, 0x3, 0x66, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x3, 0x67, 0x5, 
       0x67, 0x3f1, 0xa, 0x67, 0x3, 0x68, 0x3, 0x68, 0x5, 0x68, 0x3f5, 0xa, 
       0x68, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x69, 0x3, 0x6a, 0x3, 
       0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x3ff, 0xa, 0x6a, 0x3, 0x6a, 
       0x5, 0x6a, 0x402, 0xa, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x5, 0x6a, 0x406, 
       0xa, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x7, 0x6a, 0x40a, 0xa, 0x6a, 0xc, 
       0x6a, 0xe, 0x6a, 0x40d, 0xb, 0x6a, 0x3, 0x6a, 0x3, 0x6a, 0x3, 0x6b, 
       0x3, 0x6b, 0x3, 0x6c, 0x3, 0x6c, 0x5, 0x6c, 0x415, 0xa, 0x6c, 0x3, 
       0x6c, 0x3, 0x40b, 0xe, 0x4e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 
       0x8c, 0x8e, 0x90, 0x92, 0x98, 0x6d, 0x2, 0x4, 0x6, 0x8, 0xa, 0xc, 
       0xe, 0x10, 0x12, 0x14, 0x16, 0x18, 0x1a, 0x1c, 0x1e, 0x20, 0x22, 
       0x24, 0x26, 0x28, 0x2a, 0x2c, 0x2e, 0x30, 0x32, 0x34, 0x36, 0x38, 
       0x3a, 0x3c, 0x3e, 0x40, 0x42, 0x44, 0x46, 0x48, 0x4a, 0x4c, 0x4e, 
       0x50, 0x52, 0x54, 0x56, 0x58, 0x5a, 0x5c, 0x5e, 0x60, 0x62, 0x64, 
       0x66, 0x68, 0x6a, 0x6c, 0x6e, 0x70, 0x72, 0x74, 0x76, 0x78, 0x7a, 
       0x7c, 0x7e, 0x80, 0x82, 0x84, 0x86, 0x88, 0x8a, 0x8c, 0x8e, 0x90, 
       0x92, 0x94, 0x96, 0x98, 0x9a, 0x9c, 0x9e, 0xa0, 0xa2, 0xa4, 0xa6, 
       0xa8, 0xaa, 0xac, 0xae, 0xb0, 0xb2, 0xb4, 0xb6, 0xb8, 0xba, 0xbc, 
       0xbe, 0xc0, 0xc2, 0xc4, 0xc6, 0xc8, 0xca, 0xcc, 0xce, 0xd0, 0xd2, 
       0xd4, 0xd6, 0x2, 0x16, 0x4, 0x2, 0x72, 0x72, 0x74, 0x74, 0x3, 0x2, 
       0x5, 0x6, 0x3, 0x2, 0x9, 0xa, 0x3, 0x2, 0xb, 0xe, 0x4, 0x2, 0x16, 
       0x17, 0x73, 0x73, 0x3, 0x2, 0x1f, 0x20, 0x4, 0x2, 0x21, 0x22, 0x69, 
       0x69, 0x3, 0x2, 0x23, 0x26, 0x3, 0x2, 0x27, 0x28, 0x4, 0x2, 0x14, 
       0x14, 0x29, 0x29, 0x3, 0x2, 0x2d, 0x2e, 0x3, 0x2, 0x68, 0x69, 0x3, 
       0x2, 0x6a, 0x6c, 0x3, 0x2, 0x30, 0x31, 0x3, 0x2, 0x32, 0x3a, 0x4, 
       0x2, 0x3b, 0x46, 0x66, 0x66, 0x3, 0x2, 0x4e, 0x4f, 0x3, 0x2, 0x53, 
       0x54, 0x3, 0x2, 0x57, 0x58, 0x4, 0x2, 0x5b, 0x5b, 0x76, 0x76, 0x2, 
       0x43d, 0x2, 0xd8, 0x3, 0x2, 0x2, 0x2, 0x4, 0xe1, 0x3, 0x2, 0x2, 0x2, 
       0x6, 0xef, 0x3, 0x2, 0x2, 0x2, 0x8, 0xf3, 0x3, 0x2, 0x2, 0x2, 0xa, 
       0xf7, 0x3, 0x2, 0x2, 0x2, 0xc, 0xf9, 0x3, 0x2, 0x2, 0x2, 0xe, 0x104, 
       0x3, 0x2, 0x2, 0x2, 0x10, 0x10e, 0x3, 0x2, 0x2, 0x2, 0x12, 0x110, 
       0x3, 0x2, 0x2, 0x2, 0x14, 0x115, 0x3, 0x2, 0x2, 0x2, 0x16, 0x119, 
       0x3, 0x2, 0x2, 0x2, 0x18, 0x122, 0x3, 0x2, 0x2, 0x2, 0x1a, 0x126, 
       0x3, 0x2, 0x2, 0x2, 0x1c, 0x129, 0x3, 0x2, 0x2, 0x2, 0x1e, 0x12d, 
       0x3, 0x2, 0x2, 0x2, 0x20, 0x137, 0x3, 0x2, 0x2, 0x2, 0x22, 0x146, 
       0x3, 0x2, 0x2, 0x2, 0x24, 0x152, 0x3, 0x2, 0x2, 0x2, 0x26, 0x154, 
       0x3, 0x2, 0x2, 0x2, 0x28, 0x15c, 0x3, 0x2, 0x2, 0x2, 0x2a, 0x15e, 
       0x3, 0x2, 0x2, 0x2, 0x2c, 0x160, 0x3, 0x2, 0x2, 0x2, 0x2e, 0x164, 
       0x3, 0x2, 0x2, 0x2, 0x30, 0x176, 0x3, 0x2, 0x2, 0x2, 0x32, 0x17e, 
       0x3, 0x2, 0x2, 0x2, 0x34, 0x180, 0x3, 0x2, 0x2, 0x2, 0x36, 0x184, 
       0x3, 0x2, 0x2, 0x2, 0x38, 0x18a, 0x3, 0x2, 0x2, 0x2, 0x3a, 0x190, 
       0x3, 0x2, 0x2, 0x2, 0x3c, 0x19f, 0x3, 0x2, 0x2, 0x2, 0x3e, 0x1a4, 
       0x3, 0x2, 0x2, 0x2, 0x40, 0x1b1, 0x3, 0x2, 0x2, 0x2, 0x42, 0x1b8, 
       0x3, 0x2, 0x2, 0x2, 0x44, 0x1d8, 0x3, 0x2, 0x2, 0x2, 0x46, 0x1da, 
       0x3, 0x2, 0x2, 0x2, 0x48, 0x1e4, 0x3, 0x2, 0x2, 0x2, 0x4a, 0x1eb, 
       0x3, 0x2, 0x2, 0x2, 0x4c, 0x1f0, 0x3, 0x2, 0x2, 0x2, 0x4e, 0x200, 
       0x3, 0x2, 0x2, 0x2, 0x50, 0x20a, 0x3, 0x2, 0x2, 0x2, 0x52, 0x212, 
       0x3, 0x2, 0x2, 0x2, 0x54, 0x220, 0x3, 0x2, 0x2, 0x2, 0x56, 0x224, 
       0x3, 0x2, 0x2, 0x2, 0x58, 0x22e, 0x3, 0x2, 0x2, 0x2, 0x5a, 0x230, 
       0x3, 0x2, 0x2, 0x2, 0x5c, 0x23a, 0x3, 0x2, 0x2, 0x2, 0x5e, 0x246, 
       0x3, 0x2, 0x2, 0x2, 0x60, 0x24c, 0x3, 0x2, 0x2, 0x2, 0x62, 0x253, 
       0x3, 0x2, 0x2, 0x2, 0x64, 0x258, 0x3, 0x2, 0x2, 0x2, 0x66, 0x262, 
       0x3, 0x2, 0x2, 0x2, 0x68, 0x265, 0x3, 0x2, 0x2, 0x2, 0x6a, 0x271, 
       0x3, 0x2, 0x2, 0x2, 0x6c, 0x273, 0x3, 0x2, 0x2, 0x2, 0x6e, 0x27a, 
       0x3, 0x2, 0x2, 0x2, 0x70, 0x27e, 0x3, 0x2, 0x2, 0x2, 0x72, 0x283, 
       0x3, 0x2, 0x2, 0x2, 0x74, 0x28d, 0x3, 0x2, 0x2, 0x2, 0x76, 0x299, 
       0x3, 0x2, 0x2, 0x2, 0x78, 0x29b, 0x3, 0x2, 0x2, 0x2, 0x7a, 0x29d, 
       0x3, 0x2, 0x2, 0x2, 0x7c, 0x29f, 0x3, 0x2, 0x2, 0x2, 0x7e, 0x2a1, 
       0x3, 0x2, 0x2, 0x2, 0x80, 0x2a8, 0x3, 0x2, 0x2, 0x2, 0x82, 0x2b2, 
       0x3, 0x2, 0x2, 0x2, 0x84, 0x2bd, 0x3, 0x2, 0x2, 0x2, 0x86, 0x2c8, 
       0x3, 0x2, 0x2, 0x2, 0x88, 0x2d3, 0x3, 0x2, 0x2, 0x2, 0x8a, 0x2de, 
       0x3, 0x2, 0x2, 0x2, 0x8c, 0x2ea, 0x3, 0x2, 0x2, 0x2, 0x8e, 0x2f6, 
       0x3, 0x2, 0x2, 0x2, 0x90, 0x301, 0x3, 0x2, 0x2, 0x2, 0x92, 0x30f, 
       0x3, 0x2, 0x2, 0x2, 0x94, 0x31c, 0x3, 0x2, 0x2, 0x2, 0x96, 0x324, 
       0x3, 0x2, 0x2, 0x2, 0x98, 0x335, 0x3, 0x2, 0x2, 0x2, 0x9a, 0x341, 
       0x3, 0x2, 0x2, 0x2, 0x9c, 0x345, 0x3, 0x2, 0x2, 0x2, 0x9e, 0x34b, 
       0x3, 0x2, 0x2, 0x2, 0xa0, 0x34d, 0x3, 0x2, 0x2, 0x2, 0xa2, 0x34f, 
       0x3, 0x2, 0x2, 0x2, 0xa4, 0x357, 0x3, 0x2, 0x2, 0x2, 0xa6, 0x35a, 
       0x3, 0x2, 0x2, 0x2, 0xa8, 0x362, 0x3, 0x2, 0x2, 0x2, 0xaa, 0x36f, 
       0x3, 0x2, 0x2, 0x2, 0xac, 0x371, 0x3, 0x2, 0x2, 0x2, 0xae, 0x383, 
       0x3, 0x2, 0x2, 0x2, 0xb0, 0x385, 0x3, 0x2, 0x2, 0x2, 0xb2, 0x388, 
       0x3, 0x2, 0x2, 0x2, 0xb4, 0x38b, 0x3, 0x2, 0x2, 0x2, 0xb6, 0x396, 
       0x3, 0x2, 0x2, 0x2, 0xb8, 0x398, 0x3, 0x2, 0x2, 0x2, 0xba, 0x3a4, 
       0x3, 0x2, 0x2, 0x2, 0xbc, 0x3ab, 0x3, 0x2, 0x2, 0x2, 0xbe, 0x3b7, 
       0x3, 0x2, 0x2, 0x2, 0xc0, 0x3c3, 0x3, 0x2, 0x2, 0x2, 0xc2, 0x3cd, 
       0x3, 0x2, 0x2, 0x2, 0xc4, 0x3cf, 0x3, 0x2, 0x2, 0x2, 0xc6, 0x3dd, 
       0x3, 0x2, 0x2, 0x2, 0xc8, 0x3df, 0x3, 0x2, 0x2, 0x2, 0xca, 0x3e1, 
       0x3, 0x2, 0x2, 0x2, 0xcc, 0x3f0, 0x3, 0x2, 0x2, 0x2, 0xce, 0x3f4, 
       0x3, 0x2, 0x2, 0x2, 0xd0, 0x3f6, 0x3, 0x2, 0x2, 0x2, 0xd2, 0x3fa, 
       0x3, 0x2, 0x2, 0x2, 0xd4, 0x410, 0x3, 0x2, 0x2, 0x2, 0xd6, 0x414, 
       0x3, 0x2, 0x2, 0x2, 0xd8, 0xdd, 0x5, 0x4, 0x3, 0x2, 0xd9, 0xdc, 0x5, 
       0xe, 0x8, 0x2, 0xda, 0xdc, 0x5, 0x10, 0x9, 0x2, 0xdb, 0xd9, 0x3, 
       0x2, 0x2, 0x2, 0xdb, 0xda, 0x3, 0x2, 0x2, 0x2, 0xdc, 0xdf, 0x3, 0x2, 
       0x2, 0x2, 0xdd, 0xdb, 0x3, 0x2, 0x2, 0x2, 0xdd, 0xde, 0x3, 0x2, 0x2, 
       0x2, 0xde, 0x3, 0x3, 0x2, 0x2, 0x2, 0xdf, 0xdd, 0x3, 0x2, 0x2, 0x2, 
       0xe0, 0xe2, 0x5, 0x6, 0x4, 0x2, 0xe1, 0xe0, 0x3, 0x2, 0x2, 0x2, 0xe1, 
       0xe2, 0x3, 0x2, 0x2, 0x2, 0xe2, 0xe6, 0x3, 0x2, 0x2, 0x2, 0xe3, 0xe5, 
       0x5, 0x8, 0x5, 0x2, 0xe4, 0xe3, 0x3, 0x2, 0x2, 0x2, 0xe5, 0xe8, 0x3, 
       0x2, 0x2, 0x2, 0xe6, 0xe4, 0x3, 0x2, 0x2, 0x2, 0xe6, 0xe7, 0x3, 0x2, 
       0x2, 0x2, 0xe7, 0xec, 0x3, 0x2, 0x2, 0x2, 0xe8, 0xe6, 0x3, 0x2, 0x2, 
       0x2, 0xe9, 0xeb, 0x5, 0xc, 0x7, 0x2, 0xea, 0xe9, 0x3, 0x2, 0x2, 0x2, 
       0xeb, 0xee, 0x3, 0x2, 0x2, 0x2, 0xec, 0xea, 0x3, 0x2, 0x2, 0x2, 0xec, 
       0xed, 0x3, 0x2, 0x2, 0x2, 0xed, 0x5, 0x3, 0x2, 0x2, 0x2, 0xee, 0xec, 
       0x3, 0x2, 0x2, 0x2, 0xef, 0xf0, 0x7, 0x3, 0x2, 0x2, 0xf0, 0xf1, 0x9, 
       0x2, 0x2, 0x2, 0xf1, 0xf2, 0x7, 0x63, 0x2, 0x2, 0xf2, 0x7, 0x3, 0x2, 
       0x2, 0x2, 0xf3, 0xf4, 0x7, 0x4, 0x2, 0x2, 0xf4, 0xf5, 0x7, 0x76, 
       0x2, 0x2, 0xf5, 0xf6, 0x7, 0x63, 0x2, 0x2, 0xf6, 0x9, 0x3, 0x2, 0x2, 
       0x2, 0xf7, 0xf8, 0x9, 0x3, 0x2, 0x2, 0xf8, 0xb, 0x3, 0x2, 0x2, 0x2, 
       0xf9, 0xfa, 0x5, 0xa, 0x6, 0x2, 0xfa, 0xfb, 0x5, 0x30, 0x19, 0x2, 
       0xfb, 0xfc, 0x7, 0x73, 0x2, 0x2, 0xfc, 0xfd, 0x7, 0x63, 0x2, 0x2, 
       0xfd, 0xd, 0x3, 0x2, 0x2, 0x2, 0xfe, 0x105, 0x5, 0xbc, 0x5f, 0x2, 
       0xff, 0x105, 0x5, 0xb8, 0x5d, 0x2, 0x100, 0x105, 0x5, 0x54, 0x2b, 
       0x2, 0x101, 0x105, 0x5, 0xce, 0x68, 0x2, 0x102, 0x105, 0x5, 0x12, 
       0xa, 0x2, 0x103, 0x105, 0x5, 0xc0, 0x61, 0x2, 0x104, 0xfe, 0x3, 0x2, 
       0x2, 0x2, 0x104, 0xff, 0x3, 0x2, 0x2, 0x2, 0x104, 0x100, 0x3, 0x2, 
       0x2, 0x2, 0x104, 0x101, 0x3, 0x2, 0x2, 0x2, 0x104, 0x102, 0x3, 0x2, 
       0x2, 0x2, 0x104, 0x103, 0x3, 0x2, 0x2, 0x2, 0x105, 0xf, 0x3, 0x2, 
       0x2, 0x2, 0x106, 0x10f, 0x5, 0x7e, 0x40, 0x2, 0x107, 0x10f, 0x5, 
       0x18, 0xd, 0x2, 0x108, 0x10f, 0x5, 0x14, 0xb, 0x2, 0x109, 0x10f, 
       0x5, 0xac, 0x57, 0x2, 0x10a, 0x10f, 0x5, 0xb0, 0x59, 0x2, 0x10b, 
       0x10f, 0x5, 0xb2, 0x5a, 0x2, 0x10c, 0x10f, 0x5, 0x4c, 0x27, 0x2, 
       0x10d, 0x10f, 0x5, 0x60, 0x31, 0x2, 0x10e, 0x106, 0x3, 0x2, 0x2, 
       0x2, 0x10e, 0x107, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x108, 0x3, 0x2, 0x2, 
       0x2, 0x10e, 0x109, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10a, 0x3, 0x2, 0x2, 
       0x2, 0x10e, 0x10b, 0x3, 0x2, 0x2, 0x2, 0x10e, 0x10c, 0x3, 0x2, 0x2, 
       0x2, 0x10e, 0x10d, 0x3, 0x2, 0x2, 0x2, 0x10f, 0x11, 0x3, 0x2, 0x2, 
       0x2, 0x110, 0x111, 0x5, 0x22, 0x12, 0x2, 0x111, 0x112, 0x7, 0x63, 
       0x2, 0x2, 0x112, 0x13, 0x3, 0x2, 0x2, 0x2, 0x113, 0x116, 0x5, 0x40, 
       0x21, 0x2, 0x114, 0x116, 0x5, 0x34, 0x1b, 0x2, 0x115, 0x113, 0x3, 
       0x2, 0x2, 0x2, 0x115, 0x114, 0x3, 0x2, 0x2, 0x2, 0x116, 0x117, 0x3, 
       0x2, 0x2, 0x2, 0x117, 0x118, 0x7, 0x63, 0x2, 0x2, 0x118, 0x15, 0x3, 
       0x2, 0x2, 0x2, 0x119, 0x11b, 0x7, 0x73, 0x2, 0x2, 0x11a, 0x11c, 0x5, 
       0x1c, 0xf, 0x2, 0x11b, 0x11a, 0x3, 0x2, 0x2, 0x2, 0x11b, 0x11c, 0x3, 
       0x2, 0x2, 0x2, 0x11c, 0x11d, 0x3, 0x2, 0x2, 0x2, 0x11d, 0x11e, 0x5, 
       0xa6, 0x54, 0x2, 0x11e, 0x11f, 0x5, 0x80, 0x41, 0x2, 0x11f, 0x17, 
       0x3, 0x2, 0x2, 0x2, 0x120, 0x123, 0x5, 0x16, 0xc, 0x2, 0x121, 0x123, 
       0x5, 0x6a, 0x36, 0x2, 0x122, 0x120, 0x3, 0x2, 0x2, 0x2, 0x122, 0x121, 
       0x3, 0x2, 0x2, 0x2, 0x123, 0x124, 0x3, 0x2, 0x2, 0x2, 0x124, 0x125, 
       0x7, 0x63, 0x2, 0x2, 0x125, 0x19, 0x3, 0x2, 0x2, 0x2, 0x126, 0x127, 
       0x7, 0x67, 0x2, 0x2, 0x127, 0x128, 0x5, 0x30, 0x19, 0x2, 0x128, 0x1b, 
       0x3, 0x2, 0x2, 0x2, 0x129, 0x12a, 0x7, 0x5c, 0x2, 0x2, 0x12a, 0x12b, 
       0x5, 0x80, 0x41, 0x2, 0x12b, 0x12c, 0x7, 0x5d, 0x2, 0x2, 0x12c, 0x1d, 
       0x3, 0x2, 0x2, 0x2, 0x12d, 0x12e, 0x7, 0x5c, 0x2, 0x2, 0x12e, 0x12f, 
       0x5, 0x80, 0x41, 0x2, 0x12f, 0x130, 0x7, 0x65, 0x2, 0x2, 0x130, 0x131, 
       0x5, 0x80, 0x41, 0x2, 0x131, 0x132, 0x7, 0x5d, 0x2, 0x2, 0x132, 0x1f, 
       0x3, 0x2, 0x2, 0x2, 0x133, 0x134, 0x7, 0x73, 0x2, 0x2, 0x134, 0x136, 
       0x7, 0x65, 0x2, 0x2, 0x135, 0x133, 0x3, 0x2, 0x2, 0x2, 0x136, 0x139, 
       0x3, 0x2, 0x2, 0x2, 0x137, 0x135, 0x3, 0x2, 0x2, 0x2, 0x137, 0x138, 
       0x3, 0x2, 0x2, 0x2, 0x138, 0x13a, 0x3, 0x2, 0x2, 0x2, 0x139, 0x137, 
       0x3, 0x2, 0x2, 0x2, 0x13a, 0x13b, 0x7, 0x73, 0x2, 0x2, 0x13b, 0x21, 
       0x3, 0x2, 0x2, 0x2, 0x13c, 0x13d, 0x7, 0x7, 0x2, 0x2, 0x13d, 0x13f, 
       0x7, 0x73, 0x2, 0x2, 0x13e, 0x140, 0x5, 0x1c, 0xf, 0x2, 0x13f, 0x13e, 
       0x3, 0x2, 0x2, 0x2, 0x13f, 0x140, 0x3, 0x2, 0x2, 0x2, 0x140, 0x147, 
       0x3, 0x2, 0x2, 0x2, 0x141, 0x143, 0x7, 0x8, 0x2, 0x2, 0x142, 0x144, 
       0x5, 0x1c, 0xf, 0x2, 0x143, 0x142, 0x3, 0x2, 0x2, 0x2, 0x143, 0x144, 
       0x3, 0x2, 0x2, 0x2, 0x144, 0x145, 0x3, 0x2, 0x2, 0x2, 0x145, 0x147, 
       0x7, 0x73, 0x2, 0x2, 0x146, 0x13c, 0x3, 0x2, 0x2, 0x2, 0x146, 0x141, 
       0x3, 0x2, 0x2, 0x2, 0x147, 0x23, 0x3, 0x2, 0x2, 0x2, 0x148, 0x149, 
       0x7, 0x7, 0x2, 0x2, 0x149, 0x14b, 0x7, 0x73, 0x2, 0x2, 0x14a, 0x14c, 
       0x5, 0x1c, 0xf, 0x2, 0x14b, 0x14a, 0x3, 0x2, 0x2, 0x2, 0x14b, 0x14c, 
       0x3, 0x2, 0x2, 0x2, 0x14c, 0x153, 0x3, 0x2, 0x2, 0x2, 0x14d, 0x14f, 
       0x7, 0x8, 0x2, 0x2, 0x14e, 0x150, 0x5, 0x1c, 0xf, 0x2, 0x14f, 0x14e, 
       0x3, 0x2, 0x2, 0x2, 0x14f, 0x150, 0x3, 0x2, 0x2, 0x2, 0x150, 0x151, 
       0x3, 0x2, 0x2, 0x2, 0x151, 0x153, 0x7, 0x73, 0x2, 0x2, 0x152, 0x148, 
       0x3, 0x2, 0x2, 0x2, 0x152, 0x14d, 0x3, 0x2, 0x2, 0x2, 0x153, 0x25, 
       0x3, 0x2, 0x2, 0x2, 0x154, 0x159, 0x5, 0x24, 0x13, 0x2, 0x155, 0x156, 
       0x7, 0x65, 0x2, 0x2, 0x156, 0x158, 0x5, 0x24, 0x13, 0x2, 0x157, 0x155, 
       0x3, 0x2, 0x2, 0x2, 0x158, 0x15b, 0x3, 0x2, 0x2, 0x2, 0x159, 0x157, 
       0x3, 0x2, 0x2, 0x2, 0x159, 0x15a, 0x3, 0x2, 0x2, 0x2, 0x15a, 0x27, 
       0x3, 0x2, 0x2, 0x2, 0x15b, 0x159, 0x3, 0x2, 0x2, 0x2, 0x15c, 0x15d, 
       0x9, 0x4, 0x2, 0x2, 0x15d, 0x29, 0x3, 0x2, 0x2, 0x2, 0x15e, 0x15f, 
       0x9, 0x5, 0x2, 0x2, 0x15f, 0x2b, 0x3, 0x2, 0x2, 0x2, 0x160, 0x161, 
       0x7, 0xf, 0x2, 0x2, 0x161, 0x2d, 0x3, 0x2, 0x2, 0x2, 0x162, 0x165, 
       0x7, 0x10, 0x2, 0x2, 0x163, 0x165, 0x5, 0xc2, 0x62, 0x2, 0x164, 0x162, 
       0x3, 0x2, 0x2, 0x2, 0x164, 0x163, 0x3, 0x2, 0x2, 0x2, 0x165, 0x2f, 
       0x3, 0x2, 0x2, 0x2, 0x166, 0x167, 0x5, 0x2a, 0x16, 0x2, 0x167, 0x168, 
       0x5, 0x1c, 0xf, 0x2, 0x168, 0x177, 0x3, 0x2, 0x2, 0x2, 0x169, 0x16a, 
       0x5, 0x2c, 0x17, 0x2, 0x16a, 0x16b, 0x5, 0x1e, 0x10, 0x2, 0x16b, 
       0x177, 0x3, 0x2, 0x2, 0x2, 0x16c, 0x177, 0x5, 0x2e, 0x18, 0x2, 0x16d, 
       0x16f, 0x5, 0x28, 0x15, 0x2, 0x16e, 0x170, 0x5, 0x1c, 0xf, 0x2, 0x16f, 
       0x16e, 0x3, 0x2, 0x2, 0x2, 0x16f, 0x170, 0x3, 0x2, 0x2, 0x2, 0x170, 
       0x177, 0x3, 0x2, 0x2, 0x2, 0x171, 0x172, 0x7, 0x11, 0x2, 0x2, 0x172, 
       0x173, 0x7, 0x5c, 0x2, 0x2, 0x173, 0x174, 0x5, 0x32, 0x1a, 0x2, 0x174, 
       0x175, 0x7, 0x5d, 0x2, 0x2, 0x175, 0x177, 0x3, 0x2, 0x2, 0x2, 0x176, 
       0x166, 0x3, 0x2, 0x2, 0x2, 0x176, 0x169, 0x3, 0x2, 0x2, 0x2, 0x176, 
       0x16c, 0x3, 0x2, 0x2, 0x2, 0x176, 0x16d, 0x3, 0x2, 0x2, 0x2, 0x176, 
       0x171, 0x3, 0x2, 0x2, 0x2, 0x177, 0x31, 0x3, 0x2, 0x2, 0x2, 0x178, 
       0x179, 0x5, 0x2a, 0x16, 0x2, 0x179, 0x17a, 0x5, 0x1c, 0xf, 0x2, 0x17a, 
       0x17f, 0x3, 0x2, 0x2, 0x2, 0x17b, 0x17c, 0x5, 0x2c, 0x17, 0x2, 0x17c, 
       0x17d, 0x5, 0x1e, 0x10, 0x2, 0x17d, 0x17f, 0x3, 0x2, 0x2, 0x2, 0x17e, 
       0x178, 0x3, 0x2, 0x2, 0x2, 0x17e, 0x17b, 0x3, 0x2, 0x2, 0x2, 0x17f, 
       0x33, 0x3, 0x2, 0x2, 0x2, 0x180, 0x181, 0x7, 0x12, 0x2, 0x2, 0x181, 
       0x182, 0x7, 0x73, 0x2, 0x2, 0x182, 0x183, 0x5, 0xa4, 0x53, 0x2, 0x183, 
       0x35, 0x3, 0x2, 0x2, 0x2, 0x184, 0x185, 0x5, 0x2a, 0x16, 0x2, 0x185, 
       0x186, 0x5, 0x1c, 0xf, 0x2, 0x186, 0x188, 0x7, 0x73, 0x2, 0x2, 0x187, 
       0x189, 0x5, 0xa4, 0x53, 0x2, 0x188, 0x187, 0x3, 0x2, 0x2, 0x2, 0x188, 
       0x189, 0x3, 0x2, 0x2, 0x2, 0x189, 0x37, 0x3, 0x2, 0x2, 0x2, 0x18a, 
       0x18b, 0x5, 0x2c, 0x17, 0x2, 0x18b, 0x18c, 0x5, 0x1e, 0x10, 0x2, 
       0x18c, 0x18e, 0x7, 0x73, 0x2, 0x2, 0x18d, 0x18f, 0x5, 0xa4, 0x53, 
       0x2, 0x18e, 0x18d, 0x3, 0x2, 0x2, 0x2, 0x18e, 0x18f, 0x3, 0x2, 0x2, 
       0x2, 0x18f, 0x39, 0x3, 0x2, 0x2, 0x2, 0x190, 0x191, 0x5, 0x2e, 0x18, 
       0x2, 0x191, 0x193, 0x7, 0x73, 0x2, 0x2, 0x192, 0x194, 0x5, 0xa4, 
       0x53, 0x2, 0x193, 0x192, 0x3, 0x2, 0x2, 0x2, 0x193, 0x194, 0x3, 0x2, 
       0x2, 0x2, 0x194, 0x3b, 0x3, 0x2, 0x2, 0x2, 0x195, 0x196, 0x7, 0xa, 
       0x2, 0x2, 0x196, 0x198, 0x7, 0x73, 0x2, 0x2, 0x197, 0x199, 0x5, 0x1c, 
       0xf, 0x2, 0x198, 0x197, 0x3, 0x2, 0x2, 0x2, 0x198, 0x199, 0x3, 0x2, 
       0x2, 0x2, 0x199, 0x1a0, 0x3, 0x2, 0x2, 0x2, 0x19a, 0x19c, 0x7, 0x9, 
       0x2, 0x2, 0x19b, 0x19d, 0x5, 0x1c, 0xf, 0x2, 0x19c, 0x19b, 0x3, 0x2, 
       0x2, 0x2, 0x19c, 0x19d, 0x3, 0x2, 0x2, 0x2, 0x19d, 0x19e, 0x3, 0x2, 
       0x2, 0x2, 0x19e, 0x1a0, 0x7, 0x73, 0x2, 0x2, 0x19f, 0x195, 0x3, 0x2, 
       0x2, 0x2, 0x19f, 0x19a, 0x3, 0x2, 0x2, 0x2, 0x1a0, 0x1a2, 0x3, 0x2, 
       0x2, 0x2, 0x1a1, 0x1a3, 0x5, 0xa4, 0x53, 0x2, 0x1a2, 0x1a1, 0x3, 
       0x2, 0x2, 0x2, 0x1a2, 0x1a3, 0x3, 0x2, 0x2, 0x2, 0x1a3, 0x3d, 0x3, 
       0x2, 0x2, 0x2, 0x1a4, 0x1a5, 0x7, 0x11, 0x2, 0x2, 0x1a5, 0x1a6, 0x7, 
       0x5c, 0x2, 0x2, 0x1a6, 0x1a7, 0x5, 0x32, 0x1a, 0x2, 0x1a7, 0x1a8, 
       0x7, 0x5d, 0x2, 0x2, 0x1a8, 0x1aa, 0x7, 0x73, 0x2, 0x2, 0x1a9, 0x1ab, 
       0x5, 0xa4, 0x53, 0x2, 0x1aa, 0x1a9, 0x3, 0x2, 0x2, 0x2, 0x1aa, 0x1ab, 
       0x3, 0x2, 0x2, 0x2, 0x1ab, 0x3f, 0x3, 0x2, 0x2, 0x2, 0x1ac, 0x1b2, 
       0x5, 0x36, 0x1c, 0x2, 0x1ad, 0x1b2, 0x5, 0x38, 0x1d, 0x2, 0x1ae, 
       0x1b2, 0x5, 0x3a, 0x1e, 0x2, 0x1af, 0x1b2, 0x5, 0x3c, 0x1f, 0x2, 
       0x1b0, 0x1b2, 0x5, 0x3e, 0x20, 0x2, 0x1b1, 0x1ac, 0x3, 0x2, 0x2, 
       0x2, 0x1b1, 0x1ad, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1ae, 0x3, 0x2, 0x2, 
       0x2, 0x1b1, 0x1af, 0x3, 0x2, 0x2, 0x2, 0x1b1, 0x1b0, 0x3, 0x2, 0x2, 
       0x2, 0x1b2, 0x41, 0x3, 0x2, 0x2, 0x2, 0x1b3, 0x1b4, 0x5, 0x30, 0x19, 
       0x2, 0x1b4, 0x1b5, 0x7, 0x65, 0x2, 0x2, 0x1b5, 0x1b7, 0x3, 0x2, 0x2, 
       0x2, 0x1b6, 0x1b3, 0x3, 0x2, 0x2, 0x2, 0x1b7, 0x1ba, 0x3, 0x2, 0x2, 
       0x2, 0x1b8, 0x1b6, 0x3, 0x2, 0x2, 0x2, 0x1b8, 0x1b9, 0x3, 0x2, 0x2, 
       0x2, 0x1b9, 0x1bb, 0x3, 0x2, 0x2, 0x2, 0x1ba, 0x1b8, 0x3, 0x2, 0x2, 
       0x2, 0x1bb, 0x1bc, 0x5, 0x30, 0x19, 0x2, 0x1bc, 0x43, 0x3, 0x2, 0x2, 
       0x2, 0x1bd, 0x1be, 0x5, 0x2a, 0x16, 0x2, 0x1be, 0x1bf, 0x5, 0x1c, 
       0xf, 0x2, 0x1bf, 0x1c5, 0x3, 0x2, 0x2, 0x2, 0x1c0, 0x1c1, 0x5, 0x2c, 
       0x17, 0x2, 0x1c1, 0x1c2, 0x5, 0x1e, 0x10, 0x2, 0x1c2, 0x1c5, 0x3, 
       0x2, 0x2, 0x2, 0x1c3, 0x1c5, 0x5, 0x2e, 0x18, 0x2, 0x1c4, 0x1bd, 
       0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c0, 0x3, 0x2, 0x2, 0x2, 0x1c4, 0x1c3, 
       0x3, 0x2, 0x2, 0x2, 0x1c5, 0x1c6, 0x3, 0x2, 0x2, 0x2, 0x1c6, 0x1c7, 
       0x7, 0x73, 0x2, 0x2, 0x1c7, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1c8, 0x1c9, 
       0x7, 0xa, 0x2, 0x2, 0x1c9, 0x1cb, 0x7, 0x73, 0x2, 0x2, 0x1ca, 0x1cc, 
       0x5, 0x1c, 0xf, 0x2, 0x1cb, 0x1ca, 0x3, 0x2, 0x2, 0x2, 0x1cb, 0x1cc, 
       0x3, 0x2, 0x2, 0x2, 0x1cc, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1cd, 0x1cf, 
       0x7, 0x9, 0x2, 0x2, 0x1ce, 0x1d0, 0x5, 0x1c, 0xf, 0x2, 0x1cf, 0x1ce, 
       0x3, 0x2, 0x2, 0x2, 0x1cf, 0x1d0, 0x3, 0x2, 0x2, 0x2, 0x1d0, 0x1d1, 
       0x3, 0x2, 0x2, 0x2, 0x1d1, 0x1d9, 0x7, 0x73, 0x2, 0x2, 0x1d2, 0x1d3, 
       0x7, 0x11, 0x2, 0x2, 0x1d3, 0x1d4, 0x7, 0x5c, 0x2, 0x2, 0x1d4, 0x1d5, 
       0x5, 0x32, 0x1a, 0x2, 0x1d5, 0x1d6, 0x7, 0x5d, 0x2, 0x2, 0x1d6, 0x1d7, 
       0x7, 0x73, 0x2, 0x2, 0x1d7, 0x1d9, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1c4, 
       0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1c8, 0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1cd, 
       0x3, 0x2, 0x2, 0x2, 0x1d8, 0x1d2, 0x3, 0x2, 0x2, 0x2, 0x1d9, 0x45, 
       0x3, 0x2, 0x2, 0x2, 0x1da, 0x1df, 0x5, 0x44, 0x23, 0x2, 0x1db, 0x1dc, 
       0x7, 0x65, 0x2, 0x2, 0x1dc, 0x1de, 0x5, 0x44, 0x23, 0x2, 0x1dd, 0x1db, 
       0x3, 0x2, 0x2, 0x2, 0x1de, 0x1e1, 0x3, 0x2, 0x2, 0x2, 0x1df, 0x1dd, 
       0x3, 0x2, 0x2, 0x2, 0x1df, 0x1e0, 0x3, 0x2, 0x2, 0x2, 0x1e0, 0x47, 
       0x3, 0x2, 0x2, 0x2, 0x1e1, 0x1df, 0x3, 0x2, 0x2, 0x2, 0x1e2, 0x1e5, 
       0x5, 0x44, 0x23, 0x2, 0x1e3, 0x1e5, 0x5, 0x24, 0x13, 0x2, 0x1e4, 
       0x1e2, 0x3, 0x2, 0x2, 0x2, 0x1e4, 0x1e3, 0x3, 0x2, 0x2, 0x2, 0x1e5, 
       0x49, 0x3, 0x2, 0x2, 0x2, 0x1e6, 0x1e7, 0x5, 0x48, 0x25, 0x2, 0x1e7, 
       0x1e8, 0x7, 0x65, 0x2, 0x2, 0x1e8, 0x1ea, 0x3, 0x2, 0x2, 0x2, 0x1e9, 
       0x1e6, 0x3, 0x2, 0x2, 0x2, 0x1ea, 0x1ed, 0x3, 0x2, 0x2, 0x2, 0x1eb, 
       0x1e9, 0x3, 0x2, 0x2, 0x2, 0x1eb, 0x1ec, 0x3, 0x2, 0x2, 0x2, 0x1ec, 
       0x1ee, 0x3, 0x2, 0x2, 0x2, 0x1ed, 0x1eb, 0x3, 0x2, 0x2, 0x2, 0x1ee, 
       0x1ef, 0x5, 0x48, 0x25, 0x2, 0x1ef, 0x4b, 0x3, 0x2, 0x2, 0x2, 0x1f0, 
       0x1f1, 0x7, 0x13, 0x2, 0x2, 0x1f1, 0x1f2, 0x7, 0x73, 0x2, 0x2, 0x1f2, 
       0x1f3, 0x7, 0x66, 0x2, 0x2, 0x1f3, 0x1f4, 0x5, 0x4e, 0x28, 0x2, 0x1f4, 
       0x1f5, 0x7, 0x63, 0x2, 0x2, 0x1f5, 0x4d, 0x3, 0x2, 0x2, 0x2, 0x1f6, 
       0x1f7, 0x8, 0x28, 0x1, 0x2, 0x1f7, 0x1f8, 0x7, 0x73, 0x2, 0x2, 0x1f8, 
       0x201, 0x5, 0x52, 0x2a, 0x2, 0x1f9, 0x1fe, 0x7, 0x73, 0x2, 0x2, 0x1fa, 
       0x1fb, 0x7, 0x5c, 0x2, 0x2, 0x1fb, 0x1fc, 0x5, 0xa2, 0x52, 0x2, 0x1fc, 
       0x1fd, 0x7, 0x5d, 0x2, 0x2, 0x1fd, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1fe, 
       0x1fa, 0x3, 0x2, 0x2, 0x2, 0x1fe, 0x1ff, 0x3, 0x2, 0x2, 0x2, 0x1ff, 
       0x201, 0x3, 0x2, 0x2, 0x2, 0x200, 0x1f6, 0x3, 0x2, 0x2, 0x2, 0x200, 
       0x1f9, 0x3, 0x2, 0x2, 0x2, 0x201, 0x207, 0x3, 0x2, 0x2, 0x2, 0x202, 
       0x203, 0xc, 0x3, 0x2, 0x2, 0x203, 0x204, 0x7, 0x14, 0x2, 0x2, 0x204, 
       0x206, 0x5, 0x4e, 0x28, 0x4, 0x205, 0x202, 0x3, 0x2, 0x2, 0x2, 0x206, 
       0x209, 0x3, 0x2, 0x2, 0x2, 0x207, 0x205, 0x3, 0x2, 0x2, 0x2, 0x207, 
       0x208, 0x3, 0x2, 0x2, 0x2, 0x208, 0x4f, 0x3, 0x2, 0x2, 0x2, 0x209, 
       0x207, 0x3, 0x2, 0x2, 0x2, 0x20a, 0x20f, 0x5, 0x4e, 0x28, 0x2, 0x20b, 
       0x20c, 0x7, 0x65, 0x2, 0x2, 0x20c, 0x20e, 0x5, 0x4e, 0x28, 0x2, 0x20d, 
       0x20b, 0x3, 0x2, 0x2, 0x2, 0x20e, 0x211, 0x3, 0x2, 0x2, 0x2, 0x20f, 
       0x20d, 0x3, 0x2, 0x2, 0x2, 0x20f, 0x210, 0x3, 0x2, 0x2, 0x2, 0x210, 
       0x51, 0x3, 0x2, 0x2, 0x2, 0x211, 0x20f, 0x3, 0x2, 0x2, 0x2, 0x212, 
       0x214, 0x7, 0x5c, 0x2, 0x2, 0x213, 0x215, 0x5, 0x80, 0x41, 0x2, 0x214, 
       0x213, 0x3, 0x2, 0x2, 0x2, 0x214, 0x215, 0x3, 0x2, 0x2, 0x2, 0x215, 
       0x216, 0x3, 0x2, 0x2, 0x2, 0x216, 0x218, 0x7, 0x62, 0x2, 0x2, 0x217, 
       0x219, 0x5, 0x80, 0x41, 0x2, 0x218, 0x217, 0x3, 0x2, 0x2, 0x2, 0x218, 
       0x219, 0x3, 0x2, 0x2, 0x2, 0x219, 0x21c, 0x3, 0x2, 0x2, 0x2, 0x21a, 
       0x21b, 0x7, 0x62, 0x2, 0x2, 0x21b, 0x21d, 0x5, 0x80, 0x41, 0x2, 0x21c, 
       0x21a, 0x3, 0x2, 0x2, 0x2, 0x21c, 0x21d, 0x3, 0x2, 0x2, 0x2, 0x21d, 
       0x21e, 0x3, 0x2, 0x2, 0x2, 0x21e, 0x21f, 0x7, 0x5d, 0x2, 0x2, 0x21f, 
       0x53, 0x3, 0x2, 0x2, 0x2, 0x220, 0x221, 0x7, 0x15, 0x2, 0x2, 0x221, 
       0x222, 0x5, 0x56, 0x2c, 0x2, 0x222, 0x223, 0x5, 0x5a, 0x2e, 0x2, 
       0x223, 0x55, 0x3, 0x2, 0x2, 0x2, 0x224, 0x22a, 0x5, 0x58, 0x2d, 0x2, 
       0x225, 0x227, 0x7, 0x60, 0x2, 0x2, 0x226, 0x228, 0x5, 0x20, 0x11, 
       0x2, 0x227, 0x226, 0x3, 0x2, 0x2, 0x2, 0x227, 0x228, 0x3, 0x2, 0x2, 
       0x2, 0x228, 0x229, 0x3, 0x2, 0x2, 0x2, 0x229, 0x22b, 0x7, 0x61, 0x2, 
       0x2, 0x22a, 0x225, 0x3, 0x2, 0x2, 0x2, 0x22a, 0x22b, 0x3, 0x2, 0x2, 
       0x2, 0x22b, 0x22c, 0x3, 0x2, 0x2, 0x2, 0x22c, 0x22d, 0x5, 0x20, 0x11, 
       0x2, 0x22d, 0x57, 0x3, 0x2, 0x2, 0x2, 0x22e, 0x22f, 0x9, 0x6, 0x2, 
       0x2, 0x22f, 0x59, 0x3, 0x2, 0x2, 0x2, 0x230, 0x235, 0x7, 0x5e, 0x2, 
       0x2, 0x231, 0x234, 0x5, 0x60, 0x31, 0x2, 0x232, 0x234, 0x5, 0x5c, 
       0x2f, 0x2, 0x233, 0x231, 0x3, 0x2, 0x2, 0x2, 0x233, 0x232, 0x3, 0x2, 
       0x2, 0x2, 0x234, 0x237, 0x3, 0x2, 0x2, 0x2, 0x235, 0x233, 0x3, 0x2, 
       0x2, 0x2, 0x235, 0x236, 0x3, 0x2, 0x2, 0x2, 0x236, 0x238, 0x3, 0x2, 
       0x2, 0x2, 0x237, 0x235, 0x3, 0x2, 0x2, 0x2, 0x238, 0x239, 0x7, 0x5f, 
       0x2, 0x2, 0x239, 0x5b, 0x3, 0x2, 0x2, 0x2, 0x23a, 0x23b, 0x5, 0xae, 
       0x58, 0x2, 0x23b, 0x23c, 0x5, 0x5e, 0x30, 0x2, 0x23c, 0x5d, 0x3, 
       0x2, 0x2, 0x2, 0x23d, 0x247, 0x5, 0x60, 0x31, 0x2, 0x23e, 0x242, 
       0x7, 0x5e, 0x2, 0x2, 0x23f, 0x241, 0x5, 0x60, 0x31, 0x2, 0x240, 0x23f, 
       0x3, 0x2, 0x2, 0x2, 0x241, 0x244, 0x3, 0x2, 0x2, 0x2, 0x242, 0x240, 
       0x3, 0x2, 0x2, 0x2, 0x242, 0x243, 0x3, 0x2, 0x2, 0x2, 0x243, 0x245, 
       0x3, 0x2, 0x2, 0x2, 0x244, 0x242, 0x3, 0x2, 0x2, 0x2, 0x245, 0x247, 
       0x7, 0x5f, 0x2, 0x2, 0x246, 0x23d, 0x3, 0x2, 0x2, 0x2, 0x246, 0x23e, 
       0x3, 0x2, 0x2, 0x2, 0x247, 0x5f, 0x3, 0x2, 0x2, 0x2, 0x248, 0x249, 
       0x5, 0x62, 0x32, 0x2, 0x249, 0x24a, 0x7, 0x63, 0x2, 0x2, 0x24a, 0x24d, 
       0x3, 0x2, 0x2, 0x2, 0x24b, 0x24d, 0x5, 0xcc, 0x67, 0x2, 0x24c, 0x248, 
       0x3, 0x2, 0x2, 0x2, 0x24c, 0x24b, 0x3, 0x2, 0x2, 0x2, 0x24d, 0x61, 
       0x3, 0x2, 0x2, 0x2, 0x24e, 0x254, 0x5, 0x74, 0x3b, 0x2, 0x24f, 0x254, 
       0x5, 0x64, 0x33, 0x2, 0x250, 0x254, 0x5, 0x68, 0x35, 0x2, 0x251, 
       0x254, 0x5, 0x66, 0x34, 0x2, 0x252, 0x254, 0x5, 0x6c, 0x37, 0x2, 
       0x253, 0x24e, 0x3, 0x2, 0x2, 0x2, 0x253, 0x24f, 0x3, 0x2, 0x2, 0x2, 
       0x253, 0x250, 0x3, 0x2, 0x2, 0x2, 0x253, 0x251, 0x3, 0x2, 0x2, 0x2, 
       0x253, 0x252, 0x3, 0x2, 0x2, 0x2, 0x254, 0x63, 0x3, 0x2, 0x2, 0x2, 
       0x255, 0x257, 0x5, 0x6e, 0x38, 0x2, 0x256, 0x255, 0x3, 0x2, 0x2, 
       0x2, 0x257, 0x25a, 0x3, 0x2, 0x2, 0x2, 0x258, 0x256, 0x3, 0x2, 0x2, 
       0x2, 0x258, 0x259, 0x3, 0x2, 0x2, 0x2, 0x259, 0x25b, 0x3, 0x2, 0x2, 
       0x2, 0x25a, 0x258, 0x3, 0x2, 0x2, 0x2, 0x25b, 0x25c, 0x7, 0x18, 0x2, 
       0x2, 0x25c, 0x25d, 0x7, 0x60, 0x2, 0x2, 0x25d, 0x25e, 0x5, 0x80, 
       0x41, 0x2, 0x25e, 0x260, 0x7, 0x61, 0x2, 0x2, 0x25f, 0x261, 0x5, 
       0x50, 0x29, 0x2, 0x260, 0x25f, 0x3, 0x2, 0x2, 0x2, 0x260, 0x261, 
       0x3, 0x2, 0x2, 0x2, 0x261, 0x65, 0x3, 0x2, 0x2, 0x2, 0x262, 0x263, 
       0x7, 0x19, 0x2, 0x2, 0x263, 0x264, 0x5, 0x50, 0x29, 0x2, 0x264, 0x67, 
       0x3, 0x2, 0x2, 0x2, 0x265, 0x266, 0x7, 0x1a, 0x2, 0x2, 0x266, 0x267, 
       0x5, 0x50, 0x29, 0x2, 0x267, 0x69, 0x3, 0x2, 0x2, 0x2, 0x268, 0x26b, 
       0x5, 0x68, 0x35, 0x2, 0x269, 0x26a, 0x7, 0x67, 0x2, 0x2, 0x26a, 0x26c, 
       0x5, 0x50, 0x29, 0x2, 0x26b, 0x269, 0x3, 0x2, 0x2, 0x2, 0x26b, 0x26c, 
       0x3, 0x2, 0x2, 0x2, 0x26c, 0x272, 0x3, 0x2, 0x2, 0x2, 0x26d, 0x26e, 
       0x5, 0x50, 0x29, 0x2, 0x26e, 0x26f, 0x7, 0x66, 0x2, 0x2, 0x26f, 0x270, 
       0x5, 0x68, 0x35, 0x2, 0x270, 0x272, 0x3, 0x2, 0x2, 0x2, 0x271, 0x268, 
       0x3, 0x2, 0x2, 0x2, 0x271, 0x26d, 0x3, 0x2, 0x2, 0x2, 0x272, 0x6b, 
       0x3, 0x2, 0x2, 0x2, 0x273, 0x275, 0x7, 0x1b, 0x2, 0x2, 0x274, 0x276, 
       0x5, 0x50, 0x29, 0x2, 0x275, 0x274, 0x3, 0x2, 0x2, 0x2, 0x275, 0x276, 
       0x3, 0x2, 0x2, 0x2, 0x276, 0x6d, 0x3, 0x2, 0x2, 0x2, 0x277, 0x27b, 
       0x7, 0x1c, 0x2, 0x2, 0x278, 0x27b, 0x5, 0x70, 0x39, 0x2, 0x279, 0x27b, 
       0x5, 0x72, 0x3a, 0x2, 0x27a, 0x277, 0x3, 0x2, 0x2, 0x2, 0x27a, 0x278, 
       0x3, 0x2, 0x2, 0x2, 0x27a, 0x279, 0x3, 0x2, 0x2, 0x2, 0x27b, 0x27c, 
       0x3, 0x2, 0x2, 0x2, 0x27c, 0x27d, 0x7, 0x1d, 0x2, 0x2, 0x27d, 0x6f, 
       0x3, 0x2, 0x2, 0x2, 0x27e, 0x27f, 0x7, 0x1e, 0x2, 0x2, 0x27f, 0x280, 
       0x7, 0x60, 0x2, 0x2, 0x280, 0x281, 0x5, 0x80, 0x41, 0x2, 0x281, 0x282, 
       0x7, 0x61, 0x2, 0x2, 0x282, 0x71, 0x3, 0x2, 0x2, 0x2, 0x283, 0x288, 
       0x9, 0x7, 0x2, 0x2, 0x284, 0x285, 0x7, 0x60, 0x2, 0x2, 0x285, 0x286, 
       0x5, 0x80, 0x41, 0x2, 0x286, 0x287, 0x7, 0x61, 0x2, 0x2, 0x287, 0x289, 
       0x3, 0x2, 0x2, 0x2, 0x288, 0x284, 0x3, 0x2, 0x2, 0x2, 0x288, 0x289, 
       0x3, 0x2, 0x2, 0x2, 0x289, 0x73, 0x3, 0x2, 0x2, 0x2, 0x28a, 0x28c, 
       0x5, 0x6e, 0x38, 0x2, 0x28b, 0x28a, 0x3, 0x2, 0x2, 0x2, 0x28c, 0x28f, 
       0x3, 0x2, 0x2, 0x2, 0x28d, 0x28b, 0x3, 0x2, 0x2, 0x2, 0x28d, 0x28e, 
       0x3, 0x2, 0x2, 0x2, 0x28e, 0x290, 0x3, 0x2, 0x2, 0x2, 0x28f, 0x28d, 
       0x3, 0x2, 0x2, 0x2, 0x290, 0x295, 0x5, 0x58, 0x2d, 0x2, 0x291, 0x292, 
       0x7, 0x60, 0x2, 0x2, 0x292, 0x293, 0x5, 0xa2, 0x52, 0x2, 0x293, 0x294, 
       0x7, 0x61, 0x2, 0x2, 0x294, 0x296, 0x3, 0x2, 0x2, 0x2, 0x295, 0x291, 
       0x3, 0x2, 0x2, 0x2, 0x295, 0x296, 0x3, 0x2, 0x2, 0x2, 0x296, 0x297, 
       0x3, 0x2, 0x2, 0x2, 0x297, 0x298, 0x5, 0x50, 0x29, 0x2, 0x298, 0x75, 
       0x3, 0x2, 0x2, 0x2, 0x299, 0x29a, 0x9, 0x8, 0x2, 0x2, 0x29a, 0x77, 
       0x3, 0x2, 0x2, 0x2, 0x29b, 0x29c, 0x9, 0x9, 0x2, 0x2, 0x29c, 0x79, 
       0x3, 0x2, 0x2, 0x2, 0x29d, 0x29e, 0x9, 0xa, 0x2, 0x2, 0x29e, 0x7b, 
       0x3, 0x2, 0x2, 0x2, 0x29f, 0x2a0, 0x9, 0xb, 0x2, 0x2, 0x2a0, 0x7d, 
       0x3, 0x2, 0x2, 0x2, 0x2a1, 0x2a2, 0x5, 0x80, 0x41, 0x2, 0x2a2, 0x2a3, 
       0x7, 0x63, 0x2, 0x2, 0x2a3, 0x7f, 0x3, 0x2, 0x2, 0x2, 0x2a4, 0x2a5, 
       0x8, 0x41, 0x1, 0x2, 0x2a5, 0x2a9, 0x5, 0x98, 0x4d, 0x2, 0x2a6, 0x2a9, 
       0x5, 0x94, 0x4b, 0x2, 0x2a7, 0x2a9, 0x5, 0x82, 0x42, 0x2, 0x2a8, 
       0x2a4, 0x3, 0x2, 0x2, 0x2, 0x2a8, 0x2a6, 0x3, 0x2, 0x2, 0x2, 0x2a8, 
       0x2a7, 0x3, 0x2, 0x2, 0x2, 0x2a9, 0x2af, 0x3, 0x2, 0x2, 0x2, 0x2aa, 
       0x2ab, 0xc, 0x3, 0x2, 0x2, 0x2ab, 0x2ac, 0x7, 0x14, 0x2, 0x2, 0x2ac, 
       0x2ae, 0x5, 0x82, 0x42, 0x2, 0x2ad, 0x2aa, 0x3, 0x2, 0x2, 0x2, 0x2ae, 
       0x2b1, 0x3, 0x2, 0x2, 0x2, 0x2af, 0x2ad, 0x3, 0x2, 0x2, 0x2, 0x2af, 
       0x2b0, 0x3, 0x2, 0x2, 0x2, 0x2b0, 0x81, 0x3, 0x2, 0x2, 0x2, 0x2b1, 
       0x2af, 0x3, 0x2, 0x2, 0x2, 0x2b2, 0x2b3, 0x8, 0x42, 0x1, 0x2, 0x2b3, 
       0x2b4, 0x5, 0x84, 0x43, 0x2, 0x2b4, 0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2b5, 
       0x2b6, 0xc, 0x3, 0x2, 0x2, 0x2b6, 0x2b7, 0x7, 0x29, 0x2, 0x2, 0x2b7, 
       0x2b9, 0x5, 0x84, 0x43, 0x2, 0x2b8, 0x2b5, 0x3, 0x2, 0x2, 0x2, 0x2b9, 
       0x2bc, 0x3, 0x2, 0x2, 0x2, 0x2ba, 0x2b8, 0x3, 0x2, 0x2, 0x2, 0x2ba, 
       0x2bb, 0x3, 0x2, 0x2, 0x2, 0x2bb, 0x83, 0x3, 0x2, 0x2, 0x2, 0x2bc, 
       0x2ba, 0x3, 0x2, 0x2, 0x2, 0x2bd, 0x2be, 0x8, 0x43, 0x1, 0x2, 0x2be, 
       0x2bf, 0x5, 0x86, 0x44, 0x2, 0x2bf, 0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c0, 
       0x2c1, 0xc, 0x3, 0x2, 0x2, 0x2c1, 0x2c2, 0x7, 0x2a, 0x2, 0x2, 0x2c2, 
       0x2c4, 0x5, 0x86, 0x44, 0x2, 0x2c3, 0x2c0, 0x3, 0x2, 0x2, 0x2, 0x2c4, 
       0x2c7, 0x3, 0x2, 0x2, 0x2, 0x2c5, 0x2c3, 0x3, 0x2, 0x2, 0x2, 0x2c5, 
       0x2c6, 0x3, 0x2, 0x2, 0x2, 0x2c6, 0x85, 0x3, 0x2, 0x2, 0x2, 0x2c7, 
       0x2c5, 0x3, 0x2, 0x2, 0x2, 0x2c8, 0x2c9, 0x8, 0x44, 0x1, 0x2, 0x2c9, 
       0x2ca, 0x5, 0x88, 0x45, 0x2, 0x2ca, 0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2cb, 
       0x2cc, 0xc, 0x3, 0x2, 0x2, 0x2cc, 0x2cd, 0x7, 0x2b, 0x2, 0x2, 0x2cd, 
       0x2cf, 0x5, 0x88, 0x45, 0x2, 0x2ce, 0x2cb, 0x3, 0x2, 0x2, 0x2, 0x2cf, 
       0x2d2, 0x3, 0x2, 0x2, 0x2, 0x2d0, 0x2ce, 0x3, 0x2, 0x2, 0x2, 0x2d0, 
       0x2d1, 0x3, 0x2, 0x2, 0x2, 0x2d1, 0x87, 0x3, 0x2, 0x2, 0x2, 0x2d2, 
       0x2d0, 0x3, 0x2, 0x2, 0x2, 0x2d3, 0x2d4, 0x8, 0x45, 0x1, 0x2, 0x2d4, 
       0x2d5, 0x5, 0x8a, 0x46, 0x2, 0x2d5, 0x2db, 0x3, 0x2, 0x2, 0x2, 0x2d6, 
       0x2d7, 0xc, 0x3, 0x2, 0x2, 0x2d7, 0x2d8, 0x7, 0x2c, 0x2, 0x2, 0x2d8, 
       0x2da, 0x5, 0x8a, 0x46, 0x2, 0x2d9, 0x2d6, 0x3, 0x2, 0x2, 0x2, 0x2da, 
       0x2dd, 0x3, 0x2, 0x2, 0x2, 0x2db, 0x2d9, 0x3, 0x2, 0x2, 0x2, 0x2db, 
       0x2dc, 0x3, 0x2, 0x2, 0x2, 0x2dc, 0x89, 0x3, 0x2, 0x2, 0x2, 0x2dd, 
       0x2db, 0x3, 0x2, 0x2, 0x2, 0x2de, 0x2df, 0x8, 0x46, 0x1, 0x2, 0x2df, 
       0x2e0, 0x5, 0x8c, 0x47, 0x2, 0x2e0, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2e1, 
       0x2e2, 0xc, 0x3, 0x2, 0x2, 0x2e2, 0x2e3, 0x5, 0x7a, 0x3e, 0x2, 0x2e3, 
       0x2e4, 0x5, 0x8c, 0x47, 0x2, 0x2e4, 0x2e6, 0x3, 0x2, 0x2, 0x2, 0x2e5, 
       0x2e1, 0x3, 0x2, 0x2, 0x2, 0x2e6, 0x2e9, 0x3, 0x2, 0x2, 0x2, 0x2e7, 
       0x2e5, 0x3, 0x2, 0x2, 0x2, 0x2e7, 0x2e8, 0x3, 0x2, 0x2, 0x2, 0x2e8, 
       0x8b, 0x3, 0x2, 0x2, 0x2, 0x2e9, 0x2e7, 0x3, 0x2, 0x2, 0x2, 0x2ea, 
       0x2eb, 0x8, 0x47, 0x1, 0x2, 0x2eb, 0x2ec, 0x5, 0x8e, 0x48, 0x2, 0x2ec, 
       0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2ed, 0x2ee, 0xc, 0x3, 0x2, 0x2, 0x2ee, 
       0x2ef, 0x5, 0x78, 0x3d, 0x2, 0x2ef, 0x2f0, 0x5, 0x8e, 0x48, 0x2, 
       0x2f0, 0x2f2, 0x3, 0x2, 0x2, 0x2, 0x2f1, 0x2ed, 0x3, 0x2, 0x2, 0x2, 
       0x2f2, 0x2f5, 0x3, 0x2, 0x2, 0x2, 0x2f3, 0x2f1, 0x3, 0x2, 0x2, 0x2, 
       0x2f3, 0x2f4, 0x3, 0x2, 0x2, 0x2, 0x2f4, 0x8d, 0x3, 0x2, 0x2, 0x2, 
       0x2f5, 0x2f3, 0x3, 0x2, 0x2, 0x2, 0x2f6, 0x2f7, 0x8, 0x48, 0x1, 0x2, 
       0x2f7, 0x2f8, 0x5, 0x90, 0x49, 0x2, 0x2f8, 0x2fe, 0x3, 0x2, 0x2, 
       0x2, 0x2f9, 0x2fa, 0xc, 0x3, 0x2, 0x2, 0x2fa, 0x2fb, 0x9, 0xc, 0x2, 
       0x2, 0x2fb, 0x2fd, 0x5, 0x90, 0x49, 0x2, 0x2fc, 0x2f9, 0x3, 0x2, 
       0x2, 0x2, 0x2fd, 0x300, 0x3, 0x2, 0x2, 0x2, 0x2fe, 0x2fc, 0x3, 0x2, 
       0x2, 0x2, 0x2fe, 0x2ff, 0x3, 0x2, 0x2, 0x2, 0x2ff, 0x8f, 0x3, 0x2, 
       0x2, 0x2, 0x300, 0x2fe, 0x3, 0x2, 0x2, 0x2, 0x301, 0x302, 0x8, 0x49, 
       0x1, 0x2, 0x302, 0x303, 0x5, 0x92, 0x4a, 0x2, 0x303, 0x309, 0x3, 
       0x2, 0x2, 0x2, 0x304, 0x305, 0xc, 0x3, 0x2, 0x2, 0x305, 0x306, 0x9, 
       0xd, 0x2, 0x2, 0x306, 0x308, 0x5, 0x92, 0x4a, 0x2, 0x307, 0x304, 
       0x3, 0x2, 0x2, 0x2, 0x308, 0x30b, 0x3, 0x2, 0x2, 0x2, 0x309, 0x307, 
       0x3, 0x2, 0x2, 0x2, 0x309, 0x30a, 0x3, 0x2, 0x2, 0x2, 0x30a, 0x91, 
       0x3, 0x2, 0x2, 0x2, 0x30b, 0x309, 0x3, 0x2, 0x2, 0x2, 0x30c, 0x30d, 
       0x8, 0x4a, 0x1, 0x2, 0x30d, 0x310, 0x5, 0x96, 0x4c, 0x2, 0x30e, 0x310, 
       0x5, 0x94, 0x4b, 0x2, 0x30f, 0x30c, 0x3, 0x2, 0x2, 0x2, 0x30f, 0x30e, 
       0x3, 0x2, 0x2, 0x2, 0x310, 0x319, 0x3, 0x2, 0x2, 0x2, 0x311, 0x312, 
       0xc, 0x3, 0x2, 0x2, 0x312, 0x315, 0x9, 0xe, 0x2, 0x2, 0x313, 0x316, 
       0x5, 0x96, 0x4c, 0x2, 0x314, 0x316, 0x5, 0x94, 0x4b, 0x2, 0x315, 
       0x313, 0x3, 0x2, 0x2, 0x2, 0x315, 0x314, 0x3, 0x2, 0x2, 0x2, 0x316, 
       0x318, 0x3, 0x2, 0x2, 0x2, 0x317, 0x311, 0x3, 0x2, 0x2, 0x2, 0x318, 
       0x31b, 0x3, 0x2, 0x2, 0x2, 0x319, 0x317, 0x3, 0x2, 0x2, 0x2, 0x319, 
       0x31a, 0x3, 0x2, 0x2, 0x2, 0x31a, 0x93, 0x3, 0x2, 0x2, 0x2, 0x31b, 
       0x319, 0x3, 0x2, 0x2, 0x2, 0x31c, 0x31d, 0x5, 0x76, 0x3c, 0x2, 0x31d, 
       0x31e, 0x5, 0x96, 0x4c, 0x2, 0x31e, 0x95, 0x3, 0x2, 0x2, 0x2, 0x31f, 
       0x325, 0x5, 0x98, 0x4d, 0x2, 0x320, 0x321, 0x5, 0x98, 0x4d, 0x2, 
       0x321, 0x322, 0x7, 0x2f, 0x2, 0x2, 0x322, 0x323, 0x5, 0x96, 0x4c, 
       0x2, 0x323, 0x325, 0x3, 0x2, 0x2, 0x2, 0x324, 0x31f, 0x3, 0x2, 0x2, 
       0x2, 0x324, 0x320, 0x3, 0x2, 0x2, 0x2, 0x325, 0x97, 0x3, 0x2, 0x2, 
       0x2, 0x326, 0x327, 0x8, 0x4d, 0x1, 0x2, 0x327, 0x336, 0x7, 0x6f, 
       0x2, 0x2, 0x328, 0x336, 0x7, 0x72, 0x2, 0x2, 0x329, 0x336, 0x7, 0x74, 
       0x2, 0x2, 0x32a, 0x336, 0x7, 0x6e, 0x2, 0x2, 0x32b, 0x336, 0x5, 0x9a, 
       0x4e, 0x2, 0x32c, 0x336, 0x7, 0x73, 0x2, 0x2, 0x32d, 0x336, 0x7, 
       0x76, 0x2, 0x2, 0x32e, 0x336, 0x5, 0x9c, 0x4f, 0x2, 0x32f, 0x336, 
       0x5, 0xba, 0x5e, 0x2, 0x330, 0x336, 0x5, 0xc6, 0x64, 0x2, 0x331, 
       0x332, 0x7, 0x60, 0x2, 0x2, 0x332, 0x333, 0x5, 0x80, 0x41, 0x2, 0x333, 
       0x334, 0x7, 0x61, 0x2, 0x2, 0x334, 0x336, 0x3, 0x2, 0x2, 0x2, 0x335, 
       0x326, 0x3, 0x2, 0x2, 0x2, 0x335, 0x328, 0x3, 0x2, 0x2, 0x2, 0x335, 
       0x329, 0x3, 0x2, 0x2, 0x2, 0x335, 0x32a, 0x3, 0x2, 0x2, 0x2, 0x335, 
       0x32b, 0x3, 0x2, 0x2, 0x2, 0x335, 0x32c, 0x3, 0x2, 0x2, 0x2, 0x335, 
       0x32d, 0x3, 0x2, 0x2, 0x2, 0x335, 0x32e, 0x3, 0x2, 0x2, 0x2, 0x335, 
       0x32f, 0x3, 0x2, 0x2, 0x2, 0x335, 0x330, 0x3, 0x2, 0x2, 0x2, 0x335, 
       0x331, 0x3, 0x2, 0x2, 0x2, 0x336, 0x33e, 0x3, 0x2, 0x2, 0x2, 0x337, 
       0x338, 0xc, 0x3, 0x2, 0x2, 0x338, 0x339, 0x7, 0x5c, 0x2, 0x2, 0x339, 
       0x33a, 0x5, 0x80, 0x41, 0x2, 0x33a, 0x33b, 0x7, 0x5d, 0x2, 0x2, 0x33b, 
       0x33d, 0x3, 0x2, 0x2, 0x2, 0x33c, 0x337, 0x3, 0x2, 0x2, 0x2, 0x33d, 
       0x340, 0x3, 0x2, 0x2, 0x2, 0x33e, 0x33c, 0x3, 0x2, 0x2, 0x2, 0x33e, 
       0x33f, 0x3, 0x2, 0x2, 0x2, 0x33f, 0x99, 0x3, 0x2, 0x2, 0x2, 0x340, 
       0x33e, 0x3, 0x2, 0x2, 0x2, 0x341, 0x342, 0x9, 0xf, 0x2, 0x2, 0x342, 
       0x9b, 0x3, 0x2, 0x2, 0x2, 0x343, 0x346, 0x5, 0x9e, 0x50, 0x2, 0x344, 
       0x346, 0x5, 0xa0, 0x51, 0x2, 0x345, 0x343, 0x3, 0x2, 0x2, 0x2, 0x345, 
       0x344, 0x3, 0x2, 0x2, 0x2, 0x346, 0x347, 0x3, 0x2, 0x2, 0x2, 0x347, 
       0x348, 0x7, 0x60, 0x2, 0x2, 0x348, 0x349, 0x5, 0xa2, 0x52, 0x2, 0x349, 
       0x34a, 0x7, 0x61, 0x2, 0x2, 0x34a, 0x9d, 0x3, 0x2, 0x2, 0x2, 0x34b, 
       0x34c, 0x9, 0x10, 0x2, 0x2, 0x34c, 0x9f, 0x3, 0x2, 0x2, 0x2, 0x34d, 
       0x34e, 0x5, 0x30, 0x19, 0x2, 0x34e, 0xa1, 0x3, 0x2, 0x2, 0x2, 0x34f, 
       0x354, 0x5, 0x80, 0x41, 0x2, 0x350, 0x351, 0x7, 0x65, 0x2, 0x2, 0x351, 
       0x353, 0x5, 0x80, 0x41, 0x2, 0x352, 0x350, 0x3, 0x2, 0x2, 0x2, 0x353, 
       0x356, 0x3, 0x2, 0x2, 0x2, 0x354, 0x352, 0x3, 0x2, 0x2, 0x2, 0x354, 
       0x355, 0x3, 0x2, 0x2, 0x2, 0x355, 0xa3, 0x3, 0x2, 0x2, 0x2, 0x356, 
       0x354, 0x3, 0x2, 0x2, 0x2, 0x357, 0x358, 0x7, 0x66, 0x2, 0x2, 0x358, 
       0x359, 0x5, 0x80, 0x41, 0x2, 0x359, 0xa5, 0x3, 0x2, 0x2, 0x2, 0x35a, 
       0x35b, 0x9, 0x11, 0x2, 0x2, 0x35b, 0xa7, 0x3, 0x2, 0x2, 0x2, 0x35c, 
       0x35d, 0x7, 0x5e, 0x2, 0x2, 0x35d, 0x35e, 0x5, 0xa2, 0x52, 0x2, 0x35e, 
       0x35f, 0x7, 0x5f, 0x2, 0x2, 0x35f, 0x363, 0x3, 0x2, 0x2, 0x2, 0x360, 
       0x363, 0x5, 0x52, 0x2a, 0x2, 0x361, 0x363, 0x7, 0x73, 0x2, 0x2, 0x362, 
       0x35c, 0x3, 0x2, 0x2, 0x2, 0x362, 0x360, 0x3, 0x2, 0x2, 0x2, 0x362, 
       0x361, 0x3, 0x2, 0x2, 0x2, 0x363, 0xa9, 0x3, 0x2, 0x2, 0x2, 0x364, 
       0x370, 0x5, 0x10, 0x9, 0x2, 0x365, 0x370, 0x5, 0xb6, 0x5c, 0x2, 0x366, 
       0x36b, 0x7, 0x5e, 0x2, 0x2, 0x367, 0x36a, 0x5, 0x10, 0x9, 0x2, 0x368, 
       0x36a, 0x5, 0xb6, 0x5c, 0x2, 0x369, 0x367, 0x3, 0x2, 0x2, 0x2, 0x369, 
       0x368, 0x3, 0x2, 0x2, 0x2, 0x36a, 0x36d, 0x3, 0x2, 0x2, 0x2, 0x36b, 
       0x369, 0x3, 0x2, 0x2, 0x2, 0x36b, 0x36c, 0x3, 0x2, 0x2, 0x2, 0x36c, 
       0x36e, 0x3, 0x2, 0x2, 0x2, 0x36d, 0x36b, 0x3, 0x2, 0x2, 0x2, 0x36e, 
       0x370, 0x7, 0x5f, 0x2, 0x2, 0x36f, 0x364, 0x3, 0x2, 0x2, 0x2, 0x36f, 
       0x365, 0x3, 0x2, 0x2, 0x2, 0x36f, 0x366, 0x3, 0x2, 0x2, 0x2, 0x370, 
       0xab, 0x3, 0x2, 0x2, 0x2, 0x371, 0x372, 0x7, 0x47, 0x2, 0x2, 0x372, 
       0x373, 0x7, 0x60, 0x2, 0x2, 0x373, 0x374, 0x5, 0x80, 0x41, 0x2, 0x374, 
       0x375, 0x7, 0x61, 0x2, 0x2, 0x375, 0x378, 0x5, 0xaa, 0x56, 0x2, 0x376, 
       0x377, 0x7, 0x48, 0x2, 0x2, 0x377, 0x379, 0x5, 0xaa, 0x56, 0x2, 0x378, 
       0x376, 0x3, 0x2, 0x2, 0x2, 0x378, 0x379, 0x3, 0x2, 0x2, 0x2, 0x379, 
       0xad, 0x3, 0x2, 0x2, 0x2, 0x37a, 0x37b, 0x7, 0x49, 0x2, 0x2, 0x37b, 
       0x37c, 0x7, 0x73, 0x2, 0x2, 0x37c, 0x37d, 0x7, 0x4a, 0x2, 0x2, 0x37d, 
       0x384, 0x5, 0xa8, 0x55, 0x2, 0x37e, 0x37f, 0x7, 0x4b, 0x2, 0x2, 0x37f, 
       0x380, 0x7, 0x60, 0x2, 0x2, 0x380, 0x381, 0x5, 0x80, 0x41, 0x2, 0x381, 
       0x382, 0x7, 0x61, 0x2, 0x2, 0x382, 0x384, 0x3, 0x2, 0x2, 0x2, 0x383, 
       0x37a, 0x3, 0x2, 0x2, 0x2, 0x383, 0x37e, 0x3, 0x2, 0x2, 0x2, 0x384, 
       0xaf, 0x3, 0x2, 0x2, 0x2, 0x385, 0x386, 0x5, 0xae, 0x58, 0x2, 0x386, 
       0x387, 0x5, 0xaa, 0x56, 0x2, 0x387, 0xb1, 0x3, 0x2, 0x2, 0x2, 0x388, 
       0x389, 0x7, 0x4c, 0x2, 0x2, 0x389, 0x38a, 0x7, 0x63, 0x2, 0x2, 0x38a, 
       0xb3, 0x3, 0x2, 0x2, 0x2, 0x38b, 0x38e, 0x7, 0x4d, 0x2, 0x2, 0x38c, 
       0x38f, 0x5, 0x80, 0x41, 0x2, 0x38d, 0x38f, 0x5, 0x68, 0x35, 0x2, 
       0x38e, 0x38c, 0x3, 0x2, 0x2, 0x2, 0x38e, 0x38d, 0x3, 0x2, 0x2, 0x2, 
       0x38e, 0x38f, 0x3, 0x2, 0x2, 0x2, 0x38f, 0x390, 0x3, 0x2, 0x2, 0x2, 
       0x390, 0x391, 0x7, 0x63, 0x2, 0x2, 0x391, 0xb5, 0x3, 0x2, 0x2, 0x2, 
       0x392, 0x393, 0x9, 0x12, 0x2, 0x2, 0x393, 0x397, 0x7, 0x63, 0x2, 
       0x2, 0x394, 0x397, 0x5, 0xb2, 0x5a, 0x2, 0x395, 0x397, 0x5, 0xb4, 
       0x5b, 0x2, 0x396, 0x392, 0x3, 0x2, 0x2, 0x2, 0x396, 0x394, 0x3, 0x2, 
       0x2, 0x2, 0x396, 0x395, 0x3, 0x2, 0x2, 0x2, 0x397, 0xb7, 0x3, 0x2, 
       0x2, 0x2, 0x398, 0x399, 0x7, 0x50, 0x2, 0x2, 0x399, 0x39a, 0x7, 0x73, 
       0x2, 0x2, 0x39a, 0x39c, 0x7, 0x60, 0x2, 0x2, 0x39b, 0x39d, 0x5, 0x42, 
       0x22, 0x2, 0x39c, 0x39b, 0x3, 0x2, 0x2, 0x2, 0x39c, 0x39d, 0x3, 0x2, 
       0x2, 0x2, 0x39d, 0x39e, 0x3, 0x2, 0x2, 0x2, 0x39e, 0x3a0, 0x7, 0x61, 
       0x2, 0x2, 0x39f, 0x3a1, 0x5, 0x1a, 0xe, 0x2, 0x3a0, 0x39f, 0x3, 0x2, 
       0x2, 0x2, 0x3a0, 0x3a1, 0x3, 0x2, 0x2, 0x2, 0x3a1, 0x3a2, 0x3, 0x2, 
       0x2, 0x2, 0x3a2, 0x3a3, 0x7, 0x63, 0x2, 0x2, 0x3a3, 0xb9, 0x3, 0x2, 
       0x2, 0x2, 0x3a4, 0x3a5, 0x7, 0x73, 0x2, 0x2, 0x3a5, 0x3a7, 0x7, 0x60, 
       0x2, 0x2, 0x3a6, 0x3a8, 0x5, 0xa2, 0x52, 0x2, 0x3a7, 0x3a6, 0x3, 
       0x2, 0x2, 0x2, 0x3a7, 0x3a8, 0x3, 0x2, 0x2, 0x2, 0x3a8, 0x3a9, 0x3, 
       0x2, 0x2, 0x2, 0x3a9, 0x3aa, 0x7, 0x61, 0x2, 0x2, 0x3aa, 0xbb, 0x3, 
       0x2, 0x2, 0x2, 0x3ab, 0x3ac, 0x7, 0x51, 0x2, 0x2, 0x3ac, 0x3ad, 0x7, 
       0x73, 0x2, 0x2, 0x3ad, 0x3af, 0x7, 0x60, 0x2, 0x2, 0x3ae, 0x3b0, 
       0x5, 0x4a, 0x26, 0x2, 0x3af, 0x3ae, 0x3, 0x2, 0x2, 0x2, 0x3af, 0x3b0, 
       0x3, 0x2, 0x2, 0x2, 0x3b0, 0x3b1, 0x3, 0x2, 0x2, 0x2, 0x3b1, 0x3b3, 
       0x7, 0x61, 0x2, 0x2, 0x3b2, 0x3b4, 0x5, 0x1a, 0xe, 0x2, 0x3b3, 0x3b2, 
       0x3, 0x2, 0x2, 0x2, 0x3b3, 0x3b4, 0x3, 0x2, 0x2, 0x2, 0x3b4, 0x3b5, 
       0x3, 0x2, 0x2, 0x2, 0x3b5, 0x3b6, 0x5, 0xbe, 0x60, 0x2, 0x3b6, 0xbd, 
       0x3, 0x2, 0x2, 0x2, 0x3b7, 0x3bb, 0x7, 0x5e, 0x2, 0x2, 0x3b8, 0x3ba, 
       0x5, 0x10, 0x9, 0x2, 0x3b9, 0x3b8, 0x3, 0x2, 0x2, 0x2, 0x3ba, 0x3bd, 
       0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3b9, 0x3, 0x2, 0x2, 0x2, 0x3bb, 0x3bc, 
       0x3, 0x2, 0x2, 0x2, 0x3bc, 0x3bf, 0x3, 0x2, 0x2, 0x2, 0x3bd, 0x3bb, 
       0x3, 0x2, 0x2, 0x2, 0x3be, 0x3c0, 0x5, 0xb4, 0x5b, 0x2, 0x3bf, 0x3be, 
       0x3, 0x2, 0x2, 0x2, 0x3bf, 0x3c0, 0x3, 0x2, 0x2, 0x2, 0x3c0, 0x3c1, 
       0x3, 0x2, 0x2, 0x2, 0x3c1, 0x3c2, 0x7, 0x5f, 0x2, 0x2, 0x3c2, 0xbf, 
       0x3, 0x2, 0x2, 0x2, 0x3c3, 0x3c4, 0x7, 0x52, 0x2, 0x2, 0x3c4, 0x3c8, 
       0x7, 0x5e, 0x2, 0x2, 0x3c5, 0x3c7, 0x5, 0x10, 0x9, 0x2, 0x3c6, 0x3c5, 
       0x3, 0x2, 0x2, 0x2, 0x3c7, 0x3ca, 0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3c6, 
       0x3, 0x2, 0x2, 0x2, 0x3c8, 0x3c9, 0x3, 0x2, 0x2, 0x2, 0x3c9, 0x3cb, 
       0x3, 0x2, 0x2, 0x2, 0x3ca, 0x3c8, 0x3, 0x2, 0x2, 0x2, 0x3cb, 0x3cc, 
       0x7, 0x5f, 0x2, 0x2, 0x3cc, 0xc1, 0x3, 0x2, 0x2, 0x2, 0x3cd, 0x3ce, 
       0x9, 0x13, 0x2, 0x2, 0x3ce, 0xc3, 0x3, 0x2, 0x2, 0x2, 0x3cf, 0x3d1, 
       0x7, 0x55, 0x2, 0x2, 0x3d0, 0x3d2, 0x5, 0x1c, 0xf, 0x2, 0x3d1, 0x3d0, 
       0x3, 0x2, 0x2, 0x2, 0x3d1, 0x3d2, 0x3, 0x2, 0x2, 0x2, 0x3d2, 0x3d3, 
       0x3, 0x2, 0x2, 0x2, 0x3d3, 0x3d4, 0x5, 0x5a, 0x2e, 0x2, 0x3d4, 0xc5, 
       0x3, 0x2, 0x2, 0x2, 0x3d5, 0x3de, 0x7, 0x75, 0x2, 0x2, 0x3d6, 0x3d7, 
       0x7, 0x56, 0x2, 0x2, 0x3d7, 0x3da, 0x7, 0x60, 0x2, 0x2, 0x3d8, 0x3db, 
       0x7, 0x73, 0x2, 0x2, 0x3d9, 0x3db, 0x5, 0x5a, 0x2e, 0x2, 0x3da, 0x3d8, 
       0x3, 0x2, 0x2, 0x2, 0x3da, 0x3d9, 0x3, 0x2, 0x2, 0x2, 0x3db, 0x3dc, 
       0x3, 0x2, 0x2, 0x2, 0x3dc, 0x3de, 0x7, 0x61, 0x2, 0x2, 0x3dd, 0x3d5, 
       0x3, 0x2, 0x2, 0x2, 0x3dd, 0x3d6, 0x3, 0x2, 0x2, 0x2, 0x3de, 0xc7, 
       0x3, 0x2, 0x2, 0x2, 0x3df, 0x3e0, 0x9, 0x14, 0x2, 0x2, 0x3e0, 0xc9, 
       0x3, 0x2, 0x2, 0x2, 0x3e1, 0x3e7, 0x5, 0xc8, 0x65, 0x2, 0x3e2, 0x3e4, 
       0x7, 0x60, 0x2, 0x2, 0x3e3, 0x3e5, 0x5, 0xa2, 0x52, 0x2, 0x3e4, 0x3e3, 
       0x3, 0x2, 0x2, 0x2, 0x3e4, 0x3e5, 0x3, 0x2, 0x2, 0x2, 0x3e5, 0x3e6, 
       0x3, 0x2, 0x2, 0x2, 0x3e6, 0x3e8, 0x7, 0x61, 0x2, 0x2, 0x3e7, 0x3e2, 
       0x3, 0x2, 0x2, 0x2, 0x3e7, 0x3e8, 0x3, 0x2, 0x2, 0x2, 0x3e8, 0x3e9, 
       0x3, 0x2, 0x2, 0x2, 0x3e9, 0x3ea, 0x5, 0x1c, 0xf, 0x2, 0x3ea, 0x3eb, 
       0x5, 0x50, 0x29, 0x2, 0x3eb, 0xcb, 0x3, 0x2, 0x2, 0x2, 0x3ec, 0x3ed, 
       0x5, 0xca, 0x66, 0x2, 0x3ed, 0x3ee, 0x7, 0x63, 0x2, 0x2, 0x3ee, 0x3f1, 
       0x3, 0x2, 0x2, 0x2, 0x3ef, 0x3f1, 0x5, 0xc4, 0x63, 0x2, 0x3f0, 0x3ec, 
       0x3, 0x2, 0x2, 0x2, 0x3f0, 0x3ef, 0x3, 0x2, 0x2, 0x2, 0x3f1, 0xcd, 
       0x3, 0x2, 0x2, 0x2, 0x3f2, 0x3f5, 0x5, 0xd0, 0x69, 0x2, 0x3f3, 0x3f5, 
       0x5, 0xd2, 0x6a, 0x2, 0x3f4, 0x3f2, 0x3, 0x2, 0x2, 0x2, 0x3f4, 0x3f3, 
       0x3, 0x2, 0x2, 0x2, 0x3f5, 0xcf, 0x3, 0x2, 0x2, 0x2, 0x3f6, 0x3f7, 
       0x7, 0x59, 0x2, 0x2, 0x3f7, 0x3f8, 0x5, 0xd4, 0x6b, 0x2, 0x3f8, 0x3f9, 
       0x7, 0x63, 0x2, 0x2, 0x3f9, 0xd1, 0x3, 0x2, 0x2, 0x2, 0x3fa, 0x3fb, 
       0x7, 0x5a, 0x2, 0x2, 0x3fb, 0x401, 0x7, 0x73, 0x2, 0x2, 0x3fc, 0x3fe, 
       0x7, 0x60, 0x2, 0x2, 0x3fd, 0x3ff, 0x5, 0xd6, 0x6c, 0x2, 0x3fe, 0x3fd, 
       0x3, 0x2, 0x2, 0x2, 0x3fe, 0x3ff, 0x3, 0x2, 0x2, 0x2, 0x3ff, 0x400, 
       0x3, 0x2, 0x2, 0x2, 0x400, 0x402, 0x7, 0x61, 0x2, 0x2, 0x401, 0x3fc, 
       0x3, 0x2, 0x2, 0x2, 0x401, 0x402, 0x3, 0x2, 0x2, 0x2, 0x402, 0x403, 
       0x3, 0x2, 0x2, 0x2, 0x403, 0x405, 0x5, 0x20, 0x11, 0x2, 0x404, 0x406, 
       0x5, 0x1a, 0xe, 0x2, 0x405, 0x404, 0x3, 0x2, 0x2, 0x2, 0x405, 0x406, 
       0x3, 0x2, 0x2, 0x2, 0x406, 0x407, 0x3, 0x2, 0x2, 0x2, 0x407, 0x40b, 
       0x7, 0x5e, 0x2, 0x2, 0x408, 0x40a, 0xb, 0x2, 0x2, 0x2, 0x409, 0x408, 
       0x3, 0x2, 0x2, 0x2, 0x40a, 0x40d, 0x3, 0x2, 0x2, 0x2, 0x40b, 0x40c, 
       0x3, 0x2, 0x2, 0x2, 0x40b, 0x409, 0x3, 0x2, 0x2, 0x2, 0x40c, 0x40e, 
       0x3, 0x2, 0x2, 0x2, 0x40d, 0x40b, 0x3, 0x2, 0x2, 0x2, 0x40e, 0x40f, 
       0x7, 0x5f, 0x2, 0x2, 0x40f, 0xd3, 0x3, 0x2, 0x2, 0x2, 0x410, 0x411, 
       0x9, 0x15, 0x2, 0x2, 0x411, 0xd5, 0x3, 0x2, 0x2, 0x2, 0x412, 0x415, 
       0x5, 0x46, 0x24, 0x2, 0x413, 0x415, 0x5, 0xa2, 0x52, 0x2, 0x414, 
       0x412, 0x3, 0x2, 0x2, 0x2, 0x414, 0x413, 0x3, 0x2, 0x2, 0x2, 0x415, 
       0xd7, 0x3, 0x2, 0x2, 0x2, 0x6f, 0xdb, 0xdd, 0xe1, 0xe6, 0xec, 0x104, 
       0x10e, 0x115, 0x11b, 0x122, 0x137, 0x13f, 0x143, 0x146, 0x14b, 0x14f, 
       0x152, 0x159, 0x164, 0x16f, 0x176, 0x17e, 0x188, 0x18e, 0x193, 0x198, 
       0x19c, 0x19f, 0x1a2, 0x1aa, 0x1b1, 0x1b8, 0x1c4, 0x1cb, 0x1cf, 0x1d8, 
       0x1df, 0x1e4, 0x1eb, 0x1fe, 0x200, 0x207, 0x20f, 0x214, 0x218, 0x21c, 
       0x227, 0x22a, 0x233, 0x235, 0x242, 0x246, 0x24c, 0x253, 0x258, 0x260, 
       0x26b, 0x271, 0x275, 0x27a, 0x288, 0x28d, 0x295, 0x2a8, 0x2af, 0x2ba, 
       0x2c5, 0x2d0, 0x2db, 0x2e7, 0x2f3, 0x2fe, 0x309, 0x30f, 0x315, 0x319, 
       0x324, 0x335, 0x33e, 0x345, 0x354, 0x362, 0x369, 0x36b, 0x36f, 0x378, 
       0x383, 0x38e, 0x396, 0x39c, 0x3a0, 0x3a7, 0x3af, 0x3b3, 0x3bb, 0x3bf, 
       0x3c8, 0x3d1, 0x3da, 0x3dd, 0x3e4, 0x3e7, 0x3f0, 0x3f4, 0x3fe, 0x401, 
       0x405, 0x40b, 0x414, 
  };

  _serializedATN.insert(_serializedATN.end(), serializedATNSegment0,
    serializedATNSegment0 + sizeof(serializedATNSegment0) / sizeof(serializedATNSegment0[0]));


  atn::ATNDeserializer deserializer;
  _atn = deserializer.deserialize(_serializedATN);

  size_t count = _atn.getNumberOfDecisions();
  _decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    _decisionToDFA.emplace_back(_atn.getDecisionState(i), i);
  }
}

qasm3Parser::Initializer qasm3Parser::_init;
