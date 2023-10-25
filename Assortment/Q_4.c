//WAP Find two arrays and create a sum of arrays.

#include<stdio.h>
void main(){

	short n;
	
	printf("Enter size of array : ");
	scanf("%hi", &n);
	
	short a[n], b[n], c[n];
	
	//Element of a
	printf("\n\nEnter array elements of a :\n");
	
	for (short i = 0; i < n; i++){
	
		printf("enter value of a[%hi] : ",i);
		scanf("%hi", &a[i]);	
	}
	
	//Element of b
	printf("\n\nEnter array elements of b :\n");
	
	for (short i = 0; i < n; i++){
	
		printf("enter value of b[%hi] : ",i);
		scanf("%hi", &b[i]);	
		
	}
	
	//Array c
	printf("\n\nEelement of Array c : ");
	for (short i = 0; i < n; i++){
	
			printf("%hi", c[i] = a[i] + b[i]);
			
			if (i < n-1)
				printf(", ");
		
	}
	
}