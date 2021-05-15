#include <stdio.h>

void binaer (long i)
{
	if(i<2)
		printf("%li", i);
	else
	{
		binaer (i/2);
		printf ("%li", i%2);
	}
}

int main(void)
{
	long dezimal = 7;
	binaer (dezimal);
	return 0;
}
