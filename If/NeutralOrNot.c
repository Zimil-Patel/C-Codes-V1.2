#include<stdio.h>
#define pf printf

int main(){

	short num;
	
	pf("Enter value of num : ");
	scanf("%hi",&num);
	
	if (num > 0){
		
        pf("Given number(%hi) is positive number",num);
        
    } else if (num < 0){
    	
        pf("Given number(%hi) is negative number",num);
        
    } else {
    	
        pf("Given number(%hi) is neutral number",num);
        
    }
        
    return 0;

}