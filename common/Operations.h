#pragma once

enum opInstructions {
	//Binary operators
	OP_ADD,
	OP_SUB,
	OP_MULT,
	OP_DIV,
	OP_MOD,
	OP_AND,
	OP_OR,
	OP_LESS,
	OP_MORE,
	OP_LESSEQ,
	OP_MOREEQ,
	OP_EQ,
	OP_NOTEQ,
	OP_ASSIGN,
	//Unary operators
	OP_NOT,
	//Jumps
	OP_JUMP_FALSE,
	OP_JUMP_TRUE,
	OP_JUMP,
	//Special funcs
	OP_PRINT,
	OP_READ
};

const std::string opnames[] = {
	//Binary operators
	"ADD ",
	"SUB ",
	"MULT",
	"DIV ",
	"MOD ",
	"AND ",
	"OR  ",
	"LESS",
	"MORE",
	"LSEQ",
	"MOEQ",
	"EQ  ",
	"NOEQ",
	"ASGN",
	//Unary operators
	"NOT ",
	//Jumps
	"JMPF",
	"JMPT",
	"JMP ",
	//Special funcs
	"PRNT",
	"READ"
};