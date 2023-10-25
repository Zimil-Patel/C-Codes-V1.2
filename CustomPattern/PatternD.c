#include<stdio.h>
void main(){

	short i, j;
	
		
	for(i = 1; i <= 7; i++){
	
		for(j = 1; j <= 4; j++){
		
			if(j == 1)
				printf("* ");
			else if((i == 4 && j == 4) || (i == 5 && j == 4) || (i == 1 && j == 2) || (i == 2 && j == 3) || (i == 3 && j == 4) ||(i == 6 && j == 3) || (i == 7 && j == 2))  
				printf("* ");
			else
				printf("  ");
		}
		
		printf("\n");
	
	}
		
	
	
}