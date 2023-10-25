#include<stdio.h>
void main(){

	short i, j, k = 1;
	
	for(i = 1; i <= 5; i++){
	
		for(j = 1; j <= i; j++){
		
			printf("%hi ", k);
			k++;
		}
		printf("\n");
	
	}

}