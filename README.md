Sifuscript
==========

Compilacion del Proyecto
----------

###Windows###

Compilador:
	
	build.bat


###Linux###
Compilador:
	
	make sifuc

Maquina virtual
---



Estructura del archivo resultante:

	Constantes

	Programa


###Constantes###

Para la del mapeo de memoria esta en la parte de **common/Types.h** para el tamano de cada tipo de dato.

Las constantes se guardan al principio del programa generado

###Programa###


Lista de cuadruplos del programa.

Un estatuto es:
	
	INSTRUCCION DIRECCION1 DIRECCION2 RESULTADO

Donde las instrucciones actualemente implementadas estan en **common/Operations.h**, representado por un caracter de 8bits

Las direcciones (1, 2 y resultante) son un entero de 32bits que representan la direccion de la variable a modificar