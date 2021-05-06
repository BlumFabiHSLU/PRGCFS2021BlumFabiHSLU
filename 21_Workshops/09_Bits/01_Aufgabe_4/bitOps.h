#ifndef _BITOPS_H_
#define _BITOPS_H_

//globale Variablen
extern unsigned char bitN;
extern unsigned char data;


//Funktionen Deklarieren:
void setBitNInByte( unsigned char* data, unsigned char bitN);
void clearBitNInByte( unsigned char* data, unsigned char bitN);
void toggleBitNInByte( unsigned char* data, unsigned char bitN);
//unsigned char BitNIsSet(unsigned char data);

#endif
