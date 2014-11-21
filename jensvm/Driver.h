/** \file driver.h Declaration of the example::Driver class. */
#include <stdio.h>
#include <iostream>

#include "MemoryManager.h"
#include "Command_Parser.h"

#ifndef DRIVER_H
#define DRIVER_H


/*Controls the parsing of the file with instruction pointer etc..*/
class Driver
{
	public:
		Driver(FILE* infile, bool sf = false);
		~Driver();
		bool run();
	private:
		unsigned long ins_ptr;
		unsigned long file_end;
		FILE* file;
		bool show_flow;
		MemoryManager memory;
		Command_Parser parser;
};

#endif //DRIVER_H
