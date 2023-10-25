#include<stdio.h>
#define pf printf
#define sf scanf

void main(){
	
	short x;

    printf("Enter value of x : ");
    scanf("%hi", &x);

	(x % 2 == 0) ? pf("%hi is even number",x) : pf("%hi is odd number",x);

}