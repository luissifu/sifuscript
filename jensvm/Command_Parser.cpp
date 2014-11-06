#include "Command_Parser.h"


Command_Parser::Command_Parser( Memory* _Memory) :
	m(_Memory)
{
}

Command_Parser::~Command_Parser(){

}

int Command_Parser::executeLine( char* com, long* op1, long* op2, long* res){



	switch (*com) {
		case OP_ADD: //ADD
			*(int*)(m->getMP()+res) =  *((int*)(m->getMP()+op1)) + *((int*)(m->getMP()+op2));
			break;
		case 1: //SUB
			*(int*)(m->getMP()+res) = *((int*)(m->getMP()+op1)) - *((int*)(m->getMP()+op2));
			break;
		case 2: //MULT
			*(int*)(m->getMP()+res) = *((int*)(m->getMP()+op1)) * *((int*)(m->getMP()+op2));
			break;
		case 3: //DIV
			*(int*)(m->getMP()+res) = *((int*)(m->getMP()+op1)) / *((int*)(m->getMP()+op2));
			break;
		case 4: //MOD
			*(int*)(m->getMP()+res) = *((int*)(m->getMP()+op1)) % *((int*)(m->getMP()+op2));
			break;
		case 5: //AND
			*(int*)(m->getMP()+res) = *((int*)(m->getMP()+op1)) & *((int*)(m->getMP()+op2));
			break;
		case 6: //OR
			*(int*)(m->getMP()+res) = *((int*)(m->getMP()+op1)) | *((int*)(m->getMP()+op2));
			break;
		/*to be continued, first we need to solve our command problem with the types*/
		default:
			break;
	}


	return 0;
}
