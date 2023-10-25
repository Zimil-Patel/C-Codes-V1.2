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

       if(num1 < num2){

            if(num1 < num3){
                pf("\nnum1(%hi) is minimum",num1);
            } else {
                pf("\nnum3(%hi) is minimum",num3);
            }
        } else {

            if (num2 < num3){
                pf("\nnum2(%hi) is minimum",num2);
            } else {

               pf("\nnum3(%hi) is minimum",num3);
            }
        }
		
}