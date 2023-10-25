#include<stdio.h>
void main(){

	short i, j, z;
	
	for(i = 1; i <= 5; i++){
		
		for(z = 1; z < i; z++){
		
			printf("  ");
		
		}
	
		for(j = i; j <= 5; j++){
		
			printf("%c ", (j + 64));
		
		}
		printf("\n");
	
	}

}