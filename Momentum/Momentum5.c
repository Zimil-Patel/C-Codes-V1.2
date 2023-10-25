#include<stdio.h>
#define pf printf
#define sf scanf

void main(){

	int Physics, Chemistry, Biology, Mathematics, Computer;
	float percentage;
	
	pf("Enter marks of Physics : ");
	sf("%d",&Physics);	
	
	pf("Enter marks of Chemistry : ");
	sf("%d",&Chemistry);	
	
	pf("Enter marks of Biology : ");
	sf("%d",&Biology);
	
	pf("Enter marks of Mathematics : ");
	sf("%d",&Mathematics);
	
	pf("Enter marks of Computer : ");
	sf("%d",&Computer);
	
	percentage = ((Physics + Chemistry + Biology + Mathematics + Computer) / 500) * 100;
	
	if(percentage >= 40 && percentage <50){
		
		pf("You achieved Grade F");
		
	} else if(percentage >= 50 && percentage <60){
	
		pf("You achieved Grade E");
	
	} else if(percentage >= 60 && percentage <70){
	
		pf("You achieved Grade D");
	
	} else if(percentage >= 70 && percentage <80){
	
		pf("You achieved Grade C");
	
	} else if(percentage >= 80 && percentage <90){
	
		pf("You achieved Grade B");
	
	} else if(percentage >= 90 && percentage <= 100){
	
		pf("You achieved Grade A");
	
	} else {
	
		pf("You are fail");
	
	}
	
}