#include<stdio.h>
void main(){

	for (short i = 45; i <= 49; i++){
	
		for(short j = 45; j <= i; j++)
			printf("%hi ", j);

		printf("\n");
	}
}