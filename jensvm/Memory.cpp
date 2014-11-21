#include "Memory.h"

Memory::Memory() {
	bool_qty = char_qty = short_qty = int_qty = long_qty = float_qty = double_qty = str_qty = 0;

	bool_storage = NULL;
	char_storage = NULL;
	short_storage = NULL;
	int_storage = NULL;
	long_storage = NULL;
	float_storage = NULL;
	double_storage = NULL;
	str_storage = NULL;
}

Memory::~Memory() {
	delete bool_storage;
	delete char_storage;
	delete short_storage;
	delete int_storage;
	delete long_storage;
	delete float_storage;
	delete double_storage;
	delete str_storage;
}

void Memory::init(FILE* file) {
	fread(&bool_qty, sizeof(int), 1, file);
	fread(&char_qty, sizeof(int), 1, file);
	fread(&short_qty, sizeof(int), 1, file);
	fread(&int_qty, sizeof(int), 1, file);
	fread(&long_qty, sizeof(int), 1, file);
	fread(&float_qty, sizeof(int), 1, file);
	fread(&double_qty, sizeof(int), 1, file);
	fread(&str_qty, sizeof(int), 1, file);

	//dump();

	bool_storage = new bool[bool_qty];
	char_storage = new char[char_qty];
	short_storage = new short[short_qty];
	int_storage = new int[int_qty];
	long_storage = new long[long_qty];
	float_storage = new float[float_qty];
	double_storage = new double[double_qty];
	//str_storage = new std::string[str_qty];
}

void Memory::dump() {
	printf("--\n");
	printf("Bool qty: %d\n", bool_qty);
	printf("Char qty: %d\n", char_qty);
	printf("Shrt qty: %d\n", short_qty);
	printf("Int  qty: %d\n", int_qty);
	printf("Long qty: %d\n", long_qty);
	printf("Flt  qty: %d\n", float_qty);
	printf("Doub qty: %d\n", double_qty);
	printf("Str  qty: %d\n", str_qty);
}

void Memory::write(int num, bool value) {
	bool_storage[num] = value;
}

void Memory::write(int num, char value) {
	int offset = (num - MAX_TYPES * bool_size)/char_size;

	char_storage[offset] = value;
}

void Memory::write(int num, short value) {
	int offset = (num - MAX_TYPES * bool_size
					- MAX_TYPES * char_size)/short_size;

	short_storage[offset] = value;
}

void Memory::write(int num, int value) {
	int offset = (num - MAX_TYPES * bool_size
					- MAX_TYPES * char_size
					- MAX_TYPES * short_size)/int_size;

	int_storage[offset] = value;
}

void Memory::write(int num, long value) {
	int offset = (num - MAX_TYPES * bool_size
					- MAX_TYPES * char_size
					- MAX_TYPES * short_size
					- MAX_TYPES * int_size)/long_size;

	long_storage[offset] = value;
}

void Memory::write(int num, float value) {
	int offset = (num - MAX_TYPES * bool_size
					- MAX_TYPES * char_size
					- MAX_TYPES * short_size
					- MAX_TYPES * int_size
					- MAX_TYPES * long_size)/float_size;

	float_storage[offset] = value;
}

void Memory::write(int num, double value) {
	int offset = (num - MAX_TYPES * bool_size
					- MAX_TYPES * char_size
					- MAX_TYPES * short_size
					- MAX_TYPES * int_size
					- MAX_TYPES * long_size
					- MAX_TYPES * float_size)/double_size;

	double_storage[offset] = value;
}

void Memory::write(int num, std::string value) {
	/*int offset = (num - MAX_TYPES * bool_size
					- MAX_TYPES * char_size
					- MAX_TYPES * short_size
					- MAX_TYPES * int_size
					- MAX_TYPES * long_size
					- MAX_TYPES * float_size
					- MAX_TYPES * double_size)/(char_size * MAX_STRING_SIZE);

	str_storage[offset] = value;*/
}
