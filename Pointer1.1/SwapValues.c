/*
Q.2 Write a Program to swap two variables using Pointers.
For example,
Input:
Enter the value of x: 5
Enter the value of y: 3

Output:
Before swapping:
x: 5
y: 3

After swapping:
x: 3
y: 5
*/

#include<stdio.h>

void swapValues(int *a, int *b){
				//a = address(a)
				//b = address(b)
	int c = *a; // c = *(address(a)) = 10; c = 10;
	*a = *b; 	// *(address(a)) = *(address(b)); 10 = 20; a(10) = 20;
	*b = c; 	// *(address(b)) = c; 20 = 10; b(20) = 10;

	printf("\n\n---After swapping in function()---\na = %d\nb = %d", *a, *b);

}

void main(){

	int a, b;
	
	printf("Enter value of a : ");
	scanf("%d", &a);
	
	printf("Enter value of b : ");
	scanf("%d", &b);
	
	printf("\n\n---Before swapping---\na = %d\nb = %d", a, b);
	
	swapValues(&a, &b);
	
	printf("\n\n---After swapping in main()---\na = %d\nb = %d", a, b);

}