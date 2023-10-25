#include<stdio.h>
void main(){

	short i, j, z;
	
		
	for(i = 5; i >= 1; i--){
	
		for(j = 1; j <= i; j++){
		
			printf("%hi ",j);
		
		}
		
		for(z = 5; z > i; z--){
		
			printf("  ");
		
		}
		
		for(z = 5; z > i; z--){
		
			printf("  ");
		
		}
		
		
		for(j = i; j >= 1; j--){
		
			printf("%hi ",j);
		
		}
		
		printf("\n");
	
	}
		
	
	
}