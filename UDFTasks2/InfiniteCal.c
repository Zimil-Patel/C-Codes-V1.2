//1.WAP to create infinite calc using UDF, switch case and Loop.

#include<stdio.h>

float getValues(char varName);
char runCalculator(float a, float b);
void addition(float a, float b);
void subtraction(float a, float b);
void multiplication(float a, float b);
void division(float a, float b);
void muodulo(float a, float b);


void main(){

	char repeat = 'y';
	float a, b;
	
	do{
	
		a = getValues('a');
		b = getValues('b');
		
		repeat = runCalculator(a, b);
		
	
	} while (repeat == 'y');
	
}


float getValues(char varName){
	
	float num;
	
	printf("Enter the value of %c : ", varName);
	scanf("%f", &num);
	
	return num;

}

char runCalculator(float a, float b){

	char operation = '\0', repeat = '\0';
	
	printf("\nEnter '+' for addition\nEnter '-' for subtraction\nEnter '*' for multiplication\nEnter '/' for Divison\nEnter '%%' for modulo\nEnter Operator : ");
	scanf(" %c", &operation);
	
	switch(operation){
	
		case '+':
			addition(a, b);
			break;
		
		case '-':
			subtraction(a, b);
			break;
			
		case '*':
			multiplication(a, b);
			break;
				
		case '/':
			division(a, b);
			break;
		
		case '%':
			muodulo(a, b);
			break;
			
		default:
			runCalculator(a, b);
	}
	
	printf("\n\ndo you want to perform again ? (y / n) : ");
	scanf(" %c", &repeat);
	printf("\n");

	return repeat;
}


void addition(float a, float b){

	printf("\n%.2f + %.2f = %.2f", a, b, a + b);

}

void subtraction(float a, float b){

	printf("\n%.2f - %.2f = %.2f", a, b, a - b);

}

void multiplication(float a, float b){

	printf("\n%.2f * %.2f = %.2f", a, b, a * b);

}

void division(float a, float b){

	printf("\n%.2f / %.2f = %.2f", a, b, a / b);

}

void muodulo(float a, float b){

	printf("\n%d %% %d = %d", (int) a, (int) b, (int) a % (int) b);

}
