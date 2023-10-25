//C program to check whether a string is palindrome or not without using the library function.

#include<stdio.h>

void main()
{
    char str[20];
    short palindrome = 1;
    
    printf("Enter the string : ");
    scanf("%s", &str);

    
    short length = 0, i, j = 0;
    
    for ( i = 0; str[i] != '\0'; i++)
        length++;
        
    char str2[length - 1];
    
    for ( i = (length - 1) ; i >= 0 ; i--){
        
        str2[j] = str[i];
        j++;
        
    }
    
    printf("Reversed string is : %s", str2);
    
    for ( i = 0 ; i < length ; i++){
        
        if(str[i] != str2[i])
        	palindrome = 0;
        
    }
    
    if (palindrome)
        printf("\nGiven string is palindrome");
    else
        printf("\nGiven string is not palindrome");
}