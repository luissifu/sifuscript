int x = 0;
int i;

for i = 0; i < 10; i = (i + 1) / 2; {
	x = x + i

	if (x % 2 == 0)
	{
		print "par"
	} else {
		print "impar"
	}
}

print x
