grammar Expr;  // 중요: 이 이름(Expr)과 파일명(Expr.g4)이 같아야 합니다!

// 파서 규칙 (문법 구조)
prog:   expr EOF ;

expr:   expr ('*'|'/') expr     # MulDiv
    |   expr ('+'|'-') expr     # AddSub
    |   INT                     # Int
    |   '(' expr ')'            # Parens
    ;

// 렉서 규칙 (토큰 정의)
INT :   [0-9]+ ;
WS  :   [ \t\r\n]+ -> skip ; // 공백 무시