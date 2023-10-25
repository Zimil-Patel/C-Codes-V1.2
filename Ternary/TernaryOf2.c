#include<stdio.h>
#define pf printf
#define sf scanf

void main(){

	short x,y;
	
	pf("Enter value of x : ");
	sf("%hi",&x);
	
	pf("Enter value of y : ");
	sf("%hi",&y);
	
	(x > y) ? pf("x is maximum") : pf("y is maximum");

}