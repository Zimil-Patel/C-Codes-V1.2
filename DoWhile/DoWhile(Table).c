#include<stdio.h>

void main(){

	short x = 1, n;
	
	printf("Enter value of n :");
	scanf("%hi", &n);
	
	do{
	
		printf("%hi * %hi = %d\n", n, x, (n * x));
		x++;
	
	}while(x <= n);


}