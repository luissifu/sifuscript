function int x() {
	int a = 0
}

function voidType() {
	int a = 0
}

function long twoParams(long x, long y) {
	println x
	println y
	return x - y
}

function long new(long x) {
	if (x > 0) {
		return new(x - 1)
	} else {
		return 0
	}
}

function recursive(long num) {

}

function long fibonacci(long n) {
	if (n <= 2) {
		return 1
	} else {
		return fibonacci(n - 1)
	}
}


long x = twoParams(2,1)
println x
println '_'
println new(x)
println '_'
