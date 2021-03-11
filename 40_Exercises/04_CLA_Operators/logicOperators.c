#include <stdio.h>

int main(int argc, char *argv[] )
{
	//fall NICHT 3 Argumente erhalten, dann hier ins if (7-10)
	if( argc != 3 ){
	//input not valid
	printf("Usage:\n");
	printf("logicOperators Input1 Input2\n");
	}
	else
	{	//input is valid -->genau drei Argumente erhalten
		printf("number of input arguments: %d\n",argc );
	
		// nimm eine int variable i und starte mit 0
		// führe folgenden Code aus solange i kleiner argc
		// erhöhe i bei jedem durchlauf um 1
		
		for( int i = 0; i < argc; i++ )
		{
			printf("Argument %d was %s\n", i, argv [i]);
		
			//argv: - ./logicOperators
			//	- Fabian 
			//	- Blum
		}
		
		
	}
	return 0;

}


/*
	double e = 2.718281828;

	printf("%0.15f", e);
*/

