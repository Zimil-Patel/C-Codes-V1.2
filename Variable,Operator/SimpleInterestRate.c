#include<stdio.h>

int main(){

	float principleAmount, interestRate;
	short int time;
	
	printf("Enter principle amount : ");
	scanf("%f",&principleAmount);
	
	printf("Enter interest rate : ");
	scanf("%f",&interestRate);
	
	printf("Enter time : ");
	scanf("%hd",&time);
	
	printf("Simple interest is : %.2f * %.2f * %hd / 100 = %.2f",principleAmount, interestRate, time, (principleAmount * interestRate * time) / 100);
	
 	return 0;

}