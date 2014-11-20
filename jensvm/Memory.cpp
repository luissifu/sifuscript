#include "Memory.h"


Memory::Memory(  )
{
}

Memory::~Memory(){

}

void Memory::write( long dir, bool val){
	*(bool*)(mem+dir) = val;
}
void Memory::write( long dir, char val){
	*(char*)(mem+dir) = val;
}
void Memory::write( long dir, short val){
	*(short*)(mem+dir) = val;
}
void Memory::write( long dir, int val){
	*(int*)(mem+dir) = val;
}
void Memory::write( long dir, long long val){
	*(long long*)(mem+dir) = val;
}
void Memory::write( long dir, float val){
	*(float*)(mem+dir) = val;
}
void Memory::write( long dir, double val){
	*(double*)(mem+dir) = val;
}



	

struct pack Memory::get( long dir ){
	struct pack ret;
	ret.dir = mem+dir;
	if( glob.min_bool <= dir && dir <= glob.max_bool || loc.min_bool <= dir && dir <= loc.max_bool || temp.min_bool <= dir && dir <= temp.max_bool ){
		ret.type = TYPE_BOOL;
	} else if( glob.min_char <= dir && dir <= glob.max_char || loc.min_char <= dir && dir <= loc.max_char || temp.min_char <= dir && dir <= temp.max_char ){
		ret.type = TYPE_CHAR;
	} else if( glob.min_short <= dir && dir <= glob.max_short || loc.min_short <= dir && dir <= loc.max_short || temp.min_short <= dir && dir <= temp.max_short ){
		ret.type = TYPE_SHORT;
	} else if( glob.min_int <= dir && dir <= glob.max_int || loc.min_int <= dir && dir <= loc.max_int || temp.min_int <= dir && dir <= temp.max_int ){
		ret.type = TYPE_INT;
	} else if( glob.min_long <= dir && dir <= glob.max_long || loc.min_long <= dir && dir <= loc.max_long || temp.min_long <= dir && dir <= temp.max_long ){
		ret.type = TYPE_LONG;
	} else if( glob.min_float <= dir && dir <= glob.max_float || loc.min_float <= dir && dir <= loc.max_float || temp.min_float <= dir && dir <= temp.max_float ){
		ret.type = TYPE_FLOAT;
	} else if( glob.min_double <= dir && dir <= glob.max_double || loc.min_double <= dir && dir <= loc.max_double || temp.min_double <= dir && dir <= temp.max_double ){
		ret.type = TYPE_DOUBLE;
	} else if( glob.min_str <= dir && dir <= glob.max_str || loc.min_str <= dir && dir <= loc.max_str || temp.min_str <= dir && dir <= temp.max_str ){
		ret.type = TYPE_STR;
	} else {
		ret.type = TYPE_INVALID;
		//dead, kill yourself
	}
	return ret;
}

memtype Memory::getType( long dir ) {
	if( glob.min_bool <= dir && dir <= glob.max_bool || loc.min_bool <= dir && dir <= loc.max_bool || temp.min_bool <= dir && dir <= temp.max_bool ){
		return TYPE_BOOL;
	} else if( glob.min_char <= dir && dir <= glob.max_char || loc.min_char <= dir && dir <= loc.max_char || temp.min_char <= dir && dir <= temp.max_char ){
		return TYPE_CHAR;
	} else if( glob.min_short <= dir && dir <= glob.max_short || loc.min_short <= dir && dir <= loc.max_short || temp.min_short <= dir && dir <= temp.max_short ){
		return TYPE_SHORT;
	} else if( glob.min_int <= dir && dir <= glob.max_int || loc.min_int <= dir && dir <= loc.max_int || temp.min_int <= dir && dir <= temp.max_int ){
		return TYPE_INT;
	} else if( glob.min_long <= dir && dir <= glob.max_long || loc.min_long <= dir && dir <= loc.max_long || temp.min_long <= dir && dir <= temp.max_long ){
		return TYPE_LONG;
	} else if( glob.min_float <= dir && dir <= glob.max_float || loc.min_float <= dir && dir <= loc.max_float || temp.min_float <= dir && dir <= temp.max_float ){
		return TYPE_FLOAT;
	} else if( glob.min_double <= dir && dir <= glob.max_double || loc.min_double <= dir && dir <= loc.max_double || temp.min_double <= dir && dir <= temp.max_double ){
		return TYPE_DOUBLE;
	} else if( glob.min_str <= dir && dir <= glob.max_str || loc.min_str <= dir && dir <= loc.max_str || temp.min_str <= dir && dir <= temp.max_str ){
		return TYPE_STR;
	} else {
		//dead, kill yourself
		return TYPE_BOOL;
	}
}
