#include <stdio.h>
#include <stdlib.h>

struct Daten {
	long long timeStamp;
	int pressure;
	char systemState;
	char alarmState;
};
// CSV Datei vorgängig erstellt mit gedit TestatFabianBlum.csv
int main()
{
	FILE *fin = fopen("pressureSpike.bin","rb");
	if( fin != NULL)
	{
		const int BYTES_IN_LINE = 14;
		unsigned char lineBuffer[BYTES_IN_LINE];
		
		FILE *fp =fopen("TestatFabianBlum.csv", "wb");
		if(fp != NULL)
		{
		
			while( fread(lineBuffer,BYTES_IN_LINE, 1, fin))
			{
				fprintf(fp,"%lld;%d;%d;%d;\n", ((struct Daten *)lineBuffer)->timeStamp,((struct Daten *)lineBuffer)->pressure,((struct Daten *)lineBuffer)->systemState,((struct Daten *)lineBuffer)->alarmState);	
			}
		}
		
	fclose(fin);
	fclose(fp);
			
	}	
	
	return 0;
}





