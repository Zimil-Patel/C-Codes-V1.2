//only for practice

#include<stdio.h>

void main(){

    char a[27];

    for (int i = 0; i <= 25; i++)
        a[i] = i + 97;

    printf("\n%s",a);

    for (int i = 0; i <= 25; i++)
        a[i] = i + 65;

    printf("\n%s",a);

}