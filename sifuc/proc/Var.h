#pragma once
#include <string>
#include <vector>

enum vartype {
	VARTYPE_BOOL,
	VARTYPE_CHAR,
	VARTYPE_SHORT,
	VARTYPE_INT,
	VARTYPE_LONG,
	VARTYPE_FLOAT,
	VARTYPE_DOUBLE,
	VARTYPE_STRING,
	VARTYPE_ADDRESS,
	VARTYPE_VOID,
	VARTYPE_CLASS
};

const std::string vartypenames[] = {
	"BOOL",
	"CHAR",
	"SHORT",
	"INT",
	"LONG",
	"FLOAT",
	"DOUBL",
	"STR",
	"ADDRESS",
	"VOID",
	"CLASS"
};

struct dim_info {
	int size;
	int m;
};

class Var {
	public:
		Var(std::string name, int type, int address, bool dim = false);
		//
		bool isOfType(vartype t);
		//
		std::string getName();
		int getType();
		int getAddress();
		bool isDimension();
		void add_dim(int dim);
		void calculate_offset();
		int getSize();
		int getDimNum();
		dim_info getInfo(int which);
		void setArrayType(int type);
		int getArrayType();
	private:
		std::string name;
		std::vector<dim_info> info;
		int type;
		int array_type;
		int address;
		int size;
		bool dimension;
};
