#pragma once
#include "Memory,h"

enum memNames {
	MEM_GLOBAL,
	MEM_LOCAL,
	MEM_TEMP
};

class MemManager {
	public:
		MemManager();
		int requestChar(int from);
		int requestShort(int from);
		int requestInt(int from);
		int requestLong(int from);
		int requestFloat(int from);
		int requestDouble(int from);
		int requestString(int from);
	private:
		Memory global;
		Memory local;
		Memory temp;
};
