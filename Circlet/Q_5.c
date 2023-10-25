#include<stdio.h>
void main(){

	short i, j, counter;
	
	for (i = 1; i <= 5; i++){
		
	
		for (j = 1; j <= i; j++)
			printf("%hi ", j);
			
			
		for(counter = i; counter < 5; counter++)
			printf("  ");
		
		for(counter = i; counter < 5; counter++)
			printf("  ");
	
	
		for (j = i; j >= 1; j--)
			printf("%hi ", j);
	
		printf("\n");
	
	}
	


}