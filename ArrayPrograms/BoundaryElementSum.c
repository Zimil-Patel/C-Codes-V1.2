//Q.4 Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array.

#include<stdio.h>

void main(){

	short i, j, sum = 0;
	short a[5][5];
	
	
	printf(": Enter the values of matrix :\n\n");
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++){
		
			printf("a[%hi][%hi] : ",i, j);
			scanf("%hi", &a[i][j]);
		
		}
	
	//printing matrix & calculating sum
	printf("\n: Matrix :\n");
	
	for (i = 0; i < 5; i++){
	
		for (j = 0; j < 5; j++){
		
			printf("%hi ", a[i][j]);
			
			if(i == 0 || i == 4 || j == 0 || j == 4)
				sum += a[i][j];
		}
		printf("\n");
	
	}
	
	
	printf("sum of boundray values is : %hi", sum);

}