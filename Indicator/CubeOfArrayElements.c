/*
Q.2 Write a Program to find cubes of all elements from a given 2D array using Pointer with UDF.
For example,
Input:
Enter array's size: 2

Enter array elements:
a[0][0] = 3
a[0][1] = 2
a[1][0] = 5
a[1][1] = 4

Output:
Cubes of all elements:
9   4
25 64
*/

#include<stdio.h>

void getValues(int *arrPtr, int row, int column){

	printf("arr[%d][%d] = ",row, column);
	scanf("%d", arrPtr);

}

int cubeOf(int value){
	return value * value * value;
}

void findCubeOfArrayElements(int row, int column, int arr[][column]) {

	int *arrPtr[row][column];
	
	for (short i = 0; i < row; i++)
		for (short j = 0; j < column; j++){
		
			arrPtr[i][j] = &arr[i][j];
			*arrPtr[i][j] = cubeOf(	*arrPtr[i][j]);
		
		}

}

void main(){

	int row, column;
	
	printf("Enter size of row : ");
	scanf("%d", &row);
	
	printf("Enter size of column : ");
	scanf("%d", &column);
	
	int arr[row][column];
	
	printf("\n---Enter array elemnts---\n");
	for (short  i = 0; i < row; i++)
		for (short j = 0; j < column; j++)
			getValues(&arr[i][j], i, j);
			
	findCubeOfArrayElements(row, column, arr);
	
	printf("\n---Cube of all elements---\n");
	for (short  i = 0; i < row; i++){
		
		for (short j = 0; j < column; j++)
			printf("%d ",arr[i][j]);
	
		printf("\n");
	}
		

}