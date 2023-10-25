#include<stdio.h>
void main(){

	int N, x = 1, factorial = 1;
	
	printf("Enter value of N : ");
	scanf("%d",&N);
	
	while(x <= N){
	
		printf("%d * %d = %d\n",N, x, N*x);
		x++;
		
	}

}