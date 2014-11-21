#ifndef	COMMAND_PARSER_H
#define COMMAND_PARSER_H

#include "MemoryManager.h"
#include "../common/Operations.h"

#include <stdlib.h>

/*Controls the parsing of the file with instruction pointer etc..*/
class Command_Parser {
	public:
		Command_Parser();
		void setMemory(MemoryManager* m);
		int execute_line(char op, int left, int right, int result, unsigned long& ip);
	private:
		MemoryManager* mem; /*Shortcut for memory since it is used very often*/
		//actions
		void print(data_type var);
};

#endif //COMMAND_PARSER_H
