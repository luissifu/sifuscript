function int x() {
	int a = 0
}

function voidType() {
	int a = 0
}

function recursive(long num) {
	println num
	if (num > 0) {
		recursive(num - 1)
	}
}

function int twoParams(int x, int y) {
	println x
	println y
	return x + y
}

int a = 0
int b = 1

println twoParams(a, b) + 2;

voidType()


recursive(3)
