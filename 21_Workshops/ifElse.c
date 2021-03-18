#include <stdio.h>


int main(int argc, char *argv[] )
{

//Aufgabe 1
	int start1 = 1;
	int end1 = 500;
	
	for( int i = start1; i < end1;)
	{
		if(i%19 == 0)//Teilbar durch 19
		{
			printf("%d\n", i);
			i += 1;
		}
		else
		{
			i +=1;
		}
	}
	printf("\nAufgabe 1 erledigt\n");

//---------------------------------------------------------------------------------------
	
//Aufgabe 2

	int start2 = 1;
	int end2 = 200;
	
	for( int j = start2; j < end2;)
	{
		if((j%7 == 0) && (j%11 == 0))//durch 7 und 11
		{
			printf("7 and 11: %d\n", j);
			j += 1;
		}
		else if(j%17 == 0)//durch 17
		{
			printf("17: %d\n", j);
			j += 1;
		}
		else
		{
			j += 1;
		}
	}
	printf("\nAufgabe 2 erledigt\n");

//---------------------------------------------------------------------------------------
	
//Aufgabe 3

	int start3 = 0;
	int end3 = 200;
	
	for( int k = start3; k < end3;)
	{
		if(k%11 == 0)//durch 11
		{
			if(k%7 == 0)//durch 11 und 7 
			{
				printf("11 and 7: %d\n", k);
				k += 1;
			}
			else//nur durch 11
			{
				printf("11 but not 7: %d\n", k);
				k += 1;
			}
		}
		else//nicht durch 11
		{
			k += 1;
		}
	}
	printf("\nAufgabe 3 erledigt\n");



return 0;
}
