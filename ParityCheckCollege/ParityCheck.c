#include<stdio.h>

int getParity(int number){

    int parity = 0;

    while(number){

        // parity = 1 - parity;
        // number = number & (number - 1);
        
        parity = !parity;
        number = number >> 1;
        printf("\nNumber : %d", number);

    }

    return parity;
}


int main(){

    int number;
    char choice = 'y';

    while (choice == 'y'){


        printf("\nEnter number : ");
        scanf("%d", &number);

        if(getParity(number) == 0){

            printf("\nThe parity is 'Even'.\n");

        } else {

            printf("\nThe parity is 'Odd'\n");

        }


        printf("\nDo you want to perform again ? [y/n]: ");
        scanf(" %c", &choice);

    }

    return 0;
}