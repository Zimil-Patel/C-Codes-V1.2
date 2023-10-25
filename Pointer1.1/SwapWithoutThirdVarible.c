/*
Q.2 Write a Program to swap two variables using Pointers and without using third variable.
*/

#include<stdio.h>

void swapValues(int *a, int *b){
	
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;

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