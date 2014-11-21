#pragma once
#include <string>
#include <vector>
#include <stdio.h>
#include "../../common/Types.h"

class Memory {
	public:
		Memory();
		void setOffset(int offset);
		void setName(std::string name);
		int add(int type);
		//int getBlockSize();
		void clear();
		void dump(FILE* file);
	private:
		int offset;
		int blocksize;
		std::string name;
		//containers
		int bool_num;
		int char_num;
		int short_num;
		int int_num;
		int long_num;
		int float_num;
		int double_num;
		int string_num;
		//max
		int bool_max;
		int char_max;
		int short_max;
		int int_max;
		int long_max;
		int float_max;
		int double_max;
		int string_max;
};
