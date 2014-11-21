#include "Command_Parser.h"


Command_Parser::Command_Parser( Memory* _Memory) :
	m(_Memory)
{
}

Command_Parser::~Command_Parser(){}

int Command_Parser::executeLine( opInstructions com, long op1, long op2, long res, long& IP) {
	return 0;
}
