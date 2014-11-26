int x [5]
int y [2,2]
int z [1,2,3]

/*
x[0] = 1
x[1] = 2
x[2] = 3
x[3] = 4
x[4] = 5
*/
y[0,0] = 1
y[0,1] = 2
y[1,0] = 3
y[1,1] = 4

/*
z[0,0,0] = 1
z[0,0,1] = 2
z[0,0,2] = 3
z[0,1,0] = 4
z[0,1,1] = 5
z[0,1,2] = 6
*/

/*
println y[0,0]
println y[0,1]
println y[1,0]
println y[1,1]
*/

int i = 0
int j = 0

for i = 0; i < 2; i = i+1; {
	for j = 0; j < 2; j = j+1; {
		println "[" + i + "," + j + "]"
	}
}

#println z[0,1,2]
#int w = x[0] + y[0,0] + z[0,1,2]
