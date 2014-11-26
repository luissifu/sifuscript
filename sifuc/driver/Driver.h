#ifndef DRIVER_H
#define DRIVER_H

#include <string>
#include <vector>
#include <stack>
#include <fstream>
#include <sstream>
#include <stdio.h>

#include "../tokens.h"
#include "../expr/Context.h"
#include "../expr/Expression.h"
#include "../program/Program.h"
#include "../memory/MemManager.h"
#include "../except/Exceptions.h"

namespace ss {

/** Clase que se encarga de generar codigo en base a los tokens que recibe */
class Driver
{
public:
	/// construct a new parser driver context
	Driver(class SifuContext& cont, Program& prog);
	~Driver();

	/// enable debug output in the flex scanner
	bool trace_scanning;

	/// enable debug output in the bison parser
	bool trace_parsing;

	/// stream name (file or input stream) used for error messages.
	std::string streamname;

	/** Invoke the scanner and parser for a stream.
	 * @param in	input stream
	 * @param sname	stream name for error messages
	 * @return		true if successfully parsed
	 */
	bool parse_stream(std::istream& in,
			  const std::string& sname = "stream input");

	/** Invoke the scanner and parser on an input string.
	 * @param input	input string
	 * @param sname	stream name for error messages
	 * @return		true if successfully parsed
	 */
	bool parse_string(const std::string& input,
			  const std::string& sname = "string stream");

	/** Invoke the scanner and parser on a file. Use parse_stream with a
	 * std::ifstream if detection of file reading errors is required.
	 * @param filename	input file name
	 * @return		true if successfully parsed
	 */
	bool parse_file(const std::string& filename);

	// To demonstrate pure handling of parse errors, instead of
	// simply dumping them on the standard error output, we will pass
	// them to the driver using the following two member functions.

	/** Error handling with associated line number. This can be modified to
	 * output the error e.g. to a dialog box. */
	void error(const class location& l, const std::string& m);

	/** General error handling. This can be modified to output the error
	 * e.g. to a dialog box. */
	void error(const std::string& m);

	void saveconsts(FILE* file);

	/** Pointer to the current lexer instance, this is used to connect the
	 * parser to the scanner. It is used in the yylex macro. */
	class Token* lexer;

	/** Reference to the Context Class filled during parsing of the
	 * expressions.(Variable-tables and so on) */
	class SifuContext& context;

	//para crear los cuadruplos
	Program& program;

	//Manejador de memoria
	MemManager memory;

	//nombres de variables
	std::stack<std::string> idstack;

	//tipos de variables
	std::stack<int> typestack;

	//pila de saltos
	std::stack<int> jumps;

	//pila de dimensiones
	std::vector<int> dimensions;

	//lista de temporales
	std::vector<Var*> temps;

	//lista de constantes
	std::vector<Var*> consts;

	//lista para el for
	std::vector<Statement> forstats;

	//funcion actual
	CurrentFunction curr_func;

	//expresiones
	Expression expr;

	//agrega una id a la pila de ids
	void addId(char* str);

	//copia el tope de la pila de ids
	void copyId();

	//checa que la variable exsita
	void checkVar();

	//agrega un tipo a la pila de tipos
	void addType(char* type);

	//crear un operando en base a las pilas de tipos y de ids
	void toOperand();

	//agrega un operador
	void toOperator(char op);

	//termina la expresion, para quitar el fondo falso
	void endExp();

	//genera expresion del tipo pedido
	void genExp(char type);

	//obtiene la operaciones dado el operador
	char getMappedOp(char op);

	//genera una asignacion
	void genAssign();

	//agrega una constante
	void addConst(char* name, char type);

	//limpia los temporales
	void clearExp();

	//genera el if
	void genIf();

	//termina el if y actualiza los saltos restantes de los ifs
	void endIf();

	//genera un else, actualiza los saltos del if anterio
	void genElse();

	//genera un else if, actualiza los saltos del if anterio
	void genElseIf();

	//guarda el inicio del while
	void startWhile();

	//genera la condicion de salto
	void genWhile();

	//actualiza los saltos del while
	void endWhile();

	//genera un print
	void genPrint();

	//genera un println
	void genPrintLine();

	//genera un read
	void genRead();

	//guarda el inicio del do while
	void startDo();

	//genera la condicion de salto en base al inicio
	void genDo();

	//guarda el inicio del for
	void startFor();

	//remueve los estatuso de incremento y los pasa al temporal
	void saveFor();

	//genera la condicion, guarda el inicio de los estatutos de incremento
	void genFor();


	//vuelve a poner los estatutos del temporal y luego rellena los saltos
	void endFor();

	//verifica que la funcion no existe
	void checkFunc();

	//agrega un parametro
	void addParam();

	//guarda los parametros de la funcion
	void saveFunc();

	//genera el end func, cambia el contexto de vuelta al global
	void endFunc();

	//verifica que la funcionn exista
	void verifyFunc();

	//genera expansion
	void genEra();

	//genera salto a la subrutina
	void genSub();

	//genera el set param
	void genParam();

	//genera end prog
	void endProg();

	//genera el return
	void genReturn();

	//agrega una dimension a la pila
	void addDimension(char* size);

	//genera la verificacion de las dimensiones
	void genVerify();

	//agrega la direccion de los operadores
	void addExpDim();

	//checa que las dimensiones sean validas para la variable
	void checkDim(char* name);
};

} // namespace ss

#endif //DRIVER_H
