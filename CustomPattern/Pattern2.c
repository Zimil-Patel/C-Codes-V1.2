#include<stdio.h>
void main(){

	short i, j, z;
	
	
	for(i = 1; i <= 4; i++){
	
		for(j = 1; j <= i; j++){
		
		printf("%hi ",j);
		
		}
		
		printf("\n");
	
	}
		
	for(i = 5; i >= 1; i--){
	
		for(j = 1; j <= i; j++){
		
			printf("%hi ",j);
		
		}
		printf("\n");
	
	}
	
		
}