#include<stdio.h>
void main(){

	short i, j;
	
		
	for(i = 1; i <= 7; i++)
	{
	
		for(j = 1; j <= 5; j++)
		{
		
			if(j == 1 || j == 5)
			
				if( (i == 6 && j == 1) || (i == 7 && j == 1) || (i == 6 && j == 5) || (i == 7 && j == 5))
					printf("  ");
				else
					printf("* ");
			else if ((i == 6 && j ==2) || (i == 6 && j == 4) || (i == 7 && j == 3))
				printf("* ");
			else
				printf("  ");
				
				
		}
		printf("\n");	
	}
	
}