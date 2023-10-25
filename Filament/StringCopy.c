//5. Copy one string into another

#include<stdio.h>
#include<string.h>
void main(){

	char str[20], str2[20];
	
	printf("Enter String1 : ");
	gets(str);
	
	
	strcpy(str2, str);
	
	printf("\nString2 : %s", str);

	printf("\nString2 : %s", str2);

}