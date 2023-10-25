//Q-5  WAP to find out maximum out of three num using function.

#include<stdio.h>

int getValues(char varName){

	int num;
	
	printf("Enter the value of %c : ", varName);
	scanf("%d", &num);
	
	return num;

}

int findMaxOfThree(int a, int b, int c){

	return (a > b) ? (a > c) ? a : c: (b > c) ? b : c;

}

void main(){

	int a, b, c;
	
	a = getValues('a');
	b = getValues('b');
	c = getValues('c');
	
	printf("\n%d is Maximum", findMaxOfThree(a, b, c));

}