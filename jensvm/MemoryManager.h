#pragma once

#include "Memory.h"

class MemoryManager {
	public:
		MemoryManager();
		void init(FILE* file);
		void write(int address, bool value);
		void write(int address, char value);
		void write(int address, short value);
		void write(int address, int value);
		void write(int address, long value);
		void write(int address, float value);
		void write(int address, double value);
		void write(int address, std::string value);
		void dump();
	private:
		Memory global;
		Memory local;
		Memory temp;
		int blocksize;
};
