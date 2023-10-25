#include<stdio.h>

void main(){

	
	short n , x;
	int sum = 0;
	
	printf("Enter value of n : ");
	scanf("%hi", &n);
	for(x = 1; x <= n ; x++){
		sum += x;
	}
	
	printf("sum = %d",sum);

}