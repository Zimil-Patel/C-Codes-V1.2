#include<stdio.h>
#define pf printf
#define sf scanf

int main(){

	float num1, num2;
	
	
	//Addition
	pf("Enter Values for Addition operation (+)\n");
	
	pf("Number1 = ");
	sf("%f",&num1);

	pf("Number2 = ");
	sf("%f",&num2);
	
	pf("%.2f + %.2f = %.2f",num1, num2, num1 + num2);
	
	//Subtraction
	pf("\n\nEnter Values for Subtraction operation (-)\n");
	
	pf("Number1 = ");
	sf("%f",&num1);

	pf("Number2 = ");
	sf("%f",&num2);
	
	pf("%.2f - %.2f = %.2f",num1, num2, num1 - num2);
	
	//Multiplication
	pf("\n\nEnter Values for Multiplication operation (*)\n");
	
	pf("Number1 = ");
	sf("%f",&num1);

	pf("Number2 = ");
	sf("%f",&num2);
	
	pf("%.2f * %.2f = %.2f",num1, num2, num1 * num2);
	
	//Division
	pf("\n\nEnter Values for Division operation (/)\n");
	
	pf("Number1 = ");
	sf("%f",&num1);

	pf("Number2 = ");
	sf("%f",&num2);
	
	pf("%.2f / %.2f = %.2f",num1, num2, num1 / num2);
	
	//Modulus
	pf("\n\nEnter Values for Modulus operation (%%)\n");
	
	pf("Number1 = ");
	sf("%f",&num1);

	pf("Number2 = ");
	sf("%f",&num2);
	
	pf("%d %% %d = %d",(int)num1, (int)num2, (int)num1 % (int)num2);
	
	return 0;
}