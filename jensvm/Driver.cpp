#include "Driver.h"


Driver::Driver(FILE* infile, bool sf) {
	fseek(infile, 0, SEEK_END);
	file_end = ftell(infile);
	fseek(infile, 0, SEEK_SET);

	file = infile;
	ins_ptr = 0;
	show_flow = sf;
}

Driver::~Driver() {}

bool Driver::run() {
	char op;
	int left;
	int right;
	int res;

	while (ftell(file) < file_end) 
	{
		fread(&op, sizeof(char), 1, file);
		fread(&left, sizeof(int), 1, file);
		fread(&right, sizeof(int), 1, file);
		fread(&res, sizeof(int), 1, file);

		std::cout << opnames[op] << " " << left << " " << right << " " << res << std::endl;
	}


	return true;
}