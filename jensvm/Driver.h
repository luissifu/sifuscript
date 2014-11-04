/** \file driver.h Declaration of the example::Driver class. */
#include <fstream>
#include <iostream>

#include "Memory.h"
#include "Command_Parser.h"

#ifndef DRIVER_H
#define DRIVER_H


/*Controls the parsing of the file with instruction pointer etc..*/
class Driver
{

private:
	std::ifstream& CodeStream;
	std::streampos fileSize;
	char* Code;

	long IP;
	char* CodeStart;

	Memory* memory;
	Command_Parser* command_parser;

	int run();

public:
	Driver( std::ifstream& file);
	~Driver();


	
};

#endif //DRIVER_H
