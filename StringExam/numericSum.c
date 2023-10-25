//C program to count numeric elements from an alphanumeric string and find the sum of those numbers.


#include<stdio.h>
#include<string.h>
#include <stdlib.h>
void main(){

    char str[20], numeric[20];
    
    puts("Enter the string :");
    gets(str); //zim21
    
    int len = strlen(str);
    int sum = 0, count = 0;
    short j = 0;
    
    for(short i = 0; i < len; i++){
	
		if(str[i] >= '0' && str[i] <= '9')
        {
            numeric[j] = str[i];
            j++;
            count++;
            
        }
	
	}
	
	int intNumeric = atoi(numeric);

	
	while(intNumeric != 0){
	
		sum += (intNumeric % 10);
		intNumeric /= 10;
	
	}

	printf("\nThere are %d numeric\nsum of that numeric value is : %d", count, sum);
}