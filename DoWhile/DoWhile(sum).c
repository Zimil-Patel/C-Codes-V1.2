#include<stdio.h>

void main(){

	short x = 1, n;
	int sum = 0;
	
	printf("Enter value of n :");
	scanf("%hi", &n);
	
	do{
	
		sum += x;
		x++;
	
	}while(x <= n);
	
	printf("sum : %d", sum);

}