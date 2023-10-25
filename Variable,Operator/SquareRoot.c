//8. find square root of number without using any function.

#include<stdio.h>
void main(){
	
	short num;
	short SquareRoot = 0;
	
	printf("Enter the number : ");
	scanf("%hi", &num);
	
	
	for (short i = 0; i <= num/2 ; i++){
	
		if ((i * i) == num){
			
			SquareRoot = i;
			break;
		
		}
			
	}
	
	
	if (SquareRoot == 0)
		printf("Sorry!");
	else
		printf("\n\nSquareRoot of %hi is : %hi", num, SquareRoot);

}