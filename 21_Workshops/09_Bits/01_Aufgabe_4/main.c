#include "bitOps.h"


unsigned char main(void)
{	
	//Anfangszahl
	data = 211;
	
	//n-tes Bit setzen
	bitN = 2;
	setBitNInByte(&data,bitN);
	bitN = 3;
	setBitNInByte(&data,bitN);
	bitN = 5;
	setBitNInByte(&data,bitN);
	printf("Die Zahl lautet nun:%d",data);
	
	//n-tes Bit löschen
	bitN = 4;
	clearBitNInByte(&data,bitN);
	bitN = 6;
	clearBitNInByte(&data,bitN);
	bitN = 7;
	clearBitNInByte(&data,bitN);
	printf("Die Zahl lautet nun:%d",data);
	
	//n-tes Bit wechseln	
	bitN = 1;
	toggleBitNInByte(&data,bitN);
	bitN = 4;
	toggleBitNInByte(&data,bitN);
	bitN = 6;
	toggleBitNInByte(&data,bitN);
	printf("Die Zahl lautet nun:%d",data);
	
	
	
	//BitNIsSet();

	return 0;
}



