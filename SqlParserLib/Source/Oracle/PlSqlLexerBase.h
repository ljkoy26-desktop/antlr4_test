#pragma once
#include "antlr4-runtime.h"


namespace antlrcpp_oracle {

	class PlSqlLexerBase : public antlr4::Lexer
	{
	public:
		PlSqlLexerBase(antlr4::CharStream* input) : Lexer(input) { };

	public:
		bool IsNewlineAtPos(int pos)
		{
			int la = _input->LA(pos);
			return la == -1 || la == '\n';
		};
	};
}