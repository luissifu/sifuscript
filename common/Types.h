#pragma once

const int MAX_TYPES = 512;
const int MAX_STRING_SIZE = 256;

enum memtype {
	TYPE_BOOL,
	TYPE_CHAR,
	TYPE_SHORT,
	TYPE_INT,
	TYPE_LONG,
	TYPE_FLOAT,
	TYPE_DOUBLE,
	TYPE_STR,
	TYPE_VOID,
	TYPE_CLASS,
	TYPE_INVALID
};

//bytes
const int bool_size = 1;
const int char_size = 1;
const int short_size = 2;
const int int_size = 4;
const int long_size = 8;
const int float_size = 4;
const int double_size = 8;

const int block_size = MAX_TYPES * bool_size
	+ MAX_TYPES * char_size
	+ MAX_TYPES * short_size
	+ MAX_TYPES * int_size
	+ MAX_TYPES * long_size
	+ MAX_TYPES * float_size
	+ MAX_TYPES * double_size
	+ MAX_TYPES * char_size * MAX_STRING_SIZE;
