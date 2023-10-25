//write c program to check whether a string is palindrome or not
#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];
    
    puts("Enter the string : ");
    gets(str);

    puts("\n \n");
    
    short length = 0, i, j = 0;
    
    for ( i = 0; str[i] != '\0'; i++)
        length++;
        
    char str2[length - 1];
    
    for ( i = (length - 1) ; i >= 0 ; i--){
        
        str2[j] = str[i];
        j++;
        
    }
    
    puts("Reversed string is : ");
    puts(str2);
    
    if ( strcmp(str, str2))
        puts("\nGiven string is not palindrome");
    else
        puts("\nGiven string is palindrome");
}