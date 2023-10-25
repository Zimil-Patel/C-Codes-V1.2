#include<stdio.h>
//WAP to sum the prime numbers between 1 to N
void main(){

	int x = 2, n, divisor;
	char flag = 'y';
	
	printf("Enter value of n : ");
	scanf("%d", &n);
	
	loop1:
		
		flag = 'y';
		divisor = 2;
		
		loop2:
			
			if(divisor == x){
				
				divisor++;
				goto loop2;
			
			} else {
			
				if(x % divisor == 0){
				
					flag = 'n';
					goto breakLoop;
					
				} else {
				
					flag = 'y';
				
				}
			
			}
			
			divisor++;
		
		if(divisor <= x)	
			goto loop2;
		
		breakLoop:
			
	
		if(flag == 'y')
			printf("%d\n",x);
			
		x++;
		
		if(x <= n)	
		goto loop1;
						

}
