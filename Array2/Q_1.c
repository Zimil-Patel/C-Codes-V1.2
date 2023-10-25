//Q.1 Write a Program to perform the merge operation of two 1D arrays & store it in another array. Keep in mind that both array sizes can be different.

#include<stdio.h>
void main(){

	short x, y;
	
	
	//Array A
	printf("Enter size of an array A : ");
	scanf("%hi",&x);
	
	short a[x];
	
	printf("\nEnter elements of array A :\n");
	
	for (int i = 0; i < x; i++){
		
		printf("a[%hi] = ",i);
		scanf("%hi", &a[i]);
		
	}
	
	//Array B
	printf("\n\nEnter size of an array B : ");
	scanf("%hi",&y);
	
	short b[y];
	
	printf("\nEnter elements of array B :\n");
	
	for (int i = 0; i < y; i++){
		
		printf("b[%hi] = ",i);
		scanf("%hi", &b[i]);
		
	}
	
	
	//merged array C
	
	short c[x + y];
	
	printf("\n\nElements of array C :\n");
	
	for (int i = 0; i <= x; i++){
		
		if (i < x)
			c[i] = a[i];
		else{
			
			for (short j = 0; j < y; j++)
				c[i++] = b[j]; 
					
		}
			
	}
	
		for (int i = 0; i < x + y; i++){
		
			printf("c[%hi] = %hi\n",i, c[i]);
			
		}
	
	

}