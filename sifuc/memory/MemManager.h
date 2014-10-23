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
		int request(int type, int from);
		void clear(int which);
	private:
		int requestBool(int from);
		int requestChar(int from);
		int requestShort(int from);
		int requestInt(int from);
		int requestLong(int from);
		int requestFloat(int from);
		int requestDouble(int from);
		int requestString(int from);
		Memory global;
		Memory local;
		Memory temp;
};
