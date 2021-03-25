#include <stdio.h>

//Aufgabe 1

//Faktorial n! Deklaration
int factorialn(int n);

//Faktorial n! aufrufen
int main()
{
	int b = 5;// nur als Test, ob in Zeile 12 factorialn() ein b sein kann
	int a = factorialn(b);
	printf("the factorial is %d \n", a);
}

//Faktorial n! Definition
int factorialn(int n)
{
	int end = 0;
	int sum = 1;
	
	if(n == 0)
	{
	printf("Factorial of %d is 1\n", n);
	}	
	else
	{
		for (int i = n; i > 0;)
		{
			sum *= i;
			i -= 1;
		}
	}
	return sum;
}

