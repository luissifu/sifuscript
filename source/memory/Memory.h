#pragma once
#include <string>

enum memtype {
	TYPE_CHAR,
	TYPE_SHORT,
	TYPE_INT,
	TYPE_LONG,
	TYPE_FLOAT,
	TYPE_DOUBLE,
	TYPE_STR
};

class Memory {
	public:
		Memory();
		void setName(std::string name);
		int add(int type);
	private:
		std::string name;
		//containers
		std::vector<char*> charlist;
		std::vector<std::string*> strlist;
		std::vector<short*> shortlist;
		std::vector<int*> intlist;
		std::vector<long*> longlist;
		std::vector<float*> floatlist;
		std::vector<double*> doublelist;
};
