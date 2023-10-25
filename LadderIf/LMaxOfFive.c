#include<stdio.h>
#define pf printf
#define sf scanf

void main(){

	short num1, num2, num3, num4, num5;


        pf("Enter the value of num1 : ");
        sf("%hi",&num1);

       	pf("Enter the value of num2 : ");
    	sf("%hi",&num2);
    	
    	pf("Enter the value of num3 : ");
    	sf("%hi",&num3);
    	
    	pf("Enter the value of num4 : ");
    	sf("%hi",&num4);
    	
    	pf("Enter the value of num5 : ");
    	sf("%hi",&num5);


      if(num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5){

            pf("\nnum1(%hi) is maximum",num1);

        } else if(num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5){

             pf("\nnum2(%hi) is maximum",num2);

        } else if(num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5){

            pf("\nnum3(%hi) is maximum",num3);
        } else if(num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5){

            pf("\nnum4(%hi) is maximum",num4);
        } else if(num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4){
        	
        	pf("\nnum5(%hi) is maximum",num5);
		}
}