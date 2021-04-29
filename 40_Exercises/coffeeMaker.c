#include <stdio.h>
#include <unistd.h>

//Zustandsmaschine
typedef enum {
	HEATING = 1,
	SHOWMENU,
	MILLING,
	COFFEEMAKING,
	CLEANING,
	SHUTDOWN,
	ERROR
} CoffeeMakerStatus;


CoffeeMakerStatus status = HEATING;

//Funktion Prototyp	
int HeatingDone(void);
void ShowMenu(void);

int main(void) {

	// endless loop
	int run = 1;
	while(run == 1) 
	{	
	
		
		switch(status)
		{
			case HEATING:
				if( HeatingDone() )
				{
					status = SHOWMENU;
				}
				break;
		
			case SHOWMENU:
				ShowMenu();
				break;	
			// add all cases
		
			case SHUTDOWN:
				printf("Shutting down.\n");
				run = 0;
				break;


			default:
				printf("Coffee Maker in Error State.\n");
				status = SHUTDOWN;
				break;
		}
	}

	return 0;
}





void ShowMenu(void ){
	int menuSelected = 0;
	printf("Select from the following Options:\n");
	printf("1: re-heat\n");
	printf("9:shutdown\n");
	scanf("%d", &menuSelected);
	if( menuSelected ==1){
		status = HEATING;
	} else if( menuSelected == 9) {
		status = SHUTDOWN;
	} else {
		printf("Invalid selection.\n");
		status = SHOWMENU;
	}


}



static int heatingCounter = 0;
int heatingLimit = 6;	//simuliert, wann die Maschine warm ist

// returns 1 if heating done, 0 otherwise.
int HeatingDone(void){
	int done = 0;
	sleep(1);	//für eine Sekunde schlafen
	printf("#");
	fflush(stdout);
	heatingCounter++;
	if(heatingCounter >= heatingLimit)
	{
		done = 1;
		printf(" Heating Completed.\n");
	}
	return done;
}
