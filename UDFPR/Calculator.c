//Q.1 Write a menu-driven program to implement arithmetic operations such as 
//+, -, *, /, and % using UDF, switch case, and looping. Make sure that the program is endless until a certain letter is pressed.

#include<stdio.h>
#define pf printf
#define sf scanf

char getChoice();
float getValues(char varName[]);
float performOperation(char choice, float a, float b);


void main(){

	char choice;
	float a, b;
	
	choice = getChoice();
	
	while (choice != '0' && (choice == '+' || choice == '-' || choice == '*' || choice == '/' || choice == '%')){
	
	
		a = getValues("first number");
		b = getValues("second number");
		
		printf("\n%.2f %c %.2f = %.2f\n\n", a, choice, b, performOperation(choice, a, b));
		
		choice = getChoice();
		
	}
	
}

char getChoice(){

	char choice;
	pf("Press 1 for +\nPress 2 for -\nPress 3 for *\nPress 4 for /\nPress 5 for %%\nPress 0 for exit");
		
	pf("\n\nEnter your choice : ");
	sf(" %c", &choice);
	
	pf("\n");
	
	return choice;

}

float getValues(char varName[]){

	float number;
	pf("Enter value of %s : ", varName);
	sf("%f", &number);
	
	return number;

}

float performOperation(char choice, float a, float b){
	
	float answer;

	switch(choice){
	
		case '+':
			return a + b;
			break;
			
		case '-':
			return a - b;
			break;
			
		case '*':
			return a * b;
			break;
			
		case '/':
			return a / b;
			break;
			
		case '%':
			answer = ((int) a % (int) b);
			return answer;
			break;
			
	}

}
