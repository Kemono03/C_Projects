#include <stdio.h>
#include <string.h>
#include <conio.h>
//	Ceasar chipher Encoder

int main(){
		
		char message[300];
		int length, letter, shift_value;
		
			printf("Enter a message to encode: ");
				scanf("%[^\n]%*c", &message);
		
				length = strlen(message);
		
			printf("Shift value: ");
				scanf("%d", &shift_value);
			
			if (shift_value > 25){
					printf("The maximum shift value is 25!");
			}
			else{
					for(letter = 0; letter < length; letter++){
							if (message[letter] + shift_value > 122){
									printf("%c", message[letter] + shift_value - 26);	
							}
							else{
									printf("%c", message[letter] + shift_value);
							}
					}
				}
		getch();
}
