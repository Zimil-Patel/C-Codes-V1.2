//Q-3  WAP to find out factorial of a given num using function. 

#include<stdio.h>

int nToOneFact(int n){

	if(n == 1)
		return 1;
	
	return n * nToOneFact(n - 1);

}

void main(){

	int n;
	
	printf("Enter the value of N : ");
	scanf("%d", &n);
	
	printf("sum of 1 To %d is : %d", n, nToOneFact(n));

}