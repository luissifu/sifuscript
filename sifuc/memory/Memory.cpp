#include "Memory.h"

Memory::Memory() {
	offset = 0;
	name = "";

	bool_max = 0;
	char_max = 0;
	short_max = 0;
	int_max = 0;
	long_max = 0;
	float_max = 0;
	double_max = 0;
	address_max = 0;
	string_max = 0;

	bool_num = 0;
	char_num = 0;
	short_num = 0;
	int_num = 0;
	long_num = 0;
	float_num = 0;
	double_num = 0;
	address_num = 0;
	string_num = 0;
}

void Memory::setOffset(int offset) {
	this->offset = offset;
}

void Memory::clear() {
	if (bool_num > bool_max)
		bool_max = bool_num;

	if (char_num > char_max)
		char_max = char_num;

	if (short_num > short_max)
		short_max = short_num;

	if (int_num > int_max)
		int_max = int_num;

	if (long_num > long_max)
		long_max = long_num;

	if (float_num > float_max)
		float_max = float_num;

	if (double_num > double_max)
		double_max = double_num;

	if (address_num > address_max)
		address_max = address_num;

	if (string_num > string_max)
		string_max = string_num;

	bool_num = 0;
	char_num = 0;
	short_num = 0;
	int_num = 0;
	long_num = 0;
	float_num = 0;
	double_num = 0;
	address_num = 0;
	string_num = 0;
}

void Memory::dump(FILE* file) {
	fwrite(&bool_max, sizeof(int), 1, file);
	fwrite(&char_max, sizeof(int), 1, file);
	fwrite(&short_max, sizeof(int), 1, file);
	fwrite(&int_max, sizeof(int), 1, file);
	fwrite(&long_max, sizeof(int), 1, file);
	fwrite(&float_max, sizeof(int), 1, file);
	fwrite(&double_max, sizeof(int), 1, file);
	fwrite(&address_max, sizeof(int), 1, file);
	fwrite(&string_max, sizeof(int), 1, file);
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

		case TYPE_ADDRESS:
			location = address_num * sizeof(int)
						+ MAX_TYPES * sizeof(double)
						+ MAX_TYPES * sizeof(float)
						+ MAX_TYPES * sizeof(long)
						+ MAX_TYPES * sizeof(int)
						+ MAX_TYPES * sizeof(short)
						+ MAX_TYPES * sizeof(char)
						+ MAX_TYPES * sizeof(bool);
			address_num++;
			break;

		case TYPE_STR:
			location = string_num * MAX_STRING_SIZE
						+ MAX_TYPES * sizeof(int)
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

/*
int Memory::getBlockSize() {
	return blocksize;
}
*/
