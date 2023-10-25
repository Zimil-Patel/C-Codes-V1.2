//C program to sort strings in alphabetical order.

#include<stdio.h>
#include<string.h>
void main(){

    char str[20];
    
    puts("Enter the string :");
    gets(str); //zimil
    
    int len = strlen(str);
    
    for(short i = 0; i < len; i++){

       for (short j = 0; j < len; j++){
	   
	   		if(i == j)
				continue;
			else if (str[i] < str[j]) {
			
				str[i] = str[i] + str[j];
				str[j] = str[i] - str[j];
				str[i] = str[i] - str[j];
			
			}
	   
	   }

    }
    
    printf("\nString after sorting in alphabetic order: %s", str);
}