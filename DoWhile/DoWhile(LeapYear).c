#include<stdio.h>

void main(){

	short x = 2000;
	
	printf("Leap years : ");
	
	do{
	
		if(x % 4 == 0)
			printf("%hi ",x);
	
		x++;
		
	} while(x <= 3000);

}