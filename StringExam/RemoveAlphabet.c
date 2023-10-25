//C program to remove alphabets from an alphanumeric string.

#include<stdio.h>
#include<string.h>
void main(){

    char str[20];
    
    puts("Enter the string :");
    gets(str); //zim21
    
    int len = strlen(str);
    
    for(short i = 0; i < len; i++){
	
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
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



	printf("\nString after removing alphabet: %s", str);
}
      
