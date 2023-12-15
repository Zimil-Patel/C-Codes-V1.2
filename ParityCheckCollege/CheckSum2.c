#include<stdio.h>

unsigned getCheckSum(char *str){

    unsigned sum = 0;
    while(*str){

        sum += *str;
        str++;
    }

    return sum;

}

int main(){

    char str[10];
    printf("Enter message : ");
    gets(str);

    printf("\nCheck sum of %s is %u\n\n", str, getCheckSum(str));

}