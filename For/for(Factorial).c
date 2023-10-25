#include<stdio.h>

void main(){

	
	short n , x;
	int factorial = 1;
	
	printf("Enter value of n : ");
	scanf("%hi", &n);
	for(x = 1; x <= n ; x++){
		factorial *= x;
	}
	
	printf("Factorial = %d",factorial);

}