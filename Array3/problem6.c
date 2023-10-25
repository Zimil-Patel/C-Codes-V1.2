//7.WAP to perform diagonal and anti diagonal sum of 2D array.

#include<stdio.h>

void main(){

	short n, diagonalSum = 0, antiDiagonalSum = 0;
	
	
	//receiving size of row & column
	printf("Enter size of 2D array : ");
	scanf("%hi", &n);

	
	//receiving 2D array elements
	short a[n][n];
	
	for (short i = 0; i < n; i++){
		
		for (short j = 0; j < n; j++){
		
			printf("\nEnter value of a[%hi][%hi] : ", i, j);
			scanf("%hi", &a[i][j]);
		
		}
		
	
	}
	
	
	printf("\n\nCreated array:\n");
	
	for (short i = 0; i < n; i++){
		
		for (short j = 0; j < n; j++)
			printf("%hi ", a[i][j]);

		printf("\n");
		
	}
	

	
	for (short i = 0; i < n; i++){
	
		
		for (short j = 0; j < n; j++){
			
			
			if (i == j)
				diagonalSum += a[i][j];
				
			if ( (i + j) == (n - 1) )
				antiDiagonalSum += a[i][j];
			
		}	
		
	}
	
	printf("\n\nDiagonal sum of 2D array : %hi", diagonalSum);
	printf("\n\nAnti-Diagonal sum of 2D array : %hi", antiDiagonalSum);
}
