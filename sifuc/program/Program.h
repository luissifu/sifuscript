#pragma once

#include <string>
#include <vector>
#include <iostream>
//#include <fstream>
#include <stdio.h>

#include "Statement.h"
#include "../proc/Var.h"

class Program {
	public:
		Program();
		Program(std::string name);
		//guarda en el archivo los cuadruplos
		void write(FILE* file);
		//crea un nuevo cuadruplo
		void createStatement(char op, int left, int right, int result);
		//rellena el salto de un cuadruplo
		void fill(int position, int data);
		//obtiene el "ip" actual
		int getCounter();
		//regresa el tope de la lista de cuadruplos
		Statement pop();
		//agrega al tope de la lista de cuardruplos
		void push(Statement st);
		//crea un cuadruplo lleno de puros -1s para utilizar como fondo
		void createDummyStatement();
	private:
		std::vector<Statement> statlist;
		std::string name;
};
