#include<stdio.h>
void main(){

	int N;
	
	printf("Enter value of N : ");
	scanf("%d",&N);
	
	while(N > 0){
	
		if(N % 2 == 0)
			printf("%d ",N);
			
		N--;
		
	}

}