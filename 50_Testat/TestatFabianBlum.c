#include <stdio.h>
#include <stdlib.h>

struct Daten {
	long long timeStamp;
	int pressure;
	char systemState;
	char alarmState;
};

int main()
{
	FILE *fin = fopen("pressureSpike.bin","rb");
	if( fin != NULL)
	{
		const int BYTES_IN_LINE = 14;
		unsigned char lineBuffer[BYTES_IN_LINE];
		
		while( fread(lineBuffer,BYTES_IN_LINE, 1, fin))
		{
			printf("time:%lld, ", ((struct Daten *)lineBuffer)->timeStamp);
			printf("pressure: %d, ", ((struct Daten *)lineBuffer)->pressure);
			printf("System State: %d, ", ((struct Daten *)lineBuffer)->systemState);
			printf("Alarm State: %d\n", ((struct Daten *)lineBuffer)->alarmState);
		}
	}
	return 0;
}




