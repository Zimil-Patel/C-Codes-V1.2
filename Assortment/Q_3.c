#include<stdio.h>
void main(){

	short n, freq = 1;
	
	printf("Enter size of array : ");
	scanf("%hi", &n);
	
	short a[n];
	
	for (short i = 0; i < n; i++){
	
		printf("\na[%hi] = ",i);
		scanf("%hi", &a[i]);
	
	}
	
	for (short i = 0; i < n; i++){
	
		freq = 1;
		
		for (short j = 0; j < n ; j++)
			if (i == j)
				continue;
			else if (a[i] == a[j])
				freq++;
	
	
		printf("\n Frequency of %hi = %hi",a[i], freq);
	}
	
	

}