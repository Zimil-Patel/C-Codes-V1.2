//Q-1  WAP to enter two value and that values of sum,sub,mul and div using fun.     

#include<stdio.h>

float addition(float a, float b);
float subtraction(float a, float b);
float multiplication(float a, float b);
float division(float a, float b);
float muodulo(float a, float b);

float getValues(char varName);

void main(){

	printf("--Enter the values--\n");
	float a, b;
	
	a = getValues('a');
	b = getValues('b');
	
	printf("Addition of %.2f + %.2f = %.2f\n",a, b,addition(a, b));
	printf("Subtraction of %.2f - %.2f = %.2f\n",a, b, subtraction(a, b));
	printf("multiplication of %.2f * %.2f = %.2f\n",a, b, multiplication(a, b));
	printf("division of %.2f / %.2f = %.2f\n",a, b, division(a, b));
	printf("muodulo of %.2f %% %.2f = %.2f\n",a, b,muodulo(a, b));

}

float getValues(char varName){
	
	float num;
	
	printf("Enter the value of %c : ", varName);
	scanf("%f", &num);
	
	return num;

}

float addition(float a, float b){

	return a + b;

}

float subtraction(float a, float b){

	return a - b;

}

float multiplication(float a, float b){

	return a * b;

}

float division(float a, float b){

	return a / b;

}

float muodulo(float a, float b){

	return (float) ((int) a % (int) b);

}