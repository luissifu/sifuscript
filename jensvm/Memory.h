#ifndef	MEMORY_H
#define MEMORY_H

#include "../common/Types.h"
#include <string>
#include <vector>

struct data_type {
	void* data;
	memtype type;
};

/*Memory Management of VirtualMachine*/
class Memory {
	public:
		Memory();
		~Memory();
		void init(FILE* file, bool init = true);
		//writes
		void write(int num, bool value);
		void write(int num, char value);
		void write(int num, short value);
		void write(int num, int value);
		void write(int num, long value);
		void write(int num, float value);
		void write(int num, double value);
		void write(int num, char* value);
		//
		void dump();
		data_type read(int num);
		void copy(const Memory* other);
		//counts
		int bool_qty;
		int char_qty;
		int short_qty;
		int int_qty;
		int long_qty;
		int float_qty;
		int double_qty;
		int str_qty;
		int add_qty;
	private:
		//storage
		bool* bool_storage;
		char* char_storage;
		short* short_storage;
		int* int_storage;
		long* long_storage;
		float* float_storage;
		double* double_storage;
		std::vector<std::string> str_storage;
		int* add_storage;
		bool initialized;
};

#endif //MEMORY_H
