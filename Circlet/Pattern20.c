#include<stdio.h>
void main(){

	for (short i = 1; i <= 4; i++){
	
		for(short j = 1; j <= 7; j++){
		
			if ((i + j) == 5 || (i == 2 && j == 5) || (i == 3 && j == 6) || (i == 4 && j == 7))
				printf("* ");
			else
				printf("  ");
		}
		
		printf("\n");
	}
}