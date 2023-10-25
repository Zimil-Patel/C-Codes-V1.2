//5.WAP to convert given string in Toggal Case.

#include<stdio.h>
void main(){

	char a[20];
	
	printf("Enter the String : ");
	scanf("%s", &a);
	
	printf("\n\nGiven String is : %s", a);
	
	for (short i = 0; a[i] != '\0'; i++){
	
		if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] = a[i] + 32;
        else if (a[i] >= 'a' && a[i] <= 'z')
            a[i] = a[i] - 32;
	
	}
	
	printf("\n\n\nConverted String in Toggled Case: %s", a);

}