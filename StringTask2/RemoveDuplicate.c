//write c program to remove duplicates
#include<stdio.h>
#include<string.h>
void main()
{
	char a[20];
	
	printf("Enter the String : ");
	gets(a);
	
	short len = strlen(a);
	for(short i = 0; i < len; i++)
	{
		for(short j = i+1; j < len; j++)
		{
			if(a[i] == a[j])
				a[j] = '\0';
				
		}
		
		if(a[i] != '\0')
		{
			printf("%c",a[i]);
		}
	}	
}
