#include "Command_Parser.h"

Command_Parser::Command_Parser() {}

void Command_Parser::setMemory(MemoryManager* m) {
	mem = m;
}

int Command_Parser::execute_line(char op, int left, int right, int result, unsigned long& ip) {
	//printf("[%ld] %s %d %d %d\n", ip, opnames[op].c_str(), left, right, result);

	switch(op)
	{
		case OP_SET_VALUE:
			//ya no se usa
			break;

		case OP_ADD:
			break;

		case OP_SUB:
			break;

		case OP_MULT:
			break;

		case OP_DIV:
			break;

		case OP_MOD:
			break;

		case OP_AND:
			break;

		case OP_OR:
			break;

		case OP_LESS:
			break;

		case OP_MORE:
			break;

		case OP_LESSEQ:
			break;

		case OP_MOREEQ:
			break;

		case OP_EQ:
			break;

		case OP_NOTEQ:
			break;

		case OP_ASSIGN:
			break;

		case OP_NOT:
			break;

		case OP_JUMP_FALSE:
			break;

		case OP_JUMP_TRUE:
			break;

		case OP_JUMP:
			break;

		case OP_PRINT:
			print(mem->read(result));
			ip++;
			break;

		case OP_READ:
			break;

		case OP_JUMP_SUB:
			break;

		case OP_ERA:
			break;

		case OP_RETURN:
			break;

		case OP_SET_PARAM:
			break;
	}

	return 0;
}

void Command_Parser::print(data_type var) {
	switch(var.type)
	{
		case TYPE_BOOL:
			{
				bool* val = (bool*)var.data;
				printf("%s", *val?"true":"false");
			}
			break;

		case TYPE_CHAR:
			printf("%c", *var.data);
			break;

		case TYPE_SHORT:
			{
				short* val = (short*)var.data;
				printf("%d", *val);
			}
			break;

		case TYPE_INT:
			{
				int* val = (int*)var.data;
				printf("%d", *val);
			}
			break;

		case TYPE_LONG:
			{
				long* val = (long*)var.data;
				printf("%ld", *val);
			}
			break;

		case TYPE_FLOAT:
			{
				float* val = (float*)var.data;
				printf("%f", *val);
			}
			break;

		case TYPE_DOUBLE:
			{
				double* val = (double*)var.data;
				printf("%lf", *val);
			}
			break;

		case TYPE_STR:
			printf("%s", var.data);
			break;

		default:
			//shouldnt happen
			break;
	}
}
