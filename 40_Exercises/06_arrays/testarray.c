#include <stdio.h>


#define ARRAY_LENGTH 6


void printArray( int myArray[], int arrayLength ) {
	for(int i = 0; i < arrayLength; i++)
	{
		printf("%d\n", myArray[i]);
	}
	printf("finished.\n");
}




int main(int argc, char *argv[] )
{
	// create array and init with 0
	int intarray[ARRAY_LENGTH] = {0};
	
	//print array
	printArray(intarray, ARRAY_LENGTH);

	// fill index into array
	for(int i = 0; i < ARRAY_LENGTH; i++) {
		intarray[i] = i;
	}
	
	//print array
	printArray(intarray, ARRAY_LENGTH);

	return 0;
}

