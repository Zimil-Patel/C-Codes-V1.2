//Q.2 Write a Program to find leap years between two given numbers and store them in an array. And then print that array.


#include<stdio.h>
void main(){

	int num1, num2;
	
	printf("Enter number 1 : ");
	scanf("%d",&num1);
	
	printf("Enter number 2 : ");
	scanf("%d",&num2);
	
	if (num1 < num2){
	
		num1 = num1 + num2;
		num2 = num1 - num2;
		num1 = num1 - num2;
	
	}
	
	int n = num1 - num2;
	int a[n];
	
	printf("\n\nThe array is : ");
	
	short j = 0;
	
	for(int i = num2; i <= num1; i++){
	
		if (i % 4 == 0){
			
			a[j] = i;
			j += 1;
			
		}
			
	
	}
	
	
	for(int i = 0; i < j; i++){
	                        
		printf("%hi ",a[i]);
	
	}
		


}