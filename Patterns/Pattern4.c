#include<stdio.h>
void main(){

	short i, j;
	
	for(i = 5; i >= 1; i--){
	
		for(j = 5; j >= i; j--){
		
			printf("%hi ", j);
		
		}
		printf("\n");
	
	}

}