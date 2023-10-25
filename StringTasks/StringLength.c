//3.WAP to given string length.

#include<stdio.h>
void main(){

	char a[20];
	short count = 0;
	
	printf("Enter the String : ");
	scanf("%s", &a);
	
	printf("\n\nGiven String is : %s", a);
	
	for (short i = 0; a[i] != '\0'; i++){
	
		count++;
	
	}
	
	printf("\n\nLength of String is : %hi", count);

}
