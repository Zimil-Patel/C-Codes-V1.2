#include<stdio.h>
void main(){

	short i, j;
	
		
	for(i = 1; i <= 7; i++){
	
		for(j = 1; j <= 4; j++){
		
			if(i == 1 || i == 7 || j == 1) 
				printf("* ");
			else
				printf("  ");
		}
		
		printf("\n");
	
	}
		
	
	
}