#include<stdio.h>
void main(){

	int N, x = 1;
	
	printf("Enter value of N : ");
	scanf("%d",&N);
	
	while(x <= N){
	
		if(x % 2 != 0)
			printf("%d ",x);
			
		x++;
		
	}

}