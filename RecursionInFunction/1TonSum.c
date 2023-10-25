#include<stdio.h>

int nToOneSum(int n){

	if(n == 1)
		return 1;
	
	return n + nToOneSum(n);

}

void main(){

	int n;
	
	printf("Enter the value of N : ");
	scanf("%d", &n);
	
	printf("sum of 1 To %d is : %d", n, nToOneSum(n));

}