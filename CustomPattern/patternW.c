#include<stdio.h>
void main(){

	short i, j;
	
		
	for(i = 1; i <= 7; i++)
	{
	
		for(j = 1; j <= 5; j++)
		{
		
			if(j == 1 || j == 5)
				printf("* ");
			else if ((i == 6 && j ==2) || (i == 6 && j == 4) || (i == 5 && j == 3))
				printf("* ");
			else
				printf("  ");
				
				
		}
		printf("\n");	
	}
	
}