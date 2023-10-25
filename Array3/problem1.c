//1.WAP to get & print 2D array of N elements.

#include<stdio.h>

void main(){

	short n, m;
	
	
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
		
		}
	
	}
	
	
	//printing 2D array
	
	printf("\n\nElements of 2D array\n");
	for (short i = 0; i < n; i++){
	
		for (short j = 0; j < m; j++){
		
			printf("\na[%hi][%hi] = %hi", i, j, a[i][j]);
		
		}
	
	}
}