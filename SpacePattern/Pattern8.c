#include<stdio.h>
void main(){

	short i, j, z;
	
	for(i = 1; i <= 5; i++){
		
		for(z = i; z > 1; z--){
		
			printf("  ");
		
		}
	
		for(j = i; j <= 5; j++){
		
			printf("%hi ", j);
		
		}
		printf("\n");
	
	}

}