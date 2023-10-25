#include<stdio.h>

void main(){

	short x, temp;
	
	printf("Enter value of x :");
	scanf("%hi",&x);
	
	temp = x / 2;
	temp = temp * 2;
	
	(temp == x) ? printf("x(%hi) is even number",x) : printf("x(%hi) is odd number",x);

}