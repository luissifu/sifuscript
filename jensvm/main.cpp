/*
 * main.c file
 */


#include <stdio.h>
#include <iostream>
#include <fstream>

#include "Driver.h"


int main(int argc, char *argv[])
{
	

	for(int ai = 1; ai < argc; ++ai)
	{
		// read a file .obj with codigo intermedio
		std::ifstream infile(argv[ai], std::ios::in | std::ios::binary | std::ios::ate);
		if (!infile.good())
		{
			std::cerr << "Could not open file: " << argv[ai] << std::endl;
		} else {
			Driver driver(infile);
		}
		infile.close();
	}

	return 0;
}
