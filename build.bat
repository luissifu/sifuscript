rem Build Definitions are made in the configuration of Lexer.l

set lex=tokens
set bis=gramatica

echo LexerWork
..\win_flex_bison-latest\win_flex.exe --wincompat  -o %lex%.cpp ..\GitHub\sifuscript\source\%lex%.ll
rem MOVE /Y %lex%.h ..\GitHub\sifuscript\source\
MOVE /Y %lex%.c ..\GitHub\sifuscript\source\

echo BisonWork
..\win_flex_bison-latest\win_bison ..\GitHub\sifuscript\source\%bis%.yy
MOVE /Y %bis%.h ..\GitHub\sifuscript\source\
MOVE /Y %bis%.cpp ..\GitHub\sifuscript\source\

echo Stack,Position,Location place change
MOVE /Y position.hh ..\GitHub\sifuscript\source\
MOVE /Y location.hh ..\GitHub\sifuscript\source\
MOVE /Y stack.hh ..\GitHub\sifuscript\source\