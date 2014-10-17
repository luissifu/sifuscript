#pragma once
#include <string>
#include <vector>

enum memtype {
	TYPE_BOOL,
	TYPE_CHAR,
	TYPE_SHORT,
	TYPE_INT,
	TYPE_LONG,
	TYPE_FLOAT,
	TYPE_DOUBLE,
	TYPE_STR
};

const int MAX_TYPES = 512;
const int MAX_STRING_SIZE = 256;

class Memory {
	public:
		Memory();
		void setOffset(int offset);
		void setName(std::string name);
		int add(int type);
		int getBlockSize();
		void clear();
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
		/*
		std::vector<char*> charlist;
		std::vector<std::string*> strlist;
		std::vector<short*> shortlist;
		std::vector<int*> intlist;
		std::vector<long*> longlist;
		std::vector<float*> floatlist;
		std::vector<double*> doublelist;
		*/
};
