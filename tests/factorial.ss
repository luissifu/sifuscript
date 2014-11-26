function long factorial_rec(long n) {
	if n == 1 {
		return 1
	} else {
		long fact_prev = factorial_rec(n - 1)
		return n * fact_prev
	}
}

function long factorial_sec(long n) {
	if n == 1 {
		return 1
	} else {
		long fact = 1
		long i
		for i = 1; i <= n; i = i+1; {
			fact = fact * i
		}

		return fact
	}
}


long fact_n
println "Dame el factorial que deseas calcular: "
read fact_n

long m

long f
long f2 = factorial_sec(fact_n)
long f3 = factorial_rec(fact_n)

for m = 0; m <= fact_n; m = m+1; {
	if m == 0 {
		f = 1
	} else {
		f = f * m
	}
}

println "Main: " + f
println " Sec: " + f2
println " Rec: " + f3
