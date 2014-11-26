#include "Command_Parser.h"

Command_Parser::Command_Parser() {}

void Command_Parser::setMemory(MemoryManager* m) {
	mem = m;
}

int Command_Parser::execute_line(char op, int left, int right, int result, unsigned long& ip) {
	//printf("%3ld | %s %d %d %d\n", ip, opnames[op].c_str(), left, right, result);

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
			mem->jump_sub();
			jump(mem->read(left), result, ip, JUMP_COMP_SUB);
			break;

		case OP_ERA:
			mem->expand_mem();
			ip++;
			break;

		case OP_RETURN:
			assign(mem->read(left), mem->read(result));
			ip++;
			break;

		case OP_END_FUNC:
			mem->free_mem();
			jump(mem->read(left), result, ip, JUMP_COMP_RETURN);
			break;

		case OP_SET_PARAM:
			assign(mem->read(left), mem->read_sp(result));
			ip++;
			break;

		case OP_VERIFY:
			if (!verify(mem->read(left), right, result))
				ip = -1;
			else
				ip++;
			break;

		case OP_ADD_BASE:
			add_b(mem->read(left), right, mem->read(result));
			ip++;
			break;

		case OP_MULT_BASE:
			mult_b(mem->read(left), right, mem->read(result));
			ip++;
			break;
	}

	return 0;
}

void Command_Parser::jump(data_type left, int res, unsigned long& ip, char comp) {
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
			func_jumps.push(ip + 1);
			ip = res;
			break;

		case JUMP_COMP_RETURN:
			ip = func_jumps.top();
			func_jumps.pop();
			break;

		default:
			break;
	}
}

void Command_Parser::not_op(data_type left, data_type res) {
	if (left.type == TYPE_ADDRESS)
	{
		int* address = (int*)left.data;
		not_op(mem->read(*address),res);
		return;
	}
	if (res.type == TYPE_ADDRESS)
	{
		int* address = (int*)res.data;
		not_op(left,mem->read(*address));
		return;
	}

	*((bool*)res.data) = !*((bool*)left.data);
}

void Command_Parser::bool_op(char op, data_type left, data_type right, data_type res) {
	if (left.type == TYPE_ADDRESS)
	{
		int* address = (int*)left.data;
		bool_op(op,mem->read(*address),right,res);
		return;
	}
	if (right.type == TYPE_ADDRESS)
	{
		int* address = (int*)right.data;
		bool_op(op,left,mem->read(*address),res);
		return;
	}
	if (res.type == TYPE_ADDRESS)
	{
		int* address = (int*)res.data;
		bool_op(op,left,right,mem->read(*address));
		return;
	}

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
	if (left.type == TYPE_ADDRESS)
	{
		int* address = (int*)left.data;
		assign(mem->read(*address),res);
		return;
	}

	switch(res.type)
	{
		case TYPE_BOOL:
			*((bool*)res.data) = *((bool*)left.data);
			break;

		case TYPE_CHAR:
			*((char*)res.data)= *((char*)left.data);
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
			*((std::string*)res.data) = *((std::string*)left.data);
			break;

		case TYPE_ADDRESS:
			{
				int* address = (int*)res.data;
				assign(left,mem->read(*address));
			}
			break;

		default:
			//shouldnt happen
			break;
	}
}

void Command_Parser::print(data_type var, bool newline) {
	std::string nl = newline?"\n":"";

	//printf("{%d}\n", var.type);

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
			std::cout << *((char*)var.data) << nl;
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
			{
				std::string* str = (std::string*)var.data;
				std::cout << *str << nl;
			}
			break;

		case TYPE_ADDRESS:
			{
				int* address = (int*)var.data;
				print(mem->read(*address), newline);
			}
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
			std::cin >> *((char*)var.data);
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
			std::cin >> *((std::string*)var.data);
			break;

		case TYPE_ADDRESS:
			{
				int* address = (int*)var.data;
				read(mem->read(*address));
			}
			break;

		default:
			//shouldnt happen
			break;
	}
}


bool Command_Parser::verify(data_type val, int linf, int lsup) {
	switch(val.type)
	{
		case TYPE_CHAR:
			{
				char* ret_val = (char*)val.data;
				return *ret_val >= linf && *ret_val < lsup;
			}
			break;

		case TYPE_SHORT:
			{
				short* ret_val = (short*)val.data;
				return *ret_val >= linf && *ret_val < lsup;
			}
			break;

		case TYPE_INT:
			{
				int* ret_val = (int*)val.data;
				return *ret_val >= linf && *ret_val < lsup;
			}
			break;

		case TYPE_LONG:
			{
				long* ret_val = (long*)val.data;
				return *ret_val >= linf && *ret_val < lsup;
			}
			break;
	}
}

void Command_Parser::add_b(data_type val, int base, data_type res) {
	*((int*)res.data) = *((int*)val.data) + base;
}

void Command_Parser::mult_b(data_type val, int offset, data_type res) {
	/*
	int* ret_val = (int*)val.data;
	printf("value is %d * %d\n", *ret_val, offset);
	*/

	*((int*)res.data) = *((int*)val.data) * offset;
}
