#include<stdio.h>
void main(){

	for (short i = 5; i >= 1; i--){
		
		
		for (short z = 1; z < i; z++)
			printf("  ");
	
		for(short j = i; j <= 5; j++)
			printf("%hi ", j);

		printf("\n");
	}
}