#include<stdio.h>
void main(){

	for (short i = 1; i <= 5; i++){
	
		for (short z = 5; z > i; z--)
			printf("  ");
			
		for(short j = 1; j <= i; j++)
			printf("%hi ", j);

		printf("\n");
	}
	
	for (short i = 2; i <= 5; i++){
		
		
		for (short z = 1; z < i; z++)
			printf("  ");
	
		for(short j = i; j <= 5; j++)
			printf("%hi ", j);

		printf("\n");
	}
}