#pragma once
#include "Memory.h"
#include "../proc/Var.h"

enum memNames {
	MEM_GLOBAL,
	MEM_LOCAL,
	MEM_TEMP
};

class MemManager {
	public:
		MemManager();
		//obtiene la direccion en base al tipo y de cual se pidio
		int request(int type, int from);
		//limpia la memoria
		void clear(int which);
		//guarda los datos en el archivo
		void dump(FILE* file);
	private:
		//regresa una direccion de un bool
		int requestBool(int from);
		//regresa una direccion de un char
		int requestChar(int from);
		//regresa una direccion de un short
		int requestShort(int from);
		//regresa una direccion de un int
		int requestInt(int from);
		//regresa una direccion de un long
		int requestLong(int from);
		//regresa una direccion de un float
		int requestFloat(int from);
		//regresa una direccion de un double
		int requestDouble(int from);
		//regresa una direccion de un string
		int requestString(int from);
		//regresa una direccion de una direccion (arreglos)
		int requestAddress(int from);
		Memory global;
		Memory local;
		Memory temp;
};
