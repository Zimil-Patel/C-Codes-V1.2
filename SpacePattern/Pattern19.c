#include<stdio.h>
void main(){

	short i, j, z;
	
	for(i = 5; i >= 1; i--){
		
		for(z = i; z < 5; z++){
		
			printf("  ");
		
		}
	
		for(j = i; j >= 1; j--){
		
			printf("%hi ", (j % 2));
		
		}
		printf("\n");
	
	}

}