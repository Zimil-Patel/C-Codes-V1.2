//N number factorial without loop

#include<stdio.h>

void main(){

	int x = 1, n, factorial = 1;
	
	printf("Enter value of n :");
	scanf("%d", &n);
	
	repeat:
		
		factorial *= x;
		x++;
		
		if(x <= n)
			goto repeat;
			
	printf("factorial of %d is : %d", n, factorial);

}