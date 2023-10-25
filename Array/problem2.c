//2. WAP to find the sum of a 1D array.


#include<stdio.h>
void main(){

	short n, sum = 0;
	
	printf("Enter size of array : ");
	scanf("%hi", &n);
	
	short a[n];
	
	printf("\n\nEnter array elements:\n");
	
	for (short i = 0; i < n; i++){
	
		printf("a[%hi] = ", i);
		scanf("%hi", &a[i]);
		sum += a[i];
	
	}
	
	printf("\n\nsum of an Array : %hi", sum);
	

}