#include<stdio.h>
void main(){

	int x, n;
	
	printf("Enter value of n : ");
	scanf("%d", &n);
	
	for (x = 1; x <= 10; x++){
	
		printf("%d * %d = %d\n",n, x, (n * x));
	
	}
}
