#include<stdio.h>
#define pf printf
#define sf scanf

void main(){

	char day;

	pf("\nEnter alphabet : ");
	sf("%c",&day);
		
		switch(day){
		
		case 'M':
			pf("Monday");
			break;
		
		case 'T':
			pf("Tuesday");
			break;
			
		case 'W':
			pf("Wednesday");
			break;
			
		case 't':
			pf("Thursday");
			break;
			
		case 'F':
			pf("Friday");
			break;
			
		case 'S':
			pf("Saturday");
			break;
			
		case 's':
			pf("Sunday");
			break;
			
			
		default:
			pf("Invalid alphabet!");
		}
	
}