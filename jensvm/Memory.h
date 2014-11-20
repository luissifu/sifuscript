#ifndef	MEMORY_H
#define MEMORY_H

#include "../common/Types.h"

struct data_type {
	char* data;
	memtype type;
};

struct pack{
	void* dir;
	memtype type;
};


/*Memory Management of VirtualMachine*/
class Memory
{
private: 
	struct scope_data {
		long min_bool;
		long max_bool;
		long min_char;
		long max_char;
		long min_short;
		long max_short;
		long min_int;
		long max_int;
		long min_long;
		long max_long;
		long min_float;
		long max_float;
		long min_double;
		long max_double;
		long min_str;
		long max_str;

		scope_data(){
			min_bool = -1;
			max_bool = -1;
			min_char = -1;
			max_char = -1;
			min_short = -1;
			max_short = -1;
			min_int = -1;
			max_int = -1;
			min_long = -1;
			max_long = -1;
			min_float = -1;
			max_float = -1;
			min_double = -1;
			max_double = -1;
			min_str = -1;
			max_str = -1;
		}
	}glob, loc, temp;


	char* mem;


public:
	Memory( );
	~Memory();


	void write( long dir, bool val);
	void write( long dir, char val);
	void write( long dir, short val);
	void write( long dir, int val);
	void write( long dir, long long val);
	void write( long dir, float val);
	void write( long dir, double val);

	struct pack get( long dir );
	memtype getType( long dir );

	
};

#endif //MEMORY_H


