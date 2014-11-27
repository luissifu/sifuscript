#pragma once

#include <vector>
#include "Memory.h"

class MemoryManager {
	public:
		MemoryManager();
		~MemoryManager();
		//inicializa la memoria con el archivo
		void init(FILE* file);
		//escribe una constante a la direccion dada
		void write(int address, bool value);
		//escribe una constante a la direccion dada
		void write(int address, char value);
		//escribe una constante a la direccion dada
		void write(int address, short value);
		//escribe una constante a la direccion dada
		void write(int address, int value);
		//escribe una constante a la direccion dada
		void write(int address, long value);
		//escribe una constante a la direccion dada
		void write(int address, float value);
		//escribe una constante a la direccion dada
		void write(int address, double value);
		//escribe una constante a la direccion dada
		void write(int address, char* value);
		//imprime los tamanios de los registros de cada memoria
		void dump();
		//lee un dato de la memoria, ademas mapea hacia que bloque ir
		data_type read(int address);
		//lo mismo, solo que se utiliza para los parametros
		data_type read_sp(int address);
		//expande la memoria, crea una nueva memoria local con la cual trabajar
		void expand_mem();
		//remueve la memoria local
		void free_mem();
		//incrementa la memoria local que se esta utilizando
		void jump_sub();
	private:
		Memory global;
		std::vector<Memory*> local_mems;
		Memory temp;
		int blocksize;
		int selected_local;
};
