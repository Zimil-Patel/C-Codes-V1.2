//4. WAP to print the multiplication table of each element of the array.
#include<stdio.h>
void main(){

	short n;
	
	printf("Enter size of array : ");
	scanf("%hi", &n);
	
	short a[n];
	
	printf("\n\nEnter array elements:\n");
	
	for (short i = 0; i < n; i++){
	
		printf("a[%hi] = ", i);
		scanf("%hi", &a[i]);
	
	}
	
	
	for (short i = 0; i < n; i++){
	
		printf("\n\nMultiplication table of %hi", a[i]);
		
		for (short j = 1; j <= 10; j++){
			printf("\n%hi * %hi = %hi", a[i], j, (a[i] * j));
		}
	
	}

}