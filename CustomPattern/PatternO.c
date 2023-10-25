#include<stdio.h>
void main(){

	short i, j;
	
		
	for(i = 1; i <= 7; i++){
	
		for(j = 1; j <= 5; j++){
		
			if(i == 1 || i == 7 || j == 1 || j == 5){
			
				if((i == 1 && j == 1) || (i == 7 && j == 1) || (i == 1 && j == 5) || (i == 7 && j == 5))
					printf("  ");
				else
					printf("* ");
			
			}
			else
				printf("  ");
		}
		
		printf("\n");
	
	}
		
	
	
}