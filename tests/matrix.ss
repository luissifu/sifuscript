long m1[3,3]
long m2[3,3]
long m3

m1[0,0] = 1
m1[0,1] = 0
m1[0,2] = 0
m1[1,0] = 0
m1[1,1] = 1
m1[1,2] = 0
m1[2,0] = 0
m1[2,1] = 0
m1[2,2] = 1

m2[0,0] = 1
m2[0,1] = 0
m2[0,2] = 0
m2[1,0] = 0
m2[1,1] = 1
m2[1,2] = 0
m2[2,0] = 0
m2[2,1] = 0
m2[2,2] = 1

function print_mat(long m) {
	int i = 0
	int j = 0

	for i = 0; i < 3; i = i+1; {
		for j = 0; j < 3; j = j+1; {
			if m == 1 {
				print m1[i,j] + " "
			} elif m == 2 {
				print m2[i,j] + " "
			} else {
				print m3[i,j] + " "
			}
		}
		println " "
	}
}

function mult_mat() {
	int i = 0
	int j = 0
	int k = 0
	int sum = 0

	for i = 0; i < 3; i = i+1; {
		for j = 0; j < 3; j = j+1; {
			for j = 0; j < 3; j = j+1; {
				sum = sum + m1[i,k] * m2[k,j]
			]
			m3[i,j] = sum
			sum = 0
		}
	}
}


println "Matrix 1"
print_mat(1)
println "Matrix 2"
print_mat(2)
println "Result"
mult_mat()
print_mat(3)
