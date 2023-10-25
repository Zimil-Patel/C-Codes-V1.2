#include<stdio.h>
#define pf printf

int main(){

	short num1, num2;
	
	pf("Enter value of num1 : ");
	scanf("%hi",&num1);
	
	pf("Enter value of num2 : ");
	scanf("%hi",&num2);
	
	if(num1 != num2){
        if(num1 > num2){
           	
            pf("\nnum1(%hi) is Max number!",num1);
            pf("\nnum2(%hi) is Min number!",num2);
                
        } else{
            	
            pf("\nnum2(%hi) is Max number!",num2);
            pf("\nnum1(%hi) is Min number!",num1);
                
        }
    } else {
    	printf("\nboth numbers are equals!");
    }
        
        return 0;

}