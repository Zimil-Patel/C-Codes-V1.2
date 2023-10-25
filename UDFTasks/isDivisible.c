#include<stdio.h>

//Q.2 Write a Program to check if a given number is divisible by both 3 & 5 or not using UDF.
void isDivisible(){

	int num;
	
	printf("Enter the number : ");
	scanf("%d", &num);
	
	
	if (num % 3 == 0 && num % 5 == 0)
		printf("%d is divisible by both 3 & 5", num);
	else
		printf("%d is not divisible by both 3 & 5", num);

}



void main(){

	isDivisible();

}