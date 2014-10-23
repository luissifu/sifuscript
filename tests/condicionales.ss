boolean x = true

do 
{
	int y = 0

	for y = 0; y < 10; y = y + 1;
	{
		if x {
			print x
		} elif !x {
			print "false"
		} elif x && x {
			print "?"
		} else {
			print "yes"
		}
	}

} while x

print "end"
