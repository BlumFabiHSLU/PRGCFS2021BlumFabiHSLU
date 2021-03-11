#include <stdio.h>
//float hat höhere Präzision, es wird immer alles in höchste vorkommende Präzision umwandeln

int main(int argc, char *argv[] )
{
	unsigned short largeShort = 32760; // short kann max 32767 haben, min -32768
	// unsigned min 0 max 65565. ohne das unsigned übertritt es das
	printf("after init: %d\n", largeShort);
	largeShort = largeShort + 12345;
	printf("after adding: %d\n", largeShort);

	int numerator = 19, denominator = 5;
	float result;
	//casting
	result = (float)numerator/denominator;
	
	printf("%d divided by %d = %0.2f\n", numerator, denominator, result);
	//%f für einen float, das 0.2 ist für 2 Kommastellen anzeigen

	float e = 2.718281828f;
	printf("after init: %f\n", e);
	e++;
	printf("after increment: %f\n", e);
	e--;
	printf("after decrement: %f\n", e);

	//double dblNumber = 12.8;
	//printf("after init: %f\n", dblNumber);
	//dblNumber = dblNumber % 3;


return 0;
}
