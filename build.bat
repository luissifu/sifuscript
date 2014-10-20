rem Build Definitions are made in the configuration of Lexer.l

set lex=tokens
set bis=gramatica

echo LexerWork
..\win_flex_bison-latest\win_flex.exe --wincompat  -o %lex%.cpp ..\GitHub\sifuscript\sifuc\%lex%.ll
rem MOVE /Y %lex%.h ..\GitHub\sifuscript\sifuc\
MOVE /Y %lex%.c ..\GitHub\sifuscript\sifuc\

echo BisonWork
..\win_flex_bison-latest\win_bison ..\GitHub\sifuscript\sifuc\%bis%.yy
MOVE /Y %bis%.h ..\GitHub\sifuscript\sifuc\
MOVE /Y %bis%.cpp ..\GitHub\sifuscript\sifuc\

echo Stack,Position,Location place change
MOVE /Y position.hh ..\GitHub\sifuscript\sifuc\
MOVE /Y location.hh ..\GitHub\sifuscript\sifuc\
MOVE /Y stack.hh ..\GitHub\sifuscript\sifuc\