#include "Memory.h"
#include "../common/Operations.h"

#ifndef	COMMAND_PARSER_H
#define COMMAND_PARSER_H




/*Controls the parsing of the file with instruction pointer etc..*/
class Command_Parser
{
private:
	Memory* m; /*Shortcut for memory since it is used very often*/


public:
	Command_Parser( Memory* _Memory);
	~Command_Parser();

	int executeLine( char* com, long* op1, long* op2, long* res);

};

#endif //COMMAND_PARSER_H
