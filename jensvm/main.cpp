/*
 * main.c file
 */
#define _CRT_SECURE_NO_WARNINGS //use of fopen

#include <stdio.h>
#include <iostream>
#include <stdio.h>

#include "Driver.h"

#include "../common/Operations.h"


int main(int argc, char *argv[])
{

	for(int ai = 1; ai < argc; ++ai)
	{

		FILE* infile;
		infile = fopen(argv[ai],"rb");

		if (infile == NULL)
		{
			std::cerr << "Could not open file: " << argv[ai] << std::endl;
		}
		else
		{
			Driver driver(infile);
			driver.run();

			fclose(infile);
		}
	}

	return 0;
}
