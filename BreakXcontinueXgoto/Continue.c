#include<stdio.h>

void main(){

	short x, num;
	
	
	printf("Enter the number you want to skip between 1 to 10 : ");
	scanf("%hi", &num);
	
	//skipping loop when x value is 6
	for(x = 1; x <= 10; x++){
	
		if(x == num)
			continue;
			
		printf("%hi ",x);
	
	}

}