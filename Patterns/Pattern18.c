#include<stdio.h>
void main(){

	short i, j;
	
	for(i = 1; i <= 5; i++){
	
		for(j = 1; j <= i; j++){
		
			(j % 2 == 0) ? printf("1") : printf("0");
			
//			OR
//			if ( (i + j) % 2 == 0 ){
//				printf("1 ");
//			else
//				printf("0 ");
		
		
		}
		printf("\n");
	
	}

}