#include "Command_Parser.h"

Command_Parser::Command_Parser() {}

void Command_Parser::setMemory(MemoryManager* m) {
	mem = m;
}

int Command_Parser::execute_line(char op, int left, int right, int result, unsigned long& ip) {
	printf("%3ld | %s %d %d %d\n", ip, opnames[op].c_str(), left, right, result);

	switch(op)
	{
		case OP_END_PROGRAM:
			//solo termina el programa
			ip++;
			break;

		case OP_ADD:
			aritmetic_op('+', mem->read(left), mem->read(right), mem->read(result));
			ip++;
			break;

		case OP_SUB:
			aritmetic_op('-', mem->read(left), mem->read(right), mem->read(result));
			ip++;
			break;

		case OP_MULT:
			aritmetic_op('*', mem->read(left), mem->read(right), mem->read(result));
			ip++;
			break;

		case OP_DIV:
			aritmetic_op('/', mem->read(left), mem->read(right), mem->read(result));
			ip++;
			break;

		case OP_MOD:
			aritmetic_op('%', mem->read(left), mem->read(right), mem->read(result));
			ip++;
			break;

		case OP_AND:
			bool_op('&', mem->read(left), mem->read(right), mem->read(result));
			ip++;
			break;

		case OP_OR:
			bool_op('|', mem->read(left), mem->read(right), mem->read(result));
			ip++;
			break;

		case OP_LESS:
			compare_op('<', mem->read(left), mem->read(right), mem->read(result));
			ip++;
			break;

		case OP_MORE:
			compare_op('>', mem->read(left), mem->read(right), mem->read(result));
			ip++;
			break;

		case OP_LESSEQ:
			compare_op('l', mem->read(left), mem->read(right), mem->read(result));
			ip++;
			break;

		case OP_MOREEQ:
			compare_op('m', mem->read(left), mem->read(right), mem->read(result));
			ip++;
			break;

		case OP_EQ:
			compare_op('=', mem->read(left), mem->read(right), mem->read(result));
			ip++;
			break;

		case OP_NOTEQ:
			compare_op('!', mem->read(left), mem->read(right), mem->read(result));
			ip++;
			break;

		case OP_ASSIGN:
			assign(mem->read(left), mem->read(result));
			ip++;
			break;

		case OP_NOT:
			not_op(mem->read(left), mem->read(result));
			ip++;
			break;

		case OP_JUMP_FALSE:
			jump(mem->read(left), result, ip, JUMP_COMP_FALSE);
			break;

		case OP_JUMP_TRUE:
			jump(mem->read(left), result, ip, JUMP_COMP_TRUE);
			break;

		case OP_JUMP:
			jump(mem->read(left), result, ip, JUMP_COMP_NONE);
			break;

		case OP_PRINT:
			print(mem->read(result), false);
			ip++;
			break;

		case OP_PRINT_LINE:
			print(mem->read(result), true);
			ip++;
			break;

		case OP_READ:
			read(mem->read(result));
			ip++;
			break;

		case OP_JUMP_SUB:
			jump(mem->read(left), result, ip, JUMP_COMP_SUB);
			break;

		case OP_ERA:
			ip++;
			break;

		case OP_RETURN:
			ip++;
			break;

		case OP_END_FUNC:
			jump(mem->read(left), result, ip, JUMP_COMP_RETURN);
			break;

		case OP_SET_PARAM:
			ip++;
			break;
	}

	return 0;
}

void Command_Parser::jump(data_type left, int res, unsigned long& ip, char comp) {
	int new_ip = 0;

	switch(comp)
	{
		case JUMP_COMP_FALSE:
			if (!*((bool*)left.data))
				ip = res;
			else
				ip++;
			break;

		case JUMP_COMP_TRUE:
			if (*((bool*)left.data))
				ip = res;
			else
				ip++;
			break;

		case JUMP_COMP_NONE:
			ip = res;
			break;

		case JUMP_COMP_SUB:
			func_jumps.push(ip);
			ip = res;
			break;

		case JUMP_COMP_RETURN:
			ip = func_jumps.top() + 1;
			func_jumps.pop();
			break;

		default:
			break;
	}
}

void Command_Parser::not_op(data_type left, data_type res) {
	*((bool*)res.data) = !*((bool*)left.data);
}

void Command_Parser::bool_op(char op, data_type left, data_type right, data_type res) {
	if (op == '&')
	{
		*((bool*)res.data) = *((bool*)left.data) && *((bool*)right.data);
	}
	else
	{
		*((bool*)res.data) = *((bool*)left.data) || *((bool*)right.data);
	}
}

void Command_Parser::assign(data_type left, data_type res) {
	switch(res.type)
	{
		case TYPE_BOOL:
			*((bool*)res.data) = *((bool*)left.data);
			break;

		case TYPE_CHAR:
			*res.data = *left.data;
			break;

		case TYPE_SHORT:
			*((short*)res.data) = *((short*)left.data);
			break;

		case TYPE_INT:
			*((int*)res.data) = *((int*)left.data);
			break;

		case TYPE_LONG:
			*((long*)res.data) = *((long*)left.data);
			break;

		case TYPE_FLOAT:
			*((float*)res.data) = *((float*)left.data);
			break;

		case TYPE_DOUBLE:
			*((double*)res.data) = *((double*)left.data);
			break;

		case TYPE_STR:
			break;

		default:
			//shouldnt happen
			break;
	}
}

void Command_Parser::print(data_type var, bool newline) {
	std::string nl = newline?"\n":"";

	switch(var.type)
	{
		case TYPE_BOOL:
			{
				bool* val = (bool*)var.data;
				std::string str_val = *val?"true":"false";
				std::cout << str_val << nl;
			}
			break;

		case TYPE_CHAR:
			std::cout << *var.data << nl;
			break;

		case TYPE_SHORT:
			{
				short* val = (short*)var.data;
				std::cout << *val << nl;
			}
			break;

		case TYPE_INT:
			{
				int* val = (int*)var.data;
				std::cout << *val << nl;
			}
			break;

		case TYPE_LONG:
			{
				long* val = (long*)var.data;
				std::cout << *val << nl;
			}
			break;

		case TYPE_FLOAT:
			{
				float* val = (float*)var.data;
				std::cout << *val << nl;
			}
			break;

		case TYPE_DOUBLE:
			{
				double* val = (double*)var.data;
				std::cout << *val << nl;
			}
			break;

		case TYPE_STR:
			std::cout << var.data << nl;
			break;

		default:
			//shouldnt happen
			break;
	}
}

void Command_Parser::read(data_type var) {
	switch(var.type)
	{
		case TYPE_BOOL:
			std::cin >> *((bool*)var.data);
			break;

		case TYPE_CHAR:
			std::cin >> *var.data;
			break;

		case TYPE_SHORT:
			std::cin >> *((short*)var.data);
			break;

		case TYPE_INT:
			std::cin >> *((int*)var.data);
			break;

		case TYPE_LONG:
			std::cin >> *((long*)var.data);
			break;

		case TYPE_FLOAT:
			std::cin >> *((float*)var.data);
			break;

		case TYPE_DOUBLE:
			std::cin >> *((double*)var.data);
			break;

		case TYPE_STR:
			break;

		default:
			//shouldnt happen
			break;
	}
}
