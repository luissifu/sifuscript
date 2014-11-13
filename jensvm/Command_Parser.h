#include "Memory.h"
#include "../common/Operations.h"

#include <stdlib.h>


#ifndef	COMMAND_PARSER_H
#define COMMAND_PARSER_H




/*Controls the parsing of the file with instruction pointer etc..*/
class Command_Parser
{
private:
	Memory* m; /*Shortcut for memory since it is used very often*/

	void* op1_p;
	void* op2_p;


public:
	Command_Parser( Memory* _Memory);
	~Command_Parser();

	int executeLine( opInstructions com, long op1, long op2, long res, long& IP);

};

#endif //COMMAND_PARSER_H
