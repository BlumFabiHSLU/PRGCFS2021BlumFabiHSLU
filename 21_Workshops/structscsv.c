#include <stdio.h>
#include <stdlib.h>

#define FIRSTNAME_LENGTH 20
#define LASTNAME_LENGTH 30
#define COUNT_GRADES 6
#define NUMBER_STUDENTS 5


struct Student {
	char firstname[FIRSTNAME_LENGTH];
	char lastname[LASTNAME_LENGTH];
	float grades[COUNT_GRADES];

};

struct Student students[NUMBER_STUDENTS] = {
[0].firstname = "Tony",	[0].lastname = "Stark",	[0].grades = {6.0, 5.8, 5.9, 6.0, 5.9, 6.0},
[1].firstname = "Peter",	[1].lastname = "Parker",	[1].grades = {4.5, 4.8, 5.8, 3.2, 5.9, 5.2},
[2].firstname = "Bruce",	[2].lastname = "Banner",	[2].grades = {5.5, 2.8, 5.3, 4.8, 5.4, 4.5},
[3].firstname = "Steve",	[3].lastname = "Rodgers",	[3].grades = {4.9, 3.9, 5.8, 2.3, 4.3, 5.4},
[4].firstname = "Natasha",	[4].lastname = "Romanoff",	[4].grades = {5.3, 5.2, 5.1, 5.7, 4.9, 5.9},
};


//Aufgabe 3 Schnitt pro Student

float AlleNotenAddiert = 0;

int main()
{
	for(int i = 0; i < NUMBER_STUDENTS; i++)//Schleife um Studenten durchzugehen
	{
		float sum = 0;
		float a = 0;
		
			for(int j = 0; j < COUNT_GRADES; j++)//Schleife pro Student
			{
				AlleNotenAddiert += students[i].grades[j];//für Aufgabe 4 Klassenschnitt
				sum += students[i].grades[j];
				a = sum/COUNT_GRADES;	
			}
			
		
		printf("Die Durchschnittsnote von %s %s ist: %f\n", students[i].firstname,students[i].lastname,a);
	}
	float AnzahlNoten = NUMBER_STUDENTS * COUNT_GRADES;
	float Schnitt = AlleNotenAddiert/AnzahlNoten;
	printf("Der Klassendurchschnitt ist %f\n", Schnitt);//Ausgabe Aufgabe 4
	
// Daten in CSV printen
	FILE *outfile;
	outfile = fopen ("structscsv.csv", "w");
	if (outfile != NULL)
	{	
		for(int i = 0; i < NUMBER_STUDENTS; i++)
		{
			fprintf(outfile, "%s;%s;", students[i].firstname, students[i].lastname);
			
			for(int j = 0; j < COUNT_GRADES; j++)
			{
				fprintf(outfile, "%f;", students[i].grades[j]);
				
			}
			fprintf(outfile,"\n");
			
			//fwrite(&students[i], sizeof(struct Student), i, outfile);
				//fwrite(&students[i].grades[i], 6, 1, outfile);
			//fprintf(outfile,"\n");
		}
	fclose (outfile);
	}
	
	outfile =fopen("structscsv.csv","a");
	if (outfile != NULL)
	{
		fprintf(outfile, "Stephen;Strange;6.0;5.4;5.6;6.0;5.6;6.0\n");
		fprintf(outfile, "Nick;Fury;4.6;5.2;5.3;4.3;3.5;5.0\n");
		fprintf(outfile, "Hope;van Dyne;5.6;5.1;5.6;4.3;5.5;5.7\n");	
		fprintf(outfile, "Scott;Lang;4.6;4.2;5.7;5.9;4.5;5.2");			
	}
	fclose (outfile);
	
	
return 0;
}


