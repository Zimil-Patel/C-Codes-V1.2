#include<stdio.h>
void main(){
	
	short counter = 1;
	
	for (short i = 1; i <= 5; i++){
	
		for(short j = 1; j <= i; j++)
			printf("%hi ", counter++);

		printf("\n");
	}
}