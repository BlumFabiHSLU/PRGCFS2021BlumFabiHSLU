#include <stdio.h>
#include <bitOps.h>





//Implementierung der Funktionen
void setBitNInByte( unsigned char* data, unsigned char bitN)
{
	for(i=0, i<3, i++)
	{
		int n;
		printf("Welches Bit möchten Sie auf 1 setzen?\n");
		scanf("%d",&n);
		Eingabe = Eingabe |=(1 << n);
	}
}

void clearBitNInByte( unsigned char* data, unsigned char bitN)
{

}

void toggleBitNInByte( unsigned char* data, unsigned char bitN)
{

}

unsigned char BitNIsSet(unsigned char data)
{

}



