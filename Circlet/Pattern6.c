#include<stdio.h>
void main(){

	for (short i = 5; i >= 1; i--){
	
		for(short j = i; j >= 1; j--)
			printf("%hi ", j);

		printf("\n");
	}
}