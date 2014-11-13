#pragma once

const int MAX_TYPES = 512;
const int MAX_STRING_SIZE = 256;

enum memtype {
	TYPE_INVALID,
	TYPE_BOOL,
	TYPE_CHAR,
	TYPE_SHORT,
	TYPE_INT,
	TYPE_LONG,
	TYPE_FLOAT,
	TYPE_DOUBLE,
	TYPE_STR
};

//bits
const int bool_size = 1;
const int char_size = 8;
const int short_size = 16;
const int int_size = 32;
const int long_size = 64;
const int float_size = 32;
const int double_size = 64;

/*
global

bool 0 - 512
char 513 - 1511
short

5000

local
5001

10000

temporal
10001
*/
