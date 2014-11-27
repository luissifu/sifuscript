#ifndef	COMMAND_PARSER_H
#define COMMAND_PARSER_H

#include "MemoryManager.h"
#include "../common/Operations.h"

#include <stdlib.h>
#include <iostream>
#include <stack>

enum jump_comp_types {
	JUMP_COMP_FALSE,
	JUMP_COMP_TRUE,
	JUMP_COMP_NONE,
	JUMP_COMP_SUB,
	JUMP_COMP_RETURN
};

/*Controls the parsing of the file with instruction pointer etc..*/
class Command_Parser {
	public:
		Command_Parser();
		//pone que memoria se va a utilizar
		void setMemory(MemoryManager* m);
		//ejecuta la linea que se pidio
		int execute_line(char op, int left, int right, int result, unsigned long& ip);
	private:
		MemoryManager* mem; /*Shortcut for memory since it is used very often*/
		//guarda los saltos para las funciones
		std::stack<int> func_jumps;
		//suma, resta, multiplica, divide y saca el modulo
		void aritmetic_op(char op, data_type left, data_type right, data_type res);
		//and y or
		void bool_op(char op, data_type left, data_type right, data_type res);
		//>, <, >=, <=, ==, !=
		void compare_op(char op, data_type left, data_type right, data_type res);
		//!
		void not_op(data_type left, data_type res);
		//imprime, con o sin salto de linea
		void print(data_type var, bool newline);
		//lee del teclado a una variable
		void read(data_type var);
		//asigna 
		void assign(data_type left, data_type res);
		//salta y depende de la comparacion es como cambia el IP
		void jump(data_type left, int res, unsigned long& ip, char comp);
		//verifica las dimensiones
		bool verify(data_type val, int linf, int lsup);
		//suma a la direccion base del arreglo
		void add_b(data_type val, int base, data_type res);
		//multiplica la direccion base para tomar en cuenta el tamano de los tipos
		void mult_b(data_type val, int offset, data_type res);
};

#endif //COMMAND_PARSER_H
