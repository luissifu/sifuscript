#include "Command_Parser.h"


Command_Parser::Command_Parser( Memory* _Memory) :
	m(_Memory)
{
	op1_p = malloc(8);//General Bufferfor Op1
	op2_p = malloc(8);//General Bufferfor Op1
}

Command_Parser::~Command_Parser(){
	free((long long*)op1_p);
	free((long long*)op2_p);
}

int Command_Parser::executeLine( opInstructions com, long op1, long op2, long res) {

	/*** Yo sé es mucho código, pero sola la otra oprtunidad que encontré fue con "Templateclasses que es mucho más lento"***/

	//cast our operands -- get Operand Information
	struct pack op1_info = m->get(op1);
	struct pack op2_info = m->get(op2);
	
	/**OUTPUTTYPE Y TYPECAST de los OPERANDES**/
	memtype outputtypetype = m->getType( res );
	memtype calculatetype = std::max( op1_info.memtype, op1_info.memtype );

	if( com == OP_SET_VALUE){
		if( outputtypetype == TYPE_DOUBLE || outputtypetype == TYPE_LONG ){
			*(long long*)op1_p = (long) op1;
			*(long long*)op1_p <<= 32;
			*(long long*)op1_p |= (long) op2;
		}
	} else if( OP_ADD <= com && com <= OP_NOTEQ  ) {

		switch (calculatetype)
		{
			//***BOOL***//
			case TYPE_BOOL:
				switch (op1_info.memtype)
				{
					case TYPE_BOOL:
						*(bool*)op1_p = * (bool*)op1;
						break;
					case TYPE_CHAR:
						*(bool*)op1_p = * (char*)op1;
						break;
					case TYPE_SHORT:
						*(bool*)op1_p = * (short*)op1;
						break;
					case TYPE_INT:
						*(bool*)op1_p = * (int*)op1;
						break;
					case TYPE_LONG:
						*(bool*)op1_p = * (long long*)op1;
						break;
					case TYPE_FLOAT:
						*(bool*)op1_p = * (float*)op1;
						break;
					case TYPE_DOUBLE:
						*(bool*)op1_p = * (double*)op1;
						break;
					default: ;
						//should not get here
				}
				switch (op2_info.memtype)
				{
					case TYPE_BOOL:
						*(bool*)op2_p = * (bool*)op2;
						break;
					case TYPE_CHAR:
						*(bool*)op2_p = * (char*)op2;
						break;
					case TYPE_SHORT:
						*(bool*)op2_p = * (short*)op2;
						break;
					case TYPE_INT:
						*(bool*)op2_p = * (int*)op2;
						break;
					case TYPE_LONG:
						*(bool*)op2_p = * (long long*)op2;
						break;
					case TYPE_FLOAT:
						*(bool*)op2_p = * (float*)op2;
						break;
					case TYPE_DOUBLE:
						*(bool*)op2_p = * (double*)op2;
						break;
					default: ;
						//should not get here
				}
				break;
			//***CHAR***//
			case TYPE_CHAR:
				switch (op1_info.memtype)
				{
					case TYPE_BOOL:
						*(char*)op1_p = * (bool*)op1;
						break;
					case TYPE_CHAR:
						*(char*)op1_p = * (char*)op1;
						break;
					case TYPE_SHORT:
						*(char*)op1_p = * (short*)op1;
						break;
					case TYPE_INT:
						*(char*)op1_p = * (int*)op1;
						break;
					case TYPE_LONG:
						*(char*)op1_p = * (long long*)op1;
						break;
					case TYPE_FLOAT:
						*(char*)op1_p = * (float*)op1;
						break;
					case TYPE_DOUBLE:
						*(char*)op1_p = * (double*)op1;
						break;
					default: ;
						//should not get here
				}
				switch (op2_info.memtype)
				{
					case TYPE_BOOL:
						*(char*)op2_p = * (bool*)op2;
						break;
					case TYPE_CHAR:
						*(char*)op2_p = * (char*)op2;
						break;
					case TYPE_SHORT:
						*(char*)op2_p = * (short*)op2;
						break;
					case TYPE_INT:
						*(char*)op2_p = * (int*)op2;
						break;
					case TYPE_LONG:
						*(char*)op2_p = * (long long*)op2;
						break;
					case TYPE_FLOAT:
						*(char*)op2_p = * (float*)op2;
						break;
					case TYPE_DOUBLE:
						*(char*)op2_p = * (double*)op2;
						break;
					default: ;
						//should not get here
				}
				break;
			//***SHORT***//
			case TYPE_SHORT:
				switch (op1_info.memtype)
				{
					case TYPE_BOOL:
						*(short*)op1_p = * (bool*)op1;
						break;
					case TYPE_CHAR:
						*(short*)op1_p = * (char*)op1;
						break;
					case TYPE_SHORT:
						*(short*)op1_p = * (short*)op1;
						break;
					case TYPE_INT:
						*(short*)op1_p = * (int*)op1;
						break;
					case TYPE_LONG:
						*(short*)op1_p = * (long long*)op1;
						break;
					case TYPE_FLOAT:
						*(short*)op1_p = * (float*)op1;
						break;
					case TYPE_DOUBLE:
						*(short*)op1_p = * (double*)op1;
						break;
					default: ;
						//should not get here
				}
				switch (op2_info.memtype)
				{
					case TYPE_BOOL:
						*(short*)op2_p = * (bool*)op2;
						break;
					case TYPE_CHAR:
						*(short*)op2_p = * (char*)op2;
						break;
					case TYPE_SHORT:
						*(short*)op2_p = * (short*)op2;
						break;
					case TYPE_INT:
						*(short*)op2_p = * (int*)op2;
						break;
					case TYPE_LONG:
						*(short*)op2_p = * (long long*)op2;
						break;
					case TYPE_FLOAT:
						*(short*)op2_p = * (float*)op2;
						break;
					case TYPE_DOUBLE:
						*(short*)op2_p = * (double*)op2;
						break;
					default: ;
						//should not get here
				}
				break;
			//***INT***//
			case TYPE_INT:
				switch (op1_info.memtype)
				{
					case TYPE_BOOL:
						*(int*)op1_p = * (bool*)op1;
						break;
					case TYPE_CHAR:
						*(int*)op1_p = * (char*)op1;
						break;
					case TYPE_SHORT:
						*(int*)op1_p = * (short*)op1;
						break;
					case TYPE_INT:
						*(int*)op1_p = * (int*)op1;
						break;
					case TYPE_LONG:
						*(int*)op1_p = * (long long*)op1;
						break;
					case TYPE_FLOAT:
						*(int*)op1_p = * (float*)op1;
						break;
					case TYPE_DOUBLE:
						*(int*)op1_p = * (double*)op1;
						break;
					default: ;
						//should not get here
				}
				switch (op2_info.memtype)
				{
					case TYPE_BOOL:
						*(int*)op2_p = * (bool*)op2;
						break;
					case TYPE_CHAR:
						*(int*)op2_p = * (char*)op2;
						break;
					case TYPE_SHORT:
						*(int*)op2_p = * (short*)op2;
						break;
					case TYPE_INT:
						*(int*)op2_p = * (int*)op2;
						break;
					case TYPE_LONG:
						*(int*)op2_p = * (long long*)op2;
						break;
					case TYPE_FLOAT:
						*(int*)op2_p = * (float*)op2;
						break;
					case TYPE_DOUBLE:
						*(int*)op2_p = * (double*)op2;
						break;
					default: ;
						//should not get here
				}
				break;
			//***LONG LONG***//
			case TYPE_LONG:
				switch (op1_info.memtype)
				{
					case TYPE_BOOL:
						*(long long*)op1_p = * (bool*)op1;
						break;
					case TYPE_CHAR:
						*(long long*)op1_p = * (char*)op1;
						break;
					case TYPE_SHORT:
						*(long long*)op1_p = * (short*)op1;
						break;
					case TYPE_INT:
						*(long long*)op1_p = * (int*)op1;
						break;
					case TYPE_LONG:
						*(long long*)op1_p = * (long long*)op1;
						break;
					case TYPE_FLOAT:
						*(long long*)op1_p = * (float*)op1;
						break;
					case TYPE_DOUBLE:
						*(long long*)op1_p = * (double*)op1;
						break;
					default: ;
						//should not get here
				}
				switch (op2_info.memtype)
				{
					case TYPE_BOOL:
						*(long long*)op2_p = * (bool*)op2;
						break;
					case TYPE_CHAR:
						*(long long*)op2_p = * (char*)op2;
						break;
					case TYPE_SHORT:
						*(long long*)op2_p = * (short*)op2;
						break;
					case TYPE_INT:
						*(long long*)op2_p = * (int*)op2;
						break;
					case TYPE_LONG:
						*(long long*)op2_p = * (long long*)op2;
						break;
					case TYPE_FLOAT:
						*(long long*)op2_p = * (float*)op2;
						break;
					case TYPE_DOUBLE:
						*(long long*)op2_p = * (double*)op2;
						break;
					default: ;
						//should not get here
				}
				break;
			//***FLOAT***//
			case TYPE_FLOAT:
				switch (op1_info.memtype)
				{
					case TYPE_BOOL:
						*(float*)op1_p = * (bool*)op1;
						break;
					case TYPE_CHAR:
						*(float*)op1_p = * (char*)op1;
						break;
					case TYPE_SHORT:
						*(float*)op1_p = * (short*)op1;
						break;
					case TYPE_INT:
						*(float*)op1_p = * (int*)op1;
						break;
					case TYPE_LONG:
						*(float*)op1_p = * (long long*)op1;
						break;
					case TYPE_FLOAT:
						*(float*)op1_p = * (float*)op1;
						break;
					case TYPE_DOUBLE:
						*(float*)op1_p = * (double*)op1;
						break;
					default: ;
						//should not get here
				}
				switch (op2_info.memtype)
				{
					case TYPE_BOOL:
						*(float*)op2_p = * (bool*)op2;
						break;
					case TYPE_CHAR:
						*(float*)op2_p = * (char*)op2;
						break;
					case TYPE_SHORT:
						*(float*)op2_p = * (short*)op2;
						break;
					case TYPE_INT:
						*(float*)op2_p = * (int*)op2;
						break;
					case TYPE_LONG:
						*(float*)op2_p = * (long long*)op2;
						break;
					case TYPE_FLOAT:
						*(float*)op2_p = * (float*)op2;
						break;
					case TYPE_DOUBLE:
						*(float*)op2_p = * (double*)op2;
						break;
					default: ;
						//should not get here
				}
				break;
			//***DOUBLE***//
			case TYPE_DOUBLE:
				switch (op1_info.memtype)
				{
					case TYPE_BOOL:
						*(double*)op1_p = * (bool*)op1;
						break;
					case TYPE_CHAR:
						*(double*)op1_p = * (char*)op1;
						break;
					case TYPE_SHORT:
						*(double*)op1_p = * (short*)op1;
						break;
					case TYPE_INT:
						*(double*)op1_p = * (int*)op1;
						break;
					case TYPE_LONG:
						*(double*)op1_p = * (long long*)op1;
						break;
					case TYPE_FLOAT:
						*(double*)op1_p = * (float*)op1;
						break;
					case TYPE_DOUBLE:
						*(double*)op1_p = * (double*)op1;
						break;
					default: ;
						//should not get here
				}
				switch (op2_info.memtype)
				{
					case TYPE_BOOL:
						*(double*)op2_p = * (bool*)op2;
						break;
					case TYPE_CHAR:
						*(double*)op2_p = * (char*)op2;
						break;
					case TYPE_SHORT:
						*(double*)op2_p = * (short*)op2;
						break;
					case TYPE_INT:
						*(double*)op2_p = * (int*)op2;
						break;
					case TYPE_LONG:
						*(double*)op2_p = * (long long*)op2;
						break;
					case TYPE_FLOAT:
						*(double*)op2_p = * (float*)op2;
						break;
					case TYPE_DOUBLE:
						*(double*)op2_p = * (double*)op2;
						break;
					default: ;
						//should not get here
				}
				break;
			//***STRING***//
			case TYPE_STR:
				//***TBD***//
				break;
			default: ;
			
		}
	}

	switch (com) {
		case OP_SET_VALUE: //Set Value
			switch( outputtypetype ){
				case TYPE_BOOL:		m->write( res, (bool)op2); break;
				case TYPE_CHAR:		m->write( res, (char)op2); break;
				case TYPE_SHORT:	m->write( res, (short)op2); break;
				case TYPE_INT:		m->write( res, (int)op2); break;
				case TYPE_LONG:		m->write( res, *(long long*)op1_p); break;
				case TYPE_FLOAT:	m->write( res, (float)op2); break;
				case TYPE_DOUBLE:	m->write( res, *(double*)op1_p); break;
				case TYPE_STR:		/**/ break;
				default: ;											
			}
			break;
		//***BINARY OPERANDS***/
		case OP_ADD: //ADD
			switch( calculatetype ){
				case TYPE_BOOL:		m->write( res, *(bool*)op1_p + *(bool*)op1_p); break;
				case TYPE_CHAR:		m->write( res, *(char*)op1_p + *(char*)op1_p); break;
				case TYPE_SHORT:	m->write( res, *(short*)op1_p + *(short*)op1_p); break;
				case TYPE_INT:		m->write( res, *(int*)op1_p + *(int*)op1_p); break;
				case TYPE_LONG:		m->write( res, *(long long*)op1_p + *(long long*)op1_p); break;
				case TYPE_FLOAT:	m->write( res, *(float*)op1_p + *(float*)op1_p); break;
				case TYPE_DOUBLE:	m->write( res, *(double*)op1_p + *(double*)op1_p); break;
				case TYPE_STR:		/**/ break;
				default: ;											
			}
			break;
		case OP_SUB: //SUB
			switch( calculatetype ){
				case TYPE_BOOL:		m->write( res, *(bool*)op1_p - *(bool*)op1_p); break;
				case TYPE_CHAR:		m->write( res, *(char*)op1_p - *(char*)op1_p); break;
				case TYPE_SHORT:	m->write( res, *(short*)op1_p - *(short*)op1_p); break;
				case TYPE_INT:		m->write( res, *(int*)op1_p - *(int*)op1_p); break;
				case TYPE_LONG:		m->write( res, *(long long*)op1_p - *(long long*)op1_p); break;
				case TYPE_FLOAT:	m->write( res, *(float*)op1_p - *(float*)op1_p); break;
				case TYPE_DOUBLE:	m->write( res, *(double*)op1_p - *(double*)op1_p); break;
				case TYPE_STR:		/**/ break;
				default: ;											
			}
			break;
		case OP_MULT: //MULT
			switch( calculatetype ){
				case TYPE_BOOL:		m->write( res, *(bool*)op1_p * *(bool*)op1_p); break;
				case TYPE_CHAR:		m->write( res, *(char*)op1_p * *(char*)op1_p); break;
				case TYPE_SHORT:	m->write( res, *(short*)op1_p * *(short*)op1_p); break;
				case TYPE_INT:		m->write( res, *(int*)op1_p * *(int*)op1_p); break;
				case TYPE_LONG:		m->write( res, *(long long*)op1_p * *(long long*)op1_p); break;
				case TYPE_FLOAT:	m->write( res, *(float*)op1_p * *(float*)op1_p); break;
				case TYPE_DOUBLE:	m->write( res, *(double*)op1_p * *(double*)op1_p); break;
				case TYPE_STR:		/**/ break;
				default: ;											
			}
			break;
		case OP_DIV: //DIV
			switch( calculatetype ){
				case TYPE_BOOL:		m->write( res, *(bool*)op1_p / *(bool*)op1_p); break;
				case TYPE_CHAR:		m->write( res, *(char*)op1_p / *(char*)op1_p); break;
				case TYPE_SHORT:	m->write( res, *(short*)op1_p / *(short*)op1_p); break;
				case TYPE_INT:		m->write( res, *(int*)op1_p / *(int*)op1_p); break;
				case TYPE_LONG:		m->write( res, *(long long*)op1_p / *(long long*)op1_p); break;
				case TYPE_FLOAT:	m->write( res, *(float*)op1_p / *(float*)op1_p); break;
				case TYPE_DOUBLE:	m->write( res, *(double*)op1_p / *(double*)op1_p); break;
				case TYPE_STR:		/**/ break;
				default: ;											
			}
			break;
		case OP_MOD: //MOD
			switch( calculatetype ){
				case TYPE_BOOL:		m->write( res, *(bool*)op1_p % *(bool*)op1_p); break;
				case TYPE_CHAR:		m->write( res, *(char*)op1_p % *(char*)op1_p); break;
				case TYPE_SHORT:	m->write( res, *(short*)op1_p % *(short*)op1_p); break;
				case TYPE_INT:		m->write( res, *(int*)op1_p % *(int*)op1_p); break;
				case TYPE_LONG:		m->write( res, *(long long*)op1_p % *(long long*)op1_p); break;
				case TYPE_FLOAT:	/**/ break;
				case TYPE_DOUBLE:	/**/ break;
				case TYPE_STR:		/**/ break;
				default: ;											
			}
			break;
		case OP_AND: //AND
			switch( calculatetype ){
				case TYPE_BOOL:		m->write( res, *(bool*)op1_p & *(bool*)op1_p); break;
				case TYPE_CHAR:		m->write( res, *(char*)op1_p & *(char*)op1_p); break;
				case TYPE_SHORT:	m->write( res, *(short*)op1_p & *(short*)op1_p); break;
				case TYPE_INT:		m->write( res, *(int*)op1_p & *(int*)op1_p); break;
				case TYPE_LONG:		m->write( res, *(long long*)op1_p & *(long long*)op1_p); break;
				case TYPE_FLOAT:	/**/ break;
				case TYPE_DOUBLE:	/**/ break;
				case TYPE_STR:		/**/ break;
				default: ;											
			}
			break;
		case OP_OR: //OR
			switch( calculatetype ){
				case TYPE_BOOL:		m->write( res, *(bool*)op1_p | *(bool*)op1_p); break;
				case TYPE_CHAR:		m->write( res, *(char*)op1_p | *(char*)op1_p); break;
				case TYPE_SHORT:	m->write( res, *(short*)op1_p | *(short*)op1_p); break;
				case TYPE_INT:		m->write( res, *(int*)op1_p | *(int*)op1_p); break;
				case TYPE_LONG:		m->write( res, *(long long*)op1_p | *(long long*)op1_p); break;
				case TYPE_FLOAT:	/**/ break;
				case TYPE_DOUBLE:	/**/ break;
				case TYPE_STR:		/**/ break;
				default: ;											
			}
			break;
		case OP_LESS: //LESS
			switch( calculatetype ){
				case TYPE_BOOL:		m->write( res, *(bool*)op1_p < *(bool*)op1_p); break;
				case TYPE_CHAR:		m->write( res, *(char*)op1_p < *(char*)op1_p); break;
				case TYPE_SHORT:	m->write( res, *(short*)op1_p < *(short*)op1_p); break;
				case TYPE_INT:		m->write( res, *(int*)op1_p < *(int*)op1_p); break;
				case TYPE_LONG:		m->write( res, *(long long*)op1_p < *(long long*)op1_p); break;
				case TYPE_FLOAT:	m->write( res, *(float*)op1_p < *(float*)op1_p); break;
				case TYPE_DOUBLE:	m->write( res, *(double*)op1_p < *(double*)op1_p); break;
				case TYPE_STR:		/**/ break;
				default: ;											
			}
			break;
		case OP_MORE: //MORE
			switch( calculatetype ){
				case TYPE_BOOL:		m->write( res, *(bool*)op1_p > *(bool*)op1_p); break;
				case TYPE_CHAR:		m->write( res, *(char*)op1_p > *(char*)op1_p); break;
				case TYPE_SHORT:	m->write( res, *(short*)op1_p > *(short*)op1_p); break;
				case TYPE_INT:		m->write( res, *(int*)op1_p > *(int*)op1_p); break;
				case TYPE_LONG:		m->write( res, *(long long*)op1_p > *(long long*)op1_p); break;
				case TYPE_FLOAT:	m->write( res, *(float*)op1_p > *(float*)op1_p); break;
				case TYPE_DOUBLE:	m->write( res, *(double*)op1_p > *(double*)op1_p); break;
				case TYPE_STR:		/**/ break;
				default: ;											
			}
			break;
		case OP_LESSEQ: //LESSEQ
			switch( calculatetype ){
				case TYPE_BOOL:		m->write( res, *(bool*)op1_p <= *(bool*)op1_p); break;
				case TYPE_CHAR:		m->write( res, *(char*)op1_p <= *(char*)op1_p); break;
				case TYPE_SHORT:	m->write( res, *(short*)op1_p <= *(short*)op1_p); break;
				case TYPE_INT:		m->write( res, *(int*)op1_p <= *(int*)op1_p); break;
				case TYPE_LONG:		m->write( res, *(long long*)op1_p <= *(long long*)op1_p); break;
				case TYPE_FLOAT:	m->write( res, *(float*)op1_p <= *(float*)op1_p); break;
				case TYPE_DOUBLE:	m->write( res, *(double*)op1_p <= *(double*)op1_p); break;
				case TYPE_STR:		/**/ break;
				default: ;											
			}
			break;
		case OP_MOREEQ: //MOREEQ
			switch( calculatetype ){
				case TYPE_BOOL:		m->write( res, *(bool*)op1_p >= *(bool*)op1_p); break;
				case TYPE_CHAR:		m->write( res, *(char*)op1_p >= *(char*)op1_p); break;
				case TYPE_SHORT:	m->write( res, *(short*)op1_p >= *(short*)op1_p); break;
				case TYPE_INT:		m->write( res, *(int*)op1_p >= *(int*)op1_p); break;
				case TYPE_LONG:		m->write( res, *(long long*)op1_p >= *(long long*)op1_p); break;
				case TYPE_FLOAT:	m->write( res, *(float*)op1_p >= *(float*)op1_p); break;
				case TYPE_DOUBLE:	m->write( res, *(double*)op1_p >= *(double*)op1_p); break;
				case TYPE_STR:		/**/ break;
				default: ;											
			}
			break;
		case OP_EQ: //EQ
			switch( calculatetype ){
				case TYPE_BOOL:		m->write( res, *(bool*)op1_p == *(bool*)op1_p); break;
				case TYPE_CHAR:		m->write( res, *(char*)op1_p == *(char*)op1_p); break;
				case TYPE_SHORT:	m->write( res, *(short*)op1_p == *(short*)op1_p); break;
				case TYPE_INT:		m->write( res, *(int*)op1_p == *(int*)op1_p); break;
				case TYPE_LONG:		m->write( res, *(long long*)op1_p == *(long long*)op1_p); break;
				case TYPE_FLOAT:	m->write( res, *(float*)op1_p == *(float*)op1_p); break;
				case TYPE_DOUBLE:	m->write( res, *(double*)op1_p == *(double*)op1_p); break;
				case TYPE_STR:		/**/ break;
				default: ;											
			}
			break;
		case OP_NOTEQ: //NOTEQ
			switch( calculatetype ){
				case TYPE_BOOL:		m->write( res, *(bool*)op1_p != *(bool*)op1_p); break;
				case TYPE_CHAR:		m->write( res, *(char*)op1_p != *(char*)op1_p); break;
				case TYPE_SHORT:	m->write( res, *(short*)op1_p != *(short*)op1_p); break;
				case TYPE_INT:		m->write( res, *(int*)op1_p != *(int*)op1_p); break;
				case TYPE_LONG:		m->write( res, *(long long*)op1_p != *(long long*)op1_p); break;
				case TYPE_FLOAT:	m->write( res, *(float*)op1_p != *(float*)op1_p); break;
				case TYPE_DOUBLE:	m->write( res, *(double*)op1_p != *(double*)op1_p); break;
				case TYPE_STR:		/**/ break;
				default: ;											
			}
			break;

		default: ;
		
	}
	return 0;
}
