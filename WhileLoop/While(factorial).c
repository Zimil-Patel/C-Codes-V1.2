#include<stdio.h>
void main(){

	int N, x = 1, factorial = 1;
	
	printf("Enter value of N : ");
	scanf("%d",&N);a
	
	while(x <= N){
	
		factorial *= x;
		x++;
		
	}

	printf("factorial of %d! is : %d",N, factorial);
}