
#include<stdio.h>
void main(){

	short n;
	float average = 0;
	
	printf("Enter size of array : ");
	scanf("%hi", &n);
	
	short a[n];
	
	printf("Enter array elements:\n");
	
	for (short i = 0; i < n; i++){
	
		printf("enter value of a[%hi] : ",i);
		scanf("%hi", &a[i]);
		average += a[i];	
	}
	
	printf("\n\nAverage of an array : %.1f", average / n);

}