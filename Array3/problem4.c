//5.WAP to perform row-wise sum of 2D array.

#include<stdio.h>

void main(){

	short n, m, sum;
	
	
	//receiving size of row & column
	printf("Enter size of row : ");
	scanf("%hi", &n);

	printf("Enter size of column : ");
	scanf("%hi", &m);
	
	//receiving 2D array elements
	short a[n][m];
	short sum_arr[n];
	
	for (short i = 0; i < n; i++){
		
		sum = 0;
		for (short j = 0; j < m; j++){
		
			printf("\nEnter value of a[%hi][%hi] : ", i, j);
			scanf("%hi", &a[i][j]);
			sum += a[i][j];
			
		}
		
		sum_arr[i] = sum;
	
	}
	
	
	printf("\n\nCreated array:\n");
	for (short i = 0; i < n; i++){
	
		for (short j = 0; j < m; j++){
		
			printf("%hi ", a[i][j]);
			
		}
		printf("\n");
	
	}
	
	printf("\n\nRow-wise sum of array:\n");
	for (short i = 0; i < n; i++)
		printf("Row %hi sum : %hi \n", i+1, sum_arr[i]);
		
	
}