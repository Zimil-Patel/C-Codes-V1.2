#include<stdio.h>
#define pf printf
#define sf scanf

void main(){

	short monthNumber;
	
	while(1==1){
		
	pf("\nEnter month number : ");
	sf("%hi",&monthNumber);
		
		switch(monthNumber){
		
		case 1:
			pf("Januaray");
			break;
		
		case 2:
			pf("February");
			break;
			
		case 3:
			pf("March");
			break;
			
		case 4:
			pf("April");
			break;
			
		case 5:
			pf("May");
			break;
			
		case 6:
			pf("June");
			break;
			
		case 7:
			pf("July");
			break;
			
		case 8:
			pf("August");
			break;
			
		case 9:
			pf("September");
			break;
		
		case 10:
			pf("October");
			break;
			
		case 11:
			pf("November");
			break;
			
		case 12:
			pf("December");
			break;
			
		default:
			pf("Invalid month number!");
		}
	
	}
}