#include<stdio.h>
#define pf printf
#define sf scanf

void main(){

	short a, b, c, d;
	
	pf("Enter value of a : ");
	sf("%hi",&a);
	
	pf("Enter value of b : ");
	sf("%hi",&b);
	
	pf("Enter value of c : ");
	sf("%hi",&c);
	
	pf("Enter value of d : ");
	sf("%hi",&d);
	
	(a>b) ? (a>c) ? (a>d) ? pf("a is maximum"):pf("d is maximum"): (c>d) ? pf("c is maximum"):pf("d is maximum"): (b>c) ? (b>d) ? pf("b is maximum"):pf("d is maximum"): (c>d) ? pf("c is maximum"):pf("d is maximum");

}