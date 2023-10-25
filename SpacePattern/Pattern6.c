#include<stdio.h>
void main(){

	short i, j, z;
	
	for(i = 5; i >= 1; i--){
		
		for(z = 1; z < i; z++){
		
			printf("  ");
		
		}
	
		for(j = 5; j >= i; j--){
		
			printf("%hi ", i);
		
		}
		printf("\n");
	
	}

}