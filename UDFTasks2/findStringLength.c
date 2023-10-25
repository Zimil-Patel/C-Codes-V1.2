//Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF.

#include<stdio.h>
#include<stdio.h>

int findLength(char str[]);

void main(){

	char str[20];
	
	printf("Enter the String : ");
	gets(str);
	
	printf("\nLength of String is : %d", findLength(str));

}


int findLength(char str[]){

	int length = 0;
	
	for (short i = 0; str[i] != '\0'; i++)
		length++;
		
	return length;

}