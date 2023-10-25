#include<stdio.h>
void main(){

	short i, j, z;
	
		
	for(i = 1; i <= 5; i++){
	
		for(j = 1; j <= i; j++){
		
			printf("%hi ",j);
		
		}
		
		for(z = i; z < 5; z++){
		
			printf("  ");
		
		}
		
		for(z = i; z < 5; z++){
		
			printf("  ");
		
		}
		
		
		for(j = i; j >= 1; j--){
		
			printf("%hi ",j);
		
		}
		
		printf("\n");
	
	}
		
	
	
}