#include <stdio.h>

//Aufgabe 1:
//nach links verschieben = mal 2, nach rechts verschieben = durch 2

//Aufgabe 2:

int main()
{
	int Eingabe;	//Zahl abfragen
	printf("Geben Sie eine ganze Zahl ein: \n");
	
	if(scanf("%d",&Eingabe)!=1)	//prüft, ob die Eingabe korrekt ist
	{
		printf("falsche Eingabe\n");
	}
	else
	{
		int Entscheidung;	//verschieberichtung Anfragen
		printf("Geben Sie die verschiebe Richtung an:\n0 für rechts oder 1 für links:");
		scanf("%d", &Entscheidung);
		if(Entscheidung == 0)	//nach rechts
		{
			int Distanz;	//Anzahl Positionen abfragen
			int Resultat;
			char Richtung[6] = "rechts";
			printf("Um wieviele Positionen möchten Sie verschieben?:\n");
			scanf("%d", &Distanz);
			Resultat = (Eingabe >> Distanz);
			printf("Die Zahl %d um %d nach %s ergibt %d\n",Eingabe,Distanz,Richtung,Resultat);
		}	
		else if(Entscheidung == 1)	//nach links
		{
			int Distanz;	//Anzahl Positionen abfragen
			int Resultat;
			char Richtung[6] = "links";
			printf("Um wieviele Positionen möchten Sie verschieben?:\n");
			scanf("%d", &Distanz);
			Resultat = (Eingabe << Distanz);
			printf("Die Zahl %d um %d nach %s ergibt %d\n",Eingabe,Distanz,Richtung,Resultat);	
		}
		else	//falls falsche Eingabe
		{
			printf("falsche Eingabe,Programm beendet\n");
		}
	}
	
return 0;
}
