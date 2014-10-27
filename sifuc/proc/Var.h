#pragma once
#include <string>

enum vartype {
	VARTYPE_BOOL,
	VARTYPE_CHAR,
	VARTYPE_SHORT,
	VARTYPE_INT,
	VARTYPE_LONG,
	VARTYPE_FLOAT,
	VARTYPE_DOUBLE,
	VARTYPE_STRING,
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
	"VOID",
	"CLASS"
};

class Var {
	public:
		Var(std::string name, int type, int address);
		//
		bool isOfType(vartype t);
		//
		std::string getName();
		int getType();
		int getAddress();
	private:
		std::string name;
		int type;
		int address;
};