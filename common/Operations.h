#pragma once

enum opInstructions {
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
	OP_NOT,
	OP_JUMP_FALSE,
	OP_JUMP_TRUE,
	OP_JUMP
};

const std::string opnames[] = {
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
	"NOT ",
	"JMPF",
	"JMPT",
	"JMP "
};
