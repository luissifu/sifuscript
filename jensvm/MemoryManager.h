#pragma once

#include <vector>
#include "Memory.h"

class MemoryManager {
	public:
		MemoryManager();
		~MemoryManager();
		void init(FILE* file);
		void write(int address, bool value);
		void write(int address, char value);
		void write(int address, short value);
		void write(int address, int value);
		void write(int address, long value);
		void write(int address, float value);
		void write(int address, double value);
		void write(int address, char* value);
		void dump();
		data_type read(int address);
		data_type read_sp(int address);
		void expand_mem();
		void free_mem();
		void jump_sub();
	private:
		Memory global;
		std::vector<Memory*> local_mems;
		Memory temp;
		int blocksize;
		int selected_local;
};
