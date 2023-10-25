#include<stdio.h>
void main(){

	int x, n, factorial = 1;
	printf("Enter value of n : ");
	scanf("%d", &n);
	
	for(x = 1; x <= n; x++){
	
		factorial *= x;
	
	}
	
	printf("Factorial of 1 to %d is : %d",n, factorial);
}
