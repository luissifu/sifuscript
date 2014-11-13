rem Build Definitions are made in the configuration of Lexer.l

set lex=tokens
set bis=gramatica

echo Path:
echo %~dp0 
dir

echo LexerWork
..\..\win_flex_bison-latest\win_flex.exe --wincompat  -o %lex%.cpp ..\..\..\%lex%.ll
rem MOVE /Y %lex%.h ..\..\..\
MOVE /Y %lex%.cpp ..\..\..\

echo BisonWork
..\..\win_flex_bison-latest\win_bison ..\..\..\%bis%.yy
MOVE /Y %bis%.h ..\..\..\
MOVE /Y %bis%.cpp ..\..\..\

echo Stack,Position,Location place change
MOVE /Y position.hh ..\..\..\
MOVE /Y location.hh ..\..\..\
MOVE /Y stack.hh ..\..\..\