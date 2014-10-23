#include "Memory.h"

Memory::Memory() {
	offset = 0;
	name = "";

	blocksize = MAX_TYPES * bool_size
				+ MAX_TYPES * char_size
				+ MAX_TYPES * short_size
				+ MAX_TYPES * int_size
				+ MAX_TYPES * long_size
				+ MAX_TYPES * float_size
				+ MAX_TYPES * double_size
				+ MAX_TYPES * char_size * MAX_STRING_SIZE;

	clear();
}

void Memory::setOffset(int offset) {
	this->offset = offset;
}

void Memory::clear() {
	bool_num = char_num = short_num = int_num = long_num = float_num = double_num = string_num = 0;
}

void Memory::setName(std::string name) {
	this->name = name;
}

int Memory::add(int type) {
	int location;
	switch(type)
	{
		case TYPE_BOOL:
			location = bool_num * sizeof(bool);
			bool_num++;
			break;

		case TYPE_CHAR:
			location = char_num * sizeof(char)
						+ MAX_TYPES * sizeof(bool);
			char_num++;
			break;

		case TYPE_SHORT:
			location = short_num * sizeof(short)
						+ MAX_TYPES * sizeof(char)
						+ MAX_TYPES * sizeof(bool);
			short_num++;
			break;

		case TYPE_INT:
			location = int_num * sizeof(int)
						+ MAX_TYPES * sizeof(short)
						+ MAX_TYPES * sizeof(char)
						+ MAX_TYPES * sizeof(bool);
			int_num++;
			break;

		case TYPE_LONG:
			location = long_num * sizeof(long)
						+ MAX_TYPES * sizeof(int)
						+ MAX_TYPES * sizeof(short)
						+ MAX_TYPES * sizeof(char)
						+ MAX_TYPES * sizeof(bool);
			long_num++;
			break;

		case TYPE_FLOAT:
			location = float_num * sizeof(float)
						+ MAX_TYPES * sizeof(long)
						+ MAX_TYPES * sizeof(int)
						+ MAX_TYPES * sizeof(short)
						+ MAX_TYPES * sizeof(char)
						+ MAX_TYPES * sizeof(bool);
			float_num++;
			break;

		case TYPE_DOUBLE:
			location = double_num * sizeof(double)
						+ MAX_TYPES * sizeof(float)
						+ MAX_TYPES * sizeof(long)
						+ MAX_TYPES * sizeof(int)
						+ MAX_TYPES * sizeof(short)
						+ MAX_TYPES * sizeof(char)
						+ MAX_TYPES * sizeof(bool);
			double_num++;
			break;

		case TYPE_STR:
			location = string_num * MAX_STRING_SIZE
						+ MAX_TYPES * sizeof(double)
						+ MAX_TYPES * sizeof(float)
						+ MAX_TYPES * sizeof(long)
						+ MAX_TYPES * sizeof(int)
						+ MAX_TYPES * sizeof(short)
						+ MAX_TYPES * sizeof(char)
						+ MAX_TYPES * sizeof(bool);
			string_num++;
			break;
	}
	return location + offset;
}

int Memory::getBlockSize() {
	return blocksize;
}
