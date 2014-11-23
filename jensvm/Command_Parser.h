#ifndef	COMMAND_PARSER_H
#define COMMAND_PARSER_H

#include "MemoryManager.h"
#include "../common/Operations.h"

#include <stdlib.h>
#include <iostream>

enum jump_comp_types {
	JUMP_COMP_FALSE,
	JUMP_COMP_TRUE,
	JUMP_COMP_NONE
};

/*Controls the parsing of the file with instruction pointer etc..*/
class Command_Parser {
	public:
		Command_Parser();
		void setMemory(MemoryManager* m);
		int execute_line(char op, int left, int right, int result, unsigned long& ip);
	private:
		MemoryManager* mem; /*Shortcut for memory since it is used very often*/
		//actions
		void aritmetic_op(char op, data_type left, data_type right, data_type res);
		void bool_op(char op, data_type left, data_type right, data_type res);
		void compare_op(char op, data_type left, data_type right, data_type res);
		void not_op(data_type left, data_type res);
		void print(data_type var, bool newline);
		void assign(data_type left, data_type res);
		void jump(data_type left, int res, unsigned long& ip, char comp);
};

#endif //COMMAND_PARSER_H
