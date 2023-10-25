//write c program to count frequency of each charater in string
#include<stdio.h>
#include<string.h>
void main()
{
    char str[20];

    puts("Enter the string : ");
    gets(str);

    puts("\n \n");
    
    short freq = 1;
    
    for (short i = 0; str[i] != '\0'; i++){
        
        freq = 1;
        
        for (short j = 0; str[j] != '\0'; j++){
            
            if (i == j)
                continue;
            else if (str[i] == str[j])
                freq++;
                
        }
        
        printf("\nFrequency of %c is : %hi", str[i], freq);
    }
}