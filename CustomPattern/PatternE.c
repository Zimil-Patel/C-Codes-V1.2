#include<stdio.h>
void main(){

	short i, j;
	
		
	for(i = 1; i <= 7; i++){
	
		for(j = 1; j <= 4; j++){
		
			if(j == 1 || i == 1 || i == 4 || i == 7) 
				printf("* ");
			else
				printf("  ");
		}
		
		printf("\n");
	
	}
		
	
	
}