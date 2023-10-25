#include<stdio.h>
void main(){

	short i, j, counter = 11;
	
	for (i = 41; i <= 45; i++){
	
		for (j = 41; j <= i; j++)
			printf("%hi ", counter++);
	
		printf("\n");
	
	}

}