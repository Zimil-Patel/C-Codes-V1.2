#include<stdio.h>
void main(){

	short i, j, z;
	
	for(i = 1; i <= 5; i++){
		
		for(z = 5; z > i; z--){
		
			printf("  ");
		
		}
	
		for(j = 1; j <= i; j++){
		
			(j % 2 == 0) ? printf("- ") : printf("| ");
		
		}
		printf("\n");
	
	}
	
}