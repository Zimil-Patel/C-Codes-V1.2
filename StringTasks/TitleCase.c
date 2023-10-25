//6.WAP to convert given string in Title Case.

#include<stdio.h>
#include<string.h>
void main(){

	char str[20];
	
	printf("Enter the String : ");
	gets(str);
	
	short len = strlen(str);
	
	printf("\n\nGiven String is : %s", str);
	
	if(str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	
	for (short i = 0; i < len; i++){
	
		if (str[i] == ' ')			
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;

	}
  
	
	printf("\n\nConverted(Title) String : %s", str);
	
}
