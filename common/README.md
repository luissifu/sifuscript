Common
========

Operations
--------


**SETV [SET VALUE]**

	SETV LEFT_VALUE RIGHT_VALUE CONST_ADDRESS

**ADD [ADD]**

	ADD ADDRESS_LEFT ADDRESS_RIGHT ADDRESS_RESULT

**SUB [SUBTRACT]**

	SUB ADDRESS_LEFT ADDRESS_RIGHT ADDRESS_RESULT

**MULT [MULTIPLY]**

	MULT ADDRESS_LEFT ADDRESS_RIGHT ADDRESS_RESULT

**DIV [DIVISION]**

	DIV ADDRESS_LEFT ADDRESS_RIGHT ADDRESS_RESULT

**MOD [MODULO]**

	MOD ADDRESS_LEFT ADDRESS_RIGHT ADDRESS_RESULT

**AND [AND]**

	AND ADDRESS_LEFT ADDRESS_RIGHT ADDRESS_RESULT

**OR [OR]**

	OR ADDRESS_LEFT ADDRESS_RIGHT ADDRESS_RESULT

**LESS [LESS THAN]**

	LESS ADDRESS_LEFT ADDRESS_RIGHT ADDRESS_RESULT

**MORE [MORE THAN]**

	MORE ADDRESS_LEFT ADDRESS_RIGHT ADDRESS_RESULT

**LSEQ [LESS OR EQUAL TO]**

	LSEQ ADDRESS_LEFT ADDRESS_RIGHT ADDRESS_RESULT

**MOEQ [MORE OR EQUAL TO]**

	MOEQ ADDRESS_LEFT ADDRESS_RIGHT ADDRESS_RESULT

**ASGN [ASSIGN]**

	ASGN ADDRESS_VALUE ~ ADDRESS_STORE_IN

**NOT [NOT]**

	NOT ADDRESS_VALUE ~ ADDRESS_RESULT

**JMPF [JUMP IF FALSE]**

	JMPF ADDRESS_VALUE ~ INSTRUCTION_POINTER

**JMPT [JUMP IF TRUE]**

	JMPT ADDRESS_VALUE ~ INSTRUCTION_POINTER

**JMP [JUMP]**

	JMP ~ ~ INSTRUCTION_POINTER

**PRNT [PRINT]**

	PRNT ~ ~ ADDRESS_STORE_IN

**READ [READ]**

	READ ~ ~ ADDRESS_STORE_IN

**JSUB [JUMP SUBROUTINE]**

	JSUB ~ ~ SUBROUTINE_START

**ERA [ERA]**

	ERA SUBROUTINE_SIZE ~ ~

**RET [RETURN]**

	RET ~ ~ ~

**SETP [SET PARAMETER]**

	SETP ADDRESS_VALUE ~ PARAM_NUM


Var
---------