//sum of N number without loop using Goto

#include<stdio.h>

void main(){

	int x = 1, n, sum = 0;
	
	printf("Enter value of n :");
	scanf("%d", &n);
	
	repeat:
		
		sum += x;
		x++;
		
		if(x <= n)
			goto repeat;
			
	printf("sum of %d is : %d", n, sum);

}