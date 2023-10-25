// WAP check string is numeric or  not

#include<stdio.h>
#include<string.h>
void main(){

	char str[20];
	
	short numericCheck = 0;
	
	printf("Enter String1 : ");
	gets(str);
	
	for (short i = 0; i < strlen(str); i++){
	
		if (str[i] >= '0' && str[i] <= '9')
			numericCheck = 1;
	
	}
	
	if(numericCheck)
		printf("\nGiven String contain numeric value!");
	else
		printf("\nGiven String is not numeric!");

}