#include "Driver.h"


Driver::Driver( std::ifstream& file ) : 
	CodeStream(file), IP(0)	
{
	//get File in Memory
	fileSize = file.tellg();
    Code = new char [(int)fileSize];
    file.seekg (0, std::ios::beg);
    file.read (Code, fileSize);
    file.close();


	//Memory Allocations Variables and Constant
	memory = new Memory();
	command_parser = new Command_Parser(memory);

	CodeStart = (char*) 0xFFFF; //Position where Code Starts );
	run();
}

Driver::~Driver(){
}

int Driver::run(){
	char* command;
	char* op1;
	char* op2;
	char* res;

	//Execution of Commands//
	do {
		//getCommand and execute ( 1 B OPCode, 4 Byte Op1, 4Byte Op2, 4 byte Res)
		command = CodeStart + IP;
		op1 =	  command + 1;
		op2 =	  op1 + 4;
		res =	  op2 + 4;
		command_parser->executeLine(command, (long*)op1, (long*)op2, (long*)res);
		IP += 13;

	} while( (long) command + 12 < fileSize );

	//Command shall have EOF, or filelength corrupted
	if( (long) command !=  fileSize) {
		std::cout << "File Length corrupted!" << std::endl;
		return 1;
	}


	return 0;
}