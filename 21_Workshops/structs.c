#include <stdio.h>

#define FIRSTNAME_LENGTH 20
#define LASTNAME_LENGTH 30
#define COUNT_GRADES 6
#define NUMBER_STUDENTS 5


struct Student {
	char firstname[FIRSTNAME_LENGTH];
	char lastname[LASTNAME_LENGTH];
	float grades[COUNT_GRADES];
	float average;

};

struct Student students[NUMBER_STUDENTS] = {
[0].firstname = "Tony",	[0].lastname = "Stark",	[0].grades = {6.0, 5.8, 5.9, 6.0, 5.9, 6.0},
[1].firstname = "Peter",	[1].lastname = "Parker",	[1].grades = {4.5, 4.8, 5.8, 3.2, 5.9, 5.2},
[2].firstname = "Bruce",	[2].lastname = "Banner",	[2].grades = {5.5, 2.8, 5.3, 4.8, 5.4, 4.5},
[3].firstname = "Steve",	[3].lastname = "Rodgers",	[3].grades = {4.9, 3.9, 5.8, 2.3, 4.3, 5.4},
[4].firstname = "Natasha",	[4].lastname = "Romanoff",	[4].grades = {5.3, 5.2, 5.1, 5.7, 4.9, 5.9},
};

//Idee: Notenschnitt 
//Noten aufrufen: Student.grades[i]

int sum = 0;
int a = 0;
int main()
{
	for(int i = 0; i < NUMBER_STUDENTS; i++)//Schleife um Studenten durchzugehen
	{
		for(int j = 0; j < COUNT_GRADES; j++)//Schleife pro Student
		{
			sum += Student.grades[j];	
		}
		a = sum/COUNT_GRADES;
		printf("Die Durchschnittsnote von %s ist: %d", Student.firstname[i],a);
	}
return 0;
}

/*
int main(int argc, char *argv[] )
{






return 0;
}
*/
