#include<stdio.h>
#define pf printf
#define sf scanf

void main(){

	short a, b, c, d, e;
	
	pf("Enter value of a : ");
	sf("%hi",&a);
	
	pf("Enter value of b : ");
	sf("%hi",&b);
	
	pf("Enter value of c : ");
	sf("%hi",&c);
	
	pf("Enter value of d : ");
	sf("%hi",&d);
	
	pf("Enter value of e : ");
	sf("%hi",&e);
	
	(a>b) ? (a>c) ? (a>d) ? (a>e) ? pf("a is maximum"):pf("e is maximum"): (d>e) ?pf("d is maximum"):pf("e is maximum"): (c>d) ? (c>e) ?pf("c is maximum"):pf("e is maximum"):(d>e) ? pf("d is maximum"):pf("e is maximum"): (b>c) ? (b>d) ? (b>e) ?pf("b is maximum"):pf("e is maximum"):(d>e) ? pf("d is maximum"):pf("e is maximum"):(c>d) ? (c>e) ?pf("c is maximum"):pf("e is maximum"): (d>e) ?pf("d is maximum"):pf("e is maximum");
	
}