#include <stdio.h>

//Aufgabe 1

//Faktorial n! Deklaration
int factorialn(int n);

//Faktorial k! Deklaration
int factorialk(int k);

//Faktorial (n-k)! Deklaration
int factorialklammer(int x);


int main(int n, int k)
{
	int x = n-k;
	int a = factorialn(n);
	int b = factorialk(k);
	int c = factorialklammer(x);
	
	int ntiefk = (a/(b*c));
	printf("the Result is %d \n", ntiefk);
return ntiefk;
}

//-------------------Definition n! und k! und (n-k)!-----------------------------

//Faktorial n! Definition
int factorialn(int n)
{
	int sum = 1;
	
	for (int i = n; i > 0;)
	{
		sum *= i;
		i -= 1;
	}
	
return sum;
}

//Faktorial k! Definition
int factorialk(int k)
{
	int sumk = 1;
	
	
	for (int i = k; i > 0;)
	{
		sumk *= i;
		i -= 1;
	}
return sumk;
}

//Faktorial (n-k)! Definition
int factorialklammer(int x)
{
	int sumx = 1;
	
	for (int i = x; i > 0;)
	{
		sumx *= i;
		i -= 1;
	}
return sumx;
}
