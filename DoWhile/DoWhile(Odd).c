#include<stdio.h>
void main(){

	int n, x = 1;
	
	printf("Enter value of N : ");
	scanf("%d",&n);
	
	do{
		if(x % 2 != 0)
			printf("%hi ",x);
		x++;
	} while(x <= n);

}