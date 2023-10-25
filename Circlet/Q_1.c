#include<stdio.h>
void main(){

	short i, j;
	
	for (i = 41; i <= 45; i++){
	
		for (j = 41; j <= i; j++)
			printf("%hi ", j);
	
		printf("\n");
	
	}

}