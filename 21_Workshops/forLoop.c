#include <stdio.h>

// Aufgabe 1) 1 bis 10 addieren
int main() {
	int sum = 0;
	int start = 1;
	int end = 10;
	
	for(int i = start; i <= end; i++)
	{
		sum = sum + i;
	}
	
	printf("The sum from %d to %d is equal to %d\n", start, end, sum);
	printf("Aufgabe 1 erledigt\n");
//--------------------------------------------------------------------------

//Aufgabe 2) 1 bis 10 nur gerade Zahlen addieren

	int sum2 = 0;
	int start2 = 0;
	int end2 = 10;
	
	for(int i =start2; i <= end2; i += 2) // i = i + 2
	{
		sum2 = sum2 +i;
	}
	
	printf("The sum2 from %d to %d is equal to %d\n", start2, end2, sum2);
	printf("Aufgabe 2 erledigt\n");
//--------------------------------------------------------------------------

//Aufgabe 3) for loop von 40 rückwärts

	int start3 = 40;
	int end3 = 24;
	
	for(int i = start3; i > end3; i--)
	{
		printf("%d\n", i );
	}
	
	printf("Aufgabe 3 erledigt\n");
//--------------------------------------------------------------------------	

//Aufgabe 4) for loop von 1 3 9.. (x mal 3)

	int start4 = 1;
	int end4 = 729;
	
	for(int i = start4; i <= end4; i *= 3)
	{
		printf("%d\n", i );
	}
	printf("Aufgabe 4 erledigt\n");
//--------------------------------------------------------------------------

//Aufgaeb 5) 
//	int start5 = 1;
	int sum5 = 0;
//	int end5 = 100;
	
	for(int i = 1; i < 11; i++ )
	{
	printf("\n");
		for(int j = 1; j%11 != 0; j++ ) //j <=10 als einfachere Variante
		{
		
		sum5 += 1;
		
		printf("%d ", sum5 );
		}
	}
	printf("\nAufgabe 5 erledigt\n");
	
	return 0;
}
