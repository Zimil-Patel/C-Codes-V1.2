#include<stdio.h>

//Q.1 Write a Program to find the cube of a given number using UDF
void findCube(){

	int num;
	
	printf("Enter the number : ");
	scanf("%d", &num);
	
	printf("cube of %d is : %d", num, (num*num*num));

}



void main(){

	findCube();

}