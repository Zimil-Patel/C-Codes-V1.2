#include<stdio.h>
void main(){

	short i, j, z;
	
	for(i = 5; i >= 1; i--){
		
		for(z = 5; z > i; z--){
		
			printf("  ");
		
		}
	
		for(j = 1; j <= i; j++){
		
			printf("%c ", (j + 64));
		
		}
		printf("\n");
	
	}

}