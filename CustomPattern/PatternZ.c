#include<stdio.h>
void main(){

	short i, j;
	
		
	for(i = 6; i >= 1; i--)
	{
	
		for(j = 1; j <= 6; j++)
		{
		
			if(i == 1 || i == 6 || i == j)
				printf("* ");
			else
				printf("  ");
				
				
		}
		printf("\n");	
	}
	
}