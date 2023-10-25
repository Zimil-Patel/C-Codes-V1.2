/*
Q.1 Write a Program to find the length of a string using a Pointer.
For example,
Input:
Enter any string: hello world

Output:
The length of a string is: 11
*/

#include<stdio.h>
#include<string.h>
void main(){

	char str[30];
	
	printf("Enter the string : ");
	gets(str);
	
	int len = 0;
	int *ptr = &len;
	
	for (short i = 0; str[i] != '\0'; i++)
		*ptr += 1;
	
	printf("\nLength of string is : %d", *ptr);

}