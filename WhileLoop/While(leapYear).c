#include<stdio.h>
void main(){

	int x = 2000;
	
	printf("All leap years between 2000 to 3000\n");
	
	while(x <= 3000){
	
		if(x % 4 == 0 && x % 100 != 0)
			printf("%d ",x);
			
		x++;
		
	}

}