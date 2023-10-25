// Sort the array in descending order

#include<stdio.h>
void main(){

	short n;
	float average = 0;
	
	printf("Enter size of array : ");
	scanf("%hi", &n);
	
	short a[n];
	
	//Element of a
	printf("\n\nEnter array elements of a :\n");
	
	for (short i = 0; i < n; i++){
	
		printf("enter value of a[%hi] : ",i);
		scanf("%hi", &a[i]);	
	}
	
	//Ascending order
	printf("\n\nArray elements in ascending order :\n\n");
	
	for (short i = 0; i < n; i++){
		
		for (short j = 0; j < n; j++){
		
			if (i == j){
	
				continue;
		
			} else {
			
				if (a[i] > a[j]){
				
					a[i] = a[i] + a[j];
					a[j] = a[i] - a[j];
					a[i] = a[i] - a[j];
				
				}
			
			}
		
		}

	
		
	}
	
	
	for (short i = 0; i < n; i++){
		printf("\na[%hi] = %hi ", i, a[i]);	
		
	}
	
	
}