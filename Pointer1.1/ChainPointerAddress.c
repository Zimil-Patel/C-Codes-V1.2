//q4. wap to find the address of the chain pointer.

#include<stdio.h>

void main(){

	int x;
	
	int *ptr = &x;
	
	int **ptr2 = &ptr;
	
	int ***chainPtr = &ptr2;
	
	
	printf("Enter value of x : ");
	scanf("%d", &x);
	
	printf("\n\nValue of (x) = %d", x); // 10
	
	printf("\nValue of address of x = %d", &x); // address of x
	
	printf("\nValue of ptr = %d", ptr); // address of x
	
	printf("\nValue of *ptr = %d", *ptr); // 10
	
	printf("\nValue of address of ptr = %d", &ptr); // address of x
	
	printf("\nValue of ptr2 = %d", ptr2); // address ptr
	
	printf("\nValue of *ptr2 = %d", *ptr2); // address of ptr
	
	printf("\nValue of **ptr2 = %d", **ptr2); // *(*ptr2) = *(address of x) = 10
	
	printf("\nValue of address of ptr2 = %d", &ptr2); // address of ptr2
	
	printf("\nValue of chainPtr = %d", chainPtr); // address of ptr2
	
	printf("\nValue of *chainPtr = %d", *chainPtr); // *(address of ptr2) = address of ptr
	
	printf("\nValue of **chainPtr = %d", **chainPtr); // *(*(address of ptr2)) = *(address of ptr) = address of x
	
	printf("\nValue of ***chainPtr = %d", ***chainPtr); // 10
	
	printf("\nValue of address of chainPtr = %d", &chainPtr); // address of chainPtr

}