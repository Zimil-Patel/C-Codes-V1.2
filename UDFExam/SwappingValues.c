//Q-4  WAP to interchange values of two variable using function using a parameter with no return.

#include<stdio.h>

void InterChangeValues(int a, int b){

	a = a + b;
	b = a - b;
	a = a - b;
	
	printf("\nAfter swapping values \na = %d \nb = %d", a, b);

}

int getValues(char varName){

	int num;
	
	printf("Enter the value of %c : ", varName);
	scanf("%d", &num);
	
	return num;

}


void main(){

	int a, b;
	
	a = getValues('a');
	b = getValues('b');
	
	printf("Before swapping values \na = %d \nb = %d", a, b);
	
	InterChangeValues(a, b);

}