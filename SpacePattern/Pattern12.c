#include<stdio.h>
void main(){

	short i, j, z;
	
	for(i = 1; i <= 5; i++){
		
		for(z = 5; z > i; z--){
		
			printf("  ");
		
		}
	
		for(j = i; j >= 1; j--){
		
			printf("* ");
		
		}
		printf("\n");
	
	}

}