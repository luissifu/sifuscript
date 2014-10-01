import "uno.ss"
import "otro.ss"

class Prueba {
	private int variable
	private int funcionClase() {}
}

function tipovoid() {
	int algo = 1;
}

function int contipo() {
	Prueba p
	int ret = p.variable
	return ret
}

function int conargs(int uno, int dos) 
{
	return uno + dos
}

char a = '0'
short b = 1
int c = 2
long d = 3
float e = 4.0
double f = 5.0
string g = "6"

int operaciones = 1 + 2 - 3 * 4 / 5 % 6

int x = 2

if x == 1
{
	print "1"
}
else if x == 2
{
	print "2"
}
else
{
	print "3"
}

int listauno = [1,2,3,4,5]
int listados = []

for x = 2; x < 3; x = x + 1
{
	print x
}

do {
	print x
	x = x + 1
} while x < 4

while x < 5
{
	print x
	x = x + 1
}
