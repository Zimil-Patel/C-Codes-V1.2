//WAP to create a password A,a,1,@,8Length

#include<stdio.h>
#include<string.h>

void main(){

	char pass[32];
	
	printf("Create Password : ");
	gets(pass);
	
	short passLength = strlen(pass),
			i,
			specialCharCheck = 0,
			capitalAlphaCheck = 0,
			smallAlphaCheck = 0,
			digitCheck = 0;
	
	if (passLength >= 8 && passLength <= 32){
		
		
	
		for (i = 0; i < passLength; i++){
		
			if ((pass[i] >= 33 && pass[i] <= 47) || 
				(pass[i] >= 58 && pass[i] <= 64) || 
				(pass[i] >= 91 && pass[i] <= 96) || 
				(pass[i] >= 123 && pass[i] <= 126))
				specialCharCheck = 1;
		
		}
		
		if (specialCharCheck){
		
			for (i = 0; i < passLength; i++){
			
				if (pass[i] >= 'A' && pass[i] <= 'Z')
					capitalAlphaCheck = 1;
			
			}
			
			if(capitalAlphaCheck){
			
				for (i = 0; i < passLength; i++){
			
					if (pass[i] >= 'a' && pass[i] <= 'z')
						smallAlphaCheck = 1;
			
				}
				
				if (smallAlphaCheck){
				
					for (i = 0; i < passLength; i++){
			
						if (pass[i] >= '0' && pass[i] <= '9')
							digitCheck = 1;
			
					}
					
					if (digitCheck){
					
						printf("\n\nPassword created successfully.");
					
					} else {
					
						puts("\n\nInvalid! Password must contain digits!");
					
					}
				
				} else {
				
					puts("\n\nInvalid! Password must contain small letter Character!");
				
				}
			
			} else {
			
				puts("\n\nInvalid! Password must contain capital letter Character!");
			
			}
		
		} else {
		
			puts("\n\nInvalid! Password must contain special Character!");
		
		}
	
	} else {
	
		puts("\n\nInvalid! Password Length must atleast 8 character!");
	
	}

}