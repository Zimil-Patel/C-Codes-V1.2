//Q-2  WAP to area of triangle , circle, rectangle and square with switch case parameter with no return.  

#include<stdio.h>

void AreaOfTriangle(float height, float base){

	printf("Area of Triangle is : %.2f", (height * base)/2);

}


void AreaOfCircle(float radius){

		printf("Area of Circle is : %.2f", 3.14 * radius * radius);

}

void AreaOfRectangle(float length, float width){

		printf("Area of Rectangle is : %.2f", length * width);

}
void AreaOfSquare(float side){

	printf("Area of Square is : %.2f", side * side);	

}

float getValues(char varName[]){

	float value;
	printf("Enter value of %s : ", varName);
	scanf("%f", &value);
	
	return value;

}

void main(){

	int choice;
	float height, base, radius;
	
	printf("Press 1. for find are of triangle \nPress 2. for find area of circle \nPress 3. for find area of rectangle \nPress 4. for find area of square \nEnter Choice : ");
	scanf("%d", &choice);

	switch(choice){
		
		case 1:
			height = getValues("height");
			base = getValues("base");
			
			AreaOfTriangle(height, base);
			break;
			
		case 2:
			radius = getValues("radius");
			
			AreaOfCircle(radius);
			break;
			
		case 3:
			height = getValues("length");
			base = getValues("width");
			
			AreaOfRectangle(height, base);
			break;
			
		case 4:
			height = getValues("Side");
			AreaOfSquare(height);
			break;
	
		default:
			printf("invalid Choice!");
	}
}  
