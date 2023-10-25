#include<stdio.h>


int main(){

    float celsius;
    printf("Enter Value of Celsius : ");
    scanf("%f",&celsius);
    printf("Fahrenheit : %.2f\n\n",(celsius * 9 / 5) + 32);

    return 0;
}