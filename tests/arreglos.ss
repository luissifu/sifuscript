long array[10]

array[0] = 1
array[1] = 7
array[2] = 9
array[3] = 6
array[4] = 5
array[5] = 10
array[6] = 8
array[7] = 2
array[8] = 4
array[9] = 3

function boolean find(long n) {
	boolean found = false
	int i = 0

	for i = 0; i < 10; i = i+1; {
		if n == array[i] {
			found = true
		}
	}

	return found
}

function sort() {
	int i = 0
	int j = 0
	long temp

	for i = 0; i < 10; i = i+1; {
		for j = i+1; j < 10; j = j+1; {
			if array[i] > array[j] {
				temp = array[i]
				array[i] = array[j]
				array[j] = temp
			}
		}
	}
}

function print_arr() {
	int i = 0

	for i = 0; i < 10; i = i+1; {
		println array[i]
	}
}

long n
println "Numero a buscar: "
read n

if find(n) {
	println "Se encontro " + n
} else {
	println "No se econtro " + n
}

println "Arreglo antes de sort"
print_arr()
sort()
println "Arreglo despues de sort"
print_arr()
