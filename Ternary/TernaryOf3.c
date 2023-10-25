#include<stdio.h>
#define pf printf
#define sf scanf

void main(){

	short x, y, z;
	
	pf("Enter value of x : ");
	sf("%hi",&x);
	
	pf("Enter value of y : ");
	sf("%hi",&y);
	
	pf("Enter value of z : ");
	sf("%hi",&z);
	
	(x > y) ? (x > z) ? pf("x is maximum") : pf("z is maximum"): (y > z) ? pf("y is maximum") : pf("z is maximum");

}