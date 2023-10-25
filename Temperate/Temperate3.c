#include<stdio.h>
void main(){

	int num, counter = 0;
	
	printf("Enter value of number : ");
	scanf("%d", &num);
	
	while( num > 0){
		
		counter++;
		num /= 10;
		
	}
	
	printf("There are %d digits in given number!",counter);
}
