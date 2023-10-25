#include<stdio.h>
void main(){

	short i, j;
	
		
	for(i = 1; i <= 7; i++)
	{
	
		for(j = 1; j <= 6; j++)
		{
		
			if(j == 1)
			{
			
				if(i == 1 && j == 1)
				{
				
					printf(" ");
				
				}
				else
				{
				
					printf("* ");
				
				}
			
			}
			else if((i == 1 && j == 2) || (i == 1 && j == 3) || (i == 1 && j == 4ss) || (i == 2 && j == 4) || (i == 3 && j == 4) || (i == 4 && j ==2) || (i == 4 && j == 3) || (i == 5 && j == 4) || (i == 6 && j == 5) || (i == 7 && j == 6))	
				printf("* ");
			else
				printf("  ");
	
		}
		printf("\n");
	
	}
}