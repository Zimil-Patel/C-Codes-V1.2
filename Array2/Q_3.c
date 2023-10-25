//Q.3 Write a Program to find square of each element from the given array.

#include<stdio.h>
void main(){

	short x;
	
	
	//Array A
	printf("Enter size of an array A : ");
	scanf("%hi",&x);
	
	short a[x];
	
	printf("\nEnter elements of array A :\n");
	
	for (int i = 0; i < x; i++){
		
		printf("a[%hi] = ",i);
		scanf("%hi", &a[i]);
		a[i] *= a[i];
		
	}
	
	
	printf("\n\nElements of array A :\n");
	
	for (int i = 0; i < x; i++){
		
		printf("a[%hi] = %hi\n",i, a[i]);
			
	}
	
	

}