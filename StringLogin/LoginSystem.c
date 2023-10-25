//WAP to create a password A,a,1,@,8Length

#include<stdio.h>
#include<string.h>

void main(){

	char email[32], domain[10], pass[32], loginEmail[32], loginPass[32];
	
	const char constDomain[10] = "@gmail.com";
	
	short emailLength,
			passLength,
			i, j = 0,
			specialCharCheck = 0,
			validSpecialCharCheck = 0,
			alphaCheck = 0,
			digitCheck = 0,
			domainCheck = 0,
			firstLastCharCheck = 0,
			emailStatus = 0,
			passStatus = 0,
			passSpecialCharCheck = 0,
			passCapitalAlphaCheck = 0,
			passSmallAlphaCheck = 0,
			passDigitCheck = 0;;

	while (emailStatus != 1){
		
		printf("\n\nCreate Email Id : ");
		gets(email);
		emailLength = strlen(email);
	
		if (emailLength > 10){
			
			j = 0;
			domainCheck = 0;
			for (i = emailLength - 10; i < emailLength; i++){
		
				domain[j] = email[i];
				if(domain[j] != constDomain[j])
					domainCheck = 1;
				
				j++;
			
			}
		
		
			if (domainCheck == 0){
			
				for (i = 0; i < emailLength - 10; i++){
			
					if ((email[i] >= 'a' && email[i] <= 'z') || (email[i] >= 'A' && email[i] <= 'Z'))
					alphaCheck = 1;
			
				}
			
				if (alphaCheck){
				
					if (((email[0] >= 'a' && email[0] <= 'z') || (email[0] >= 'A' && email[0] <= 'Z') || (email[0] >= '0' && email[0] <= '9')) &&
						((email[emailLength - 11] >= 'a' && email[emailLength - 11] <= 'z') || (email[emailLength - 11] >= 'A' && email[emailLength - 11] <= 'Z') || (email[emailLength - 11] >= '0' && email[emailLength - 11] <= '9'))){
							
							firstLastCharCheck = 1;
							
					}
				
					if (firstLastCharCheck){
				
						for (i = 0; i < emailLength - 10; i++){
				
							if ((email[i] >= 32 && email[i] <= 47) || (email[i] >= 58 && email[i] <= 64) || (email[i] >= 91 && email[i] <= 96) || (email[i] >= 123 && email[i] <= 126))
								specialCharCheck = 1;
				
						}
					
						if (specialCharCheck){
					
							for (i = 0; i < emailLength - 10; i++){
				
								if (email[i] == 33 || 
									(email[i] >= 35 && email[i] <= 39) || 
									(email[i] >= 42 && email[i] <= 43) || 
									email[i] == 45 || 
									email[i] == 47 || 
									email[i] == 61 || 
									email[i] == 63 || (
									email[i] >= 94 && email[i] <= 96) || 
									(email[i] >= 123 && email[i] <= 126)){
										
										validSpecialCharCheck = 1;
										
									}
									
							}
						
							if (validSpecialCharCheck){
							
								emailStatus = 1;
						
							} else {
							
								puts("\n\nInvalid! Email contain invalid special character(before @gmail.com)");
							
							}
					
						} else {
							
							emailStatus = 1;
						
						}
						
					
				
					} else {
					
						puts("\n\nInvalid! First and last character(before @) in your email must be alphabet or digit!");
					
					}

			
				} else {
				
					puts("\n\nInvalid! Email id must contain Alpha Character!");
				
				}
		
			} else {
				
				puts("\n\nInvalid! Please specify domain name(@gmail.com)!");
			
			}
	
		} else {
		
			puts("\n\nInvalid! too short email id!");
		
		}
	
	}
	
	if (emailStatus){
	
		while(passStatus != 1){
		
			printf("Create Password : ");
			gets(pass);
			passLength = strlen(pass);
			
			if (passLength >= 8 && passLength <= 32){
		
	
				for (i = 0; i < passLength; i++){
				
					if ((pass[i] >= 33 && pass[i] <= 47) || 
						(pass[i] >= 58 && pass[i] <= 64) || 
						(pass[i] >= 91 && pass[i] <= 96) || 
						(pass[i] >= 123 && pass[i] <= 126)){
						
							passSpecialCharCheck = 1;
						
						}
				
				}
			
				if (passSpecialCharCheck){
			
					for (i = 0; i < passLength; i++){
					
						if (pass[i] >= 'A' && pass[i] <= 'Z')
							passCapitalAlphaCheck = 1;
					
					}
				
					if(passCapitalAlphaCheck){
					
						for (i = 0; i < passLength; i++){
					
							if (pass[i] >= 'a' && pass[i] <= 'z')
								passSmallAlphaCheck = 1;
					
						}
					
						if (passSmallAlphaCheck){
						
							for (i = 0; i < passLength; i++){
					
								if (pass[i] >= '0' && pass[i] <= '9')
									passDigitCheck = 1;
					
							}
						
							if (passDigitCheck){
								
								passStatus = 1;
							
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
	
	}
	
	puts("\n----Registration Successful, Please Login...----\n");
	short loginStatus = 0;
	
	while (loginStatus != 1){
	
		printf("Email    : ");
		gets(loginEmail);
		
		printf("Password : ");
		gets(loginPass);
		
		if ((strcmp(loginEmail, email) == 0) && (strcmp(loginPass, pass) == 0)){
			
			puts("\n\n----Login Successful----");
			loginStatus = 1;
		
			
		} else {
		
			puts("\n\nLogin id or pass incorrect please try again!\n\n");
		
		}
	
	}
	
}