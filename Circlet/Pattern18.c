#include<stdio.h>
void main(){

	for (short i = 1; i <= 5; i++){
	
		for(short j = 1; j <= i; j++)
			printf("%hi ", j);
			
			
		for (short z = 5; z > i; z--)
			printf("  ");
			
		for (short z = 5; z > i; z--)
			printf("  ");
			
			
		for(short j = i; j >= 1; j--)
			printf("%hi ", j);

		printf("\n");
	}
}