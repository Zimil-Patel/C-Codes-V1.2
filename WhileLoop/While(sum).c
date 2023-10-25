#include<stdio.h>
void main(){

	int N, x = 1, sum = 0;
	
	printf("Enter value of N : ");
	scanf("%d",&N);
	
	while(x <= N){
	
		sum += x;
		x++;
		
	}

	printf("sum is : %d",sum);
}
