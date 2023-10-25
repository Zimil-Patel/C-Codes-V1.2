#include<stdio.h>
#define pf printf
#define sf scanf

void main(){

	short num1, num2, num3;


        pf("Enter the value of num1 : ");
        sf("%hi",&num1);

       	pf("Enter the value of num2 : ");
    	sf("%hi",&num2);
    	
    	pf("Enter the value of num3 : ");
    	sf("%hi",&num3);

       if(num1 > num2 && num1 > num3){

            pf("\nnum1(%hi) is maximum",num1);

        } else if(num2 > num1 && num2 > num3){

            pf("\nnum2(%hi) is maximum",num2);

        } else if(num3 > num1 && num3 > num2){

            pf("\nnum3(%hi) is maximum",num3);
        }
}