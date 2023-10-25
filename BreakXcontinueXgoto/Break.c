#include<stdio.h>

void main(){

	//exit loop when sum of 1 to n become > 55
	int n, x, sum = 0;
	
	printf("Enter the value of n:");
	scanf("%d", &n);
	
	for(x = 1; x <= n; x++){
		
		printf("%d\n",x);
		sum += x;
		if(sum > 55){
			
			printf("sum became greater than 55 so loop is broken");
			break;	
		}
	
	}
	
	

}