function long fibonacci_rec(long n) {
	if n <= 2 {
		return 1
	} else {
		long n1 = fibonacci_rec(n - 1)
		long n2 = fibonacci_rec(n - 2)
		return n2 + n1
	}
}

function long fibonacci_sec(long n) {
	if n <= 2 {
		return 1
	} else {
		long i
		long n1 = 1
		long n2 = 1
		long next

		for i = 2; i < n; i = i+1; {
			next = n2 + n1
			n1 = n2
			n2 = next
		}

		return next
	}
}

long fib_n
println "Dame el numero de fibonacci que deseas calcular: "
read fib_n


long mi
long m1 = 1
long m2 = 1
long f = 1

long f2 = fibonacci_sec(fib_n)
long f3 = fibonacci_rec(fib_n)

for m1 = 2; mi < fib_n; mi = mi+1; {
	f = m2 + m1
	m1 = m2
	m2 = f
}

println "Main: " + f
println " Sec: " + f2
println " Rec: " + f3
