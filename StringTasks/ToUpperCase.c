//2.WAP to convert given string in uppercase.

#include<stdio.h>
void main(){

	char a[20];
	
	printf("Enter the String : ");
	scanf("%s", &a);
	
	printf("\n\nGiven String is : %s", a);
	
	for (short i = 0; a[i] != '\0'; i++){
	
		if (a[i] != 0 && (a[i] >= 'a' && a[i] <= 'z')){
		
			a[i] = a[i] - 32;
		
		}
	
	}
	
	printf("\n\nConverted(UpperCase) String : %s", a);

}