//WAP to remove blank space from string
#include<stdio.h>  
#include <string.h>  
 
void main()
{   

	char str[10];
	
	puts("enter the name:");
	gets(str);
	
	int len = strlen(str);
	
	for(short i = 0; i < len; i++)
	{
		if(str[i] == ' ')
		{
			if (i == len - 1)
				continue;
			else
				str[i] = str[i + 1];

		}
		else
		{
			printf("%c", str[i]);
		}
	}
}