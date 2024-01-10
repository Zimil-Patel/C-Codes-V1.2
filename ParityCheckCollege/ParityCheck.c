#include<stdio.h>

int getParity(int number){

    int parity = 0;

    while(number){
     
        parity = !parity;
        number = number & (number - 1);

    }

    return parity;
}


int main(){

    int number;
    char choice = 'y';

    printf("\nEnter number : ");
    scanf("%d", &number);

    if(getParity(number) == 0)
        printf("\nThe parity is 'Even'.\n");
    else
        printf("\nThe parity is 'Odd'\n");


    return 0;
}