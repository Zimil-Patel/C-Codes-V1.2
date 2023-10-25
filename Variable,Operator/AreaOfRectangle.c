#include<stdio.h>

int main(){

    float length, width;
    printf("Enter Value of length : ");
    scanf("%f",&length);

    printf("Enter Value of width : ");
    scanf("%f",&width);
    
    printf("Area of rectangle is : %.2f",length * width);

    return 0;
}