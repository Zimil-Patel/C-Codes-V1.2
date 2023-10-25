#include<stdio.h>
void main(){

	for (short i = 1; i <= 5; i++){
	
		for(short j = 1; j <= i; j++)
			printf("%hi ", j);

		printf("\n");
	}
	
	for (short i = 4; i >= 1; i--){
	
		for(short j = i; j >= 1; j--)
			printf("%hi ", j);

		printf("\n");
	}
}