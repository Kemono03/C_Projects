#include <stdio.h>
#include <string.h>
#include <conio.h>
//	Ceasar chipher Bruteforcer

int main(){
		
		char message[300];
		int length, letter, shift_value;
		
			printf("Enter a message to BruteForce: ");
				scanf("%[^\n]%*c", &message);
		
				length = strlen(message);
		
			printf("\nDecoding all shift values from 1 to 25: \n");

			for (shift_value = 1; shift_value < 26; shift_value++){
					printf("\n[%d] ", shift_value);
							for(letter = 0; letter < length; letter++){
									if (message[letter] - shift_value >= 97){
											printf("%c", message[letter] - shift_value);
									}
									else if (message[letter] - shift_value <= 97){
											printf("%c", message[letter] - shift_value + 26);
									}
						}
			}
		getch();
}
