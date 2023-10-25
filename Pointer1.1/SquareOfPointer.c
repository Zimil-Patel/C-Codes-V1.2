/*
Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.
For example,
Input:
Enter the array's size: 5

Enter array's elements:
a[0] = 2
a[1] = 4
a[2] = 1
a[3] = 3
a[4] = 7

Output:
Square of each element:
4, 16, 1, 9, 49 '
*/

#include<stdio.h>
void main(){

	int n;
	printf("Enter size of 1D array : ");
	scanf("%d", &n);
	
	int arr[n];
	int *ptr[n];
	
	
	printf("\n--- Enter elements of array ---\n");
	
	for (short i = 0; i < n ; i++){
	
		ptr[i] = &arr[i];
		printf("a[%d] = ", i);
		scanf("%d", &*ptr[i]);
	
	}
	
	printf("\n--- Square of each elements ---\n");
	
	for (short i = 0; i < n ; i++){

		printf("%d ",(*ptr[i]) * (*ptr[i]));
	
	}

}