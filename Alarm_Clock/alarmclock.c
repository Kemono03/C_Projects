#include <stdio.h>
#include <stdlib.h>
#include <conio.h> 
#include <unistd.h> 
#include <windows.h>
#include <MMsystem.h>

void alarmclockwin();
void alarmclocklin();


int main()
{
	#ifdef _WIN32
	alarmclockwin();
	#elif __linux__
	alarmclocklin();
	#endif
	getch();
}


void alarmclockwin()
{
	SYSTEMTIME t; 		// Declares the SYSTEM-TIME struct
	GetLocalTime(&t); 	// Fill out the struct so that it can be used
	
	int hour = (t.wHour);
	int minute = (t.wMinute);
	int inputhour, inputmin;
	
	printf("Current Time: [%02d:%02d] --> 24H Format", hour, minute);
	
	printf("\n\nhour: ");
	scanf("%d",&inputhour);
	printf("\nminutes: ");
	scanf("%d",&inputmin);
	
	printf("\nyou can minimize but do not close this tab!");
	
	while (inputhour == hour || inputhour != hour && inputmin == minute || inputmin != minute)
	{ 
			sleep(60);
			GetLocalTime(&t);
			int hour = (t.wHour);
			int minute = (t.wMinute);
		
	if (inputhour == hour && inputmin == minute)
		{
			GetLocalTime(&t);
			system("cls");
			printf("\nTHE TIME IS %02d:%02d WAKE UPPP!\n", hour, minute);
			PlaySound(TEXT("alarm.wav"),NULL,SND_SYNC);
			MessageBox(0,"WAKE UP!", "ALARM CLOCK", MB_OK);
			break;
		}
	}
}


void alarmclocklin()
{
	printf("sorry, this virsion doesnt support linux yet :(");
}
