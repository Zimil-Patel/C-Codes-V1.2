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


		if(num1 < num2){
		
			if(num1 < num3){
				
				if(num1 < num4){
					
					if(num1 < num5){
						pf("num1(%hi) is minimum",num1);
					} else {
						pf("num5(%hi) is minimum",num5);
					}
					
				} else {
					
					if(num4 < num5){
						pf("num4(%hi) is minimum",num4);
					} else {
						pf("num5(%hi) is minimum",num5);
					}
				}
			} else {
				
				if(num3 < num4){
					
					if(num3 < num5){
						pf("num3(%hi) is minimum",num3);
					} else {
						pf("num5(%hi) is minimum",num5);
					}
				} else {
				
					if(num4 < num5){
						pf("num4(%hi) is minimum",num4);
					} else {
						pf("num5(%hi) is minimum",num5);
					}
				}
			}
		
		} else {
			
			if(num2 < num3){
				
				if(num2 < num4){
					
					if(num2 < num5){
						pf("num2(%hi) is minimum",num2);
					} else {
						pf("num5(%hi) is minimum",num5);
					}
				} else {
					
					if(num4 < num5){
						pf("num4(%hi) is minimum",num4);
					} else {
						pf("num5(%hi) is minimum",num5);
					}
				}
			} else {
				
				if(num3 < num4){
					
					if(num3 < num5){
						pf("num3(%hi) is minimum",num3);
					} else {
						pf("num5(%hi) is minimum",num5);
					}
				} else {
				
					if(num4 < num5){
						pf("num4(%hi) is minimum",num4);
					} else {
						pf("num5(%hi) is minimum",num5);
					}
				}
			}
		
		}
		
		
	}