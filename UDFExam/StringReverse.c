//Q-6  WAP to reverse a string using function.

#include<stdio.h>
#include<string.h>

void ReverseString(char str[]){

	char revStr[20];
	short j = strlen(str) - 1;
	
	for (short i = 0; i < strlen(str); i++){
	
		revStr[j] = str[i];
		j--;
	
	}
	
	printf("Reversed String : %s", revStr);

}


void main(){


	char str[20];
	
	
	printf("Enter the string : ");
	gets(str);
	
	
	ReverseString(str);

}