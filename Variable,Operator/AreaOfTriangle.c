#include<stdio.h>

int main(){
	
	float height, base;
	
	printf("Enter value of triangle height : ");
	scanf("%f",&height);
	
	printf("Enter value of triangle base : ");
	scanf("%f",&base);
	
	printf("Area of triangle is %.2f",(height * base)/2);
	
	return 0;
	
}