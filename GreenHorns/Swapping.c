#include<stdio.h>

int main(){

 	short x, y;
 	
    printf("Enter the value of x : ");
    scanf("%hu",&x);
    
    printf("Enter the value of y : ");
    scanf("%hu",&y);
    
    printf("\nbefore swaping \nx = %hu \ny = %hu",x, y);
    
    x = x + y;
    y = x - y;
    x = x - y;
    
    printf("\nafter swaping \nx = %hu \ny = %hu",x, y);
    return 0;

}