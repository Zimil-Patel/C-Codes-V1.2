#include<stdio.h>

void main(){

	int x, n, divisor;
	char flag = 'y';
	
	printf("Enter value of n : ");
	scanf("%d", &n);
	
	
	for(x = 2; x <= n; x++){
		
		flag = 'y';
		
		for(divisor = 2; divisor <= x; divisor++){
		
			if(divisor == x){
				
				continue;
				
			} else {
				
				if(x % divisor == 0){
					
					flag = 'n';
					break;
					
				} else {
					
					flag = 'y';
					
				}
				
			}
		
		}
		
		if(flag == 'y')
			printf("%d\n",x);
	
	}

}