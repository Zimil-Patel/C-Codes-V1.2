//C program to eliminate/remove all vowels from a string.

#include<stdio.h>
#include<string.h>
void main(){

    char str[20];
    
    puts("Enter the string :");
    gets(str); //SATYAM
    
    int len = strlen(str);
    
    for(short i = 0; i < len; i++){

        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' 
        || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {

            if(i == len-1)
                str[i] = '\0';
            else{
            	
                for(short j = i; j < len; j++){
		
					str[j] = str[j + 1];
				
				}
				
				i--;
                
                str[len-1] = '\0';
            }
            
        }

    }
    
    printf("\nString after removing vowels : %s", str);
}