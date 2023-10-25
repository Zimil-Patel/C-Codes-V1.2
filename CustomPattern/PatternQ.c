#include<stdio.h>
void main(){

	short i, j;
	
		
	for(i = 1; i <= 7; i++){
	
		for(j = 1; j <= 5; j++){
		
			if(i == 1 || i == 7 || j == 1 || j == 4){
			
				if((i == 1 && j == 1) || (i == 7 && j == 1) || (i == 1 && j == 4) || (i == 7 && j == 4) || (i == 1 && j == 5))
					printf("  ");
				else
					printf("* ");
			
			}
			else if (i == 5 && j == 3)
				printf("* ");
			else
				printf("  ");
		}
		
		printf("\n");
	
	}
		
	
	
}