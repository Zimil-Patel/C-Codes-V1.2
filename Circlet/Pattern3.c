#include<stdio.h>
void main(){

	for (short i = 5; i >= 1; i--){
	
		for(short j = 5; j >= i; j--)
			printf("%hi ", j);

		printf("\n");
	}
}