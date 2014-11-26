#test for matrix

println 1

int y[2,2,2]

y[1,1,1] = 1

/*
y[0,0,1] = 2
y[0,1,0] = 3
y[0,1,1] = 4
y[1,0,0] = 5
y[1,0,1] = 6
y[1,1,0] = 7
y[1,1,1] = 8

int i
int j
int k

for i = 0; i < 2; i = i+1; {
	for j = 0; j < 2; j = j+1; {
		for k = 0; k < 2; k = k+1; {
			println "[" + i  + "," + j + "," + k + "] = " + y[i,j,k]
		}
	}
}

int x[5]
boolean y[2]

int i
int off = 1

int o[1]
int p[1]

o[0] = 10
p[0] = 100

for i = 0; i < 5; i = i+1; {
	x[i] = o[0] + p[0] + i
}

for i = 0; i < 5; i = i+1; {
	println "meep: " + x[i]
}
*
