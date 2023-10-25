#include<stdio.h>
void main(){

	long num, sum = 0, temp, remainder;
	
	printf("Enter value of number : ");
	scanf("%ld", &num);
	temp = num;
	while( num > 0){
		
		remainder = num % 10;
		
		if(num == temp)
			sum += remainder;
			
		num = num/10;
		
	}
	
	sum += remainder;
	
	printf("Sum of first and last digit of %ld is : %ld",temp, sum);
}
