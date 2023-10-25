/*
Instructions:
1. Attempt all assigned tasks.
2. Make suitable assumptions wherever necessary.
3. Upload your lab work tasks by uploading your .c files.
4. These lab tasks are not in groups, so do not try to copy code from your classmates.

Questions:
Q.1 Write a Program to find the reverse of a 1D array using a Chain of Pointers.
For example,
Input:
Enter the array's size: 5


Enter array elements:
a[0] = 5
a[1] = 9
a[2] = 4
a[3] = 7
a[4] = 3

Output:
Reversed array elements:
3, 7, 4, 9, 5
*/

#include<stdio.h>

void getValues(char varName[], int *ptr){

	printf("Enter value of %s : ",varName);
	scanf("%d", ptr);

}

void getArrayElements(int *ptr, int n){

	printf("\n---Enter Array Elements ---\n");
	int **chainPtr = &ptr;
	
	for (short i = 0; i < n; i++){
	
		printf("a[%d] = ", i);
		scanf("%d", *chainPtr);
		*chainPtr += 1;
	
	}

}

void revArrayElements(int *ptr, int n){

	int m = n;
	int **chainPtr = &ptr;
	int temp = 0;
	
	
	for (short i = 0; i < n; i++){
	
		for (short j = 0; j < m; j++){
			
			
			if (j + 1 != m){
			
				temp = **chainPtr;
				**chainPtr = *(*chainPtr + 1);
				*(*chainPtr + 1) = temp;
				*chainPtr = *chainPtr + 1;
			}
			
		}
		*chainPtr = *chainPtr - (m - 1);
		m--;
	
	}
	

}

void printArray(int *ptr, int n){

	printf("\n--- Reversed Array Elements ---\n");
	int **chainPtr = &ptr;
	
	for (short i = 0; i < n; i++){
	
		printf("a[%d] = %d\n", i, **chainPtr);
		*chainPtr += 1;
	
	}

}

void main(){

	int n;
	getValues("n", &n);

	int arr[n];
	
	getArrayElements(arr, n);
	
	revArrayElements(arr, n);
	
	printArray(arr, n);

}