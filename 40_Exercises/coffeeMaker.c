#include <stdio.h>
#include <unistd.h>

typedef enum {
	HEATING = 1,
	READY,
	MILLING,
	COFFEEMAKING,
	CLEARING,
	SHUTDOWN,
	ERROR
} CoffeeMakerStatus;
cd 
CoffeeMakerStatus status = HEATING;
	
int HeatingDone(void);


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
					status = SHUTDOWN;
				}
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


static int heatingCounter = 0;
int heatingLimit = 6;

int HeatingDone(void){
	int done = 0;
	sleep(1);
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
