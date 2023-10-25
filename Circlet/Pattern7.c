#include<stdio.h>
void main(){

	for (short i = 1; i <= 5; i++){
	
		for(short j = i; j <= 5; j++)
			printf("%hi ", j);

		printf("\n");
	}
}