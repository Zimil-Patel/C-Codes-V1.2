#include<stdio.h>
void main(){

	for (short i = 65; i <= 69; i++){
	
		for(short j = 65; j <= i; j++)
			printf("%c ", i);

		printf("\n");
	}
}