//System Includes
#include <stdio.h> 

//Local Includes
#include "greetings.h"


//globale Variable
int greetingsCounter = 0;


//private Funktion, da Deklaration nicht im Headerfile deklariert ist
void IncrementGreetingsCounter( void )
{
	greetingsCounter++;
}

//implementierung
void SayHello(void)
{
	printf("Hello!\n");
	IncrementGreetingsCounter();
}


void SayGoodBye(void)
{
	printf("Goodbye!\n");
	
}
