#include<stdio.h>
void main(){

	short i, j;
	
		
	for(i = 1; i <= 7; i++)
	{
	
		for(j = 1; j <= 5; j++)
		{
		
			if(i == 1)
			{
			
				if((i == 4 && j == 1) || (i == 1 && j == 1))
					printf("  ");
				else
					printf("* ");
			}
			else if(i == 4)
			{
				if((i == 4 && j == 1) || (i == 4 && j == 5))
				{
					printf("  ");
				}
				else
				{
					printf("* ");
				}
			}
			else if(i == 7)
			{
				if(i == 7 && j == 5)
				{
					printf("  ");
				}
				else
				{
					printf("* ");
				}
				
			}
			else if ((i == 5 && j == 5) || (i == 6 && j == 5) || (i == 2 && j == 1) || (i == 3 && j == 1))
			{
				printf("* ");
			}
			else
				printf("  ");
	
		}
		printf("\n");	
	}
	
}