//4. Print max & min array element.

#include<stdio.h>
void main(){

	short n, max = 0, min;
	
	printf("Enter size of array : ");
	scanf("%hi", &n);
	
	short a[n];
	
	//Element of a
	printf("\n\nEnter array elements of a :\n");
	
	for (short i = 0; i < n; i++){
	
		printf("enter value of a[%hi] : ",i);
		scanf("%hi", &a[i]);	
	}


	for (short i = 0; i < n; i++)
		if (a[i] > max)
			max = a[i];	
	
	min = max;
	
	for (short i = 0; i < n; i++)
		if (a[i] < min)
			min = a[i];
	
	printf("\n\nMaximum value is : %hi", max);
	printf("\nMinimum value is : %hi", min);

}
		
		
		
		
		
		
		
		