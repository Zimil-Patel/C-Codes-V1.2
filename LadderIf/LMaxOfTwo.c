#include<stdio.h>
#define pf printf
#define sf scanf

void main(){

	short num1, num2;


        pf("Enter the value of num1 : ");
        sf("%hi",&num1);

       	pf("Enter the value of num2 : ");
    	sf("%hi",&num2);

        if(num1 > num2){

            pf("\nnum1(%hi) is maximum",num1);

        } else if(num2 > num1){

            pf("\nnum2(%hi) is maximum",num2);

        } else {

            pf("\nBoth numbers are equals");

        }
}