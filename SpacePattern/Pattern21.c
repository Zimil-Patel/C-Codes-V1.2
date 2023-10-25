#include<stdio.h>
void main(){

	short i, j, z;
	
	for(i = 5; i >= 1; i--){
		
		for(z = i; z < 5; z++){
		
			printf("  ");
		
		}
	
		for(j = 1; j <= i; j++){
		
			printf("%hi ", (i % 2));
		
		}
		printf("\n");
	
	}

}