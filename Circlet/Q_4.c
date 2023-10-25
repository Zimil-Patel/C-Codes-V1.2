#include<stdio.h>
void main(){

	short i, j, counter;
	
	for (i = 5; i >= 1; i--){
		
		
		for (counter = i; counter < 5; counter++)
			printf("  ");
	
		for (j = 1; j <= i; j++)
			printf("%hi ", j % 2);
	
		printf("\n");
	
	}

}