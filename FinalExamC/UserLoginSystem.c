#include<stdio.h>
#include<string.h>

int i, j;

//Strucutre 
struct UserInfo{

    char userGmail[32];
    char userPass[32];

};

//checkingFordomain
int checkDomain(char gmail[]){

    if (strlen(gmail) > 10){

        const char domain[10] = "@gmail.com";
        j = 0;
        
        for (i = strlen(gmail) - 10; i < strlen(gmail); i++){

            if(gmail[i] != domain[j])
                return 0;

            j++;

        }

        return 1;

    } else {

        puts("Invalid! too small email Length");
        return 0;

    }

}


//Check full gmailAddress
int checkFullGmail(char gmail[]){

    for (i = strlen(gmail); i < strlen(gmail) - 10; i++){

        if(gmail[i] != domain[j])
             return 0;

        j++;

    }

}


//mainMethod
void main(){

    struct UserInfo user1;

    int gmailCheck;

    printf("\n----Create new user----\n");
    printf("\nEnter email address : ");
    scanf(" %[^\n]", &user1.userGmail);

    gmailCheck = checkDomain(user1.userGmail);

    if(gmailCheck)
        gmailCheck = checkFullGmail(user1.userGmail);




}