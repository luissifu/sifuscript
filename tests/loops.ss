int x = 0;
int i;

for i = 0; i < 10; i = i + 1; {
	x = x + i

	if (x % 2 == 0)
	{
		print 'p'
	} else {
		print 'i'
	}
}

print x
