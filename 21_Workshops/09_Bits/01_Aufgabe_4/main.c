#include <bitOps.h>

int main(void)
{
	printf("geben Sie eine Zahl ein");
	scanf("%d",&Eingabe);
	
	setBitNInByte();
	clearBitNInByte();
	toggleBitNInByte();
	BitNIsSet();

	return 0;
}
