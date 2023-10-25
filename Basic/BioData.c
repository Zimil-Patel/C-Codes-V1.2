#include<stdio.h>

int main(){

	// char name, temp, languageSkilled;
	unsigned short int age, markOfSSC;
	unsigned int pinCode;
	float percentage;
	
	//Name
	// printf("Enter your name :");
	// scanf("%c",&name);
	
	//Age
	printf("Enter your age :");
	scanf("%hu",&age);
	
	//10th mark
	printf("Enter marks obtained in 10th :");
	scanf("%hu",&markOfSSC);

	//10th percentage
	printf("Enter percentage of 10th :");
	scanf("%f",&percentage);
	
	// //area pin code
	printf("Enter area pin code :");
	scanf("%u",&pinCode);
	
	
	//languageSkilled
	// printf("Enter language you have skilled :");
	// scanf(" %c",&languageSkilled);
	

	
	//Bio data
	printf("\n--- Prepared Bio Data ---");
	printf("\nFirst Name : Zimil");
	printf("\nLast Name : Patel");
	printf("\nDate of Birth : 10-01-2003");
	printf("\nAge : %hu",age);
	printf("\n10th Mark : %hu",markOfSSC);
	printf("\n10th percentage : %.2f",percentage);
	printf("\nExams cleared : 10th, 12th, BCA");
	printf("\nArea pin code : %u",pinCode);
	printf("\nSkilled languages : c, java");
	
	return 0;
	
}
