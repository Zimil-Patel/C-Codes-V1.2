#include<stdio.h>
#define pf printf
#define sf scanf

void main(){
	
	char x;

    printf("Enter value of x : ");
    scanf("%c", &x);


    if((x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z'))
    {
        printf("%c is alphabet.", x);
    }
    
    else if(x >= '0' && x <= '9')
    {
        printf("%c is digit.", x);
    }
    
    else 
    {
        printf("%c is special character.", x);
    }

}