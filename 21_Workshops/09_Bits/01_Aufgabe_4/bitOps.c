#include <stdio.h>
#include "bitOps.h"

unsigned char bitN = 0;
unsigned char data = 211;

//Implementierung der Funktionen
void setBitNInByte( unsigned char* data, unsigned char bitN)
{
	*data = *data | (1 << bitN);	//Oder Operation mit n-tes Bit auf 1
}

void clearBitNInByte( unsigned char* data, unsigned char bitN)
{
	*data = *data & (0 << bitN);	//Und Operation mit n-tes Bit auf 0
}

void toggleBitNInByte( unsigned char* data, unsigned char bitN)
{
	*data = *data ^ (1 << (bitN-1));	//XOR kehrt den Wert um
}

/*unsigned char BitNIsSet(unsigned char data)
{

}
*/


