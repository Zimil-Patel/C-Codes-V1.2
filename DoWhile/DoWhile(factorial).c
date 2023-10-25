#include<stdio.h>

void main(){

	short x = 1, n;
	int factorial = 1;
	
	printf("Enter value of n :");
	scanf("%hi", &n);
	
	do{
	
		factorial *= x;
		x++;
	
	}while(x <= n);
	
	printf("factorial : %d", factorial);

}