#include<stdio.h>
void main(){

	for (short i = 1; i <= 5; i++){
		
		
		for (short z = i; z < 5; z++)
			printf("  ");
	
		for(short j = i; j >= 1; j--)
			printf("%hi ", j);

		printf("\n");
	}
}