#include <stdio.h>
#include <unistd.h>

// Programmstatus 
typedef enum {
	STARTUP = 1,	
	MESSBOLZENRUNTER,	
	MESSUNG,		
	MESSBOLZENRAUF,		
	BOXUNTERHALB,		
	BOXOBERHALB,		
	BOXAUSSERHALB,		
	CSVSCHREIBEN,		
	ERROR,
	AUSSCHALTEN		
} MachinaVereStatus;		

MachinaVeraStatus status = STARTUP;
	
// function prototypes
void ShowMenu( void );
int HeatingDone( void );


int main(void) {

	// endless loop
	int run = 1;
	while(run == 1) 
	{
		//CheckSensors();
		switch(status)		//alle Cases anpassen
		{
			case STARTUP:
				if( HeatingDone() )
				{
					ShowMenu();	
				}
				break;
				
			case MESSBOLZENRUNTER:
				
				status = MESSUNG;
				break;
		
			case MESSUNG:
				
				status = MESSBOLZENRAUF;
				break;
				
			case MESSBOLZENRAUF:
				
				status = BOXUNTERHALB;
				break;
			
			case BOXUNTERHALB:
				
				status = BOXOBERHALB;
				break;
				
			case BOXOBERHALB:
				
				status = BOXAUSSERHALB;
				break;
				
			case BOXAUSSERHALB:
				
				status = CSVSCHREIBEN;
				break;
				
			case CSVSCHREIBEN:
				
				status = STARTUP;//Aufpassen auf HeatingDone()
				break;
				
			case ERROR:
				
				status = STARTUP;//Aufpassen auf HeatingDone()
				break;
		
			case AUSSCHALTEN:
				printf("Shutting down.\n");
				run = 0;
				break;


			default:
				printf("Coffee Maker in Error State.\n");
				status = ERROR;
				break;
		}
	}

	return 0;
}

typedef enum {
	MENU_UNDEFINED = 0,
	MENU_REHEAT = 1,
	MENU_MAKECOFFEE,
	MENU_SHUTDOWN
} MenuItem;


//entfernen, falls kein Menu notwendig
void ShowMenu(void ){
	MenuItem menuSelected = MENU_UNDEFINED;
	int menuInput = 0;
	printf("Select from the following Options:\n");
	printf("1:  Re-heat\n");
	printf("2:  Make Coffee\n");
	printf("9: shutdown\n");
	// blocking read!!
	scanf("%d", &menuInput);
	menuSelected = (MenuItem)menuInput;
	switch(menuSelected)
	{
		case 1:
			status = HEATING;
			break;
		case 2:
			status = MILLING;
			break;
		
		case 9:
			status = SHUTDOWN;
			break;
	
		default:
			printf("Invalid selection.\n");
			status = SHOWMENU;
			break;
	}
}	




static int heatingCounter = 0;
int heatingLimit = 10;

// returns 1 if heating done, 0 otherwise. Evtl als Startinterface benutzen
int HeatingDone(void){
	int done = 0;
	//sleep(1);  // sleep for 1 s.
 	usleep(500000);  // sleep n microsecond
	printf("#");
	fflush(stdout);
	heatingCounter++;
	if(heatingCounter >= heatingLimit)
	{
		// reset the counter!! 
		heatingCounter = 0;
		done = 1;
		printf(" Heating Completed.\n");
	}
	return done;
}
