//4.WAP to given string in reverse.

#include<stdio.h>
void main(){

	char a[20];
	short count = 0;
	
	printf("Enter the String : ");
	scanf("%s", &a);
	
	printf("\n\nGiven String is : %s", a);
	
	for (short i = 0; a[i] != '\0'; i++){
	
		count++;
	
	}
	
	char rev[count-1];
	short j = 0; 
	//Reversing String
	for (short i = count - 1; i >= 0; i--){
	
		rev[j] = a[i];
		j++;
	
	}
	
	printf("\n\nReversed String is : %s", rev);

}