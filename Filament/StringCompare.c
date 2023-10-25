//2. WAP compares two strings.

#include<stdio.h>
#include<string.h>
void main(){

	char str[20], str2[20];
	
	printf("Enter String1 : ");
	gets(str);
	
	printf("Enter String2 : ");
	gets(str2);
	
	
	if (strcmp(str, str2)){
	
		puts("\n\nBoth string are not same");
	
	} else {
	
		puts("\n\nBoth string are same");
	
	}

}