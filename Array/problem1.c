//1.WAP to get & print 1D array of N elements.


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
	
	printf("\n\nElements of Array a :\n");
	
	for (short i = 0; i < n; i++){
	
		printf("a[%hi] = %hi\n", i, a[i]);
	
	}


}
