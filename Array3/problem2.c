//2.WAP to find sum of 2D array.

#include<stdio.h>

void main(){

	short n, m, sum = 0;
	
	
	//receiving size of row & column
	printf("Enter size of row : ");
	scanf("%hi", &n);

	printf("Enter size of column : ");
	scanf("%hi", &m);
	
	//receiving 2D array elements
	short a[n][m];
	
	for (short i = 0; i < n; i++){
	
		for (short j = 0; j < m; j++){
		
		printf("\nEnter value of a[%hi][%hi] : ", i, j);
		scanf("%hi", &a[i][j]);
		sum += a[i][j];
		
		}
	
	}
	
	
	printf("\n\nSum of 2D array : %d", sum);
	
}