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
	TYPE_ADDRESS,
	TYPE_VOID,
	TYPE_CLASS,
	TYPE_INVALID
};

//bytes
const int bool_size = sizeof(bool);
const int char_size = sizeof(char);
const int short_size = sizeof(short);
const int int_size = sizeof(int);
const int long_size = sizeof(long);
const int float_size = sizeof(float);
const int double_size = sizeof(double);

const int block_size = MAX_TYPES * bool_size
	+ MAX_TYPES * char_size
	+ MAX_TYPES * short_size
	+ MAX_TYPES * int_size
	+ MAX_TYPES * long_size
	+ MAX_TYPES * float_size
	+ MAX_TYPES * double_size
	+ MAX_TYPES * char_size * MAX_STRING_SIZE;
