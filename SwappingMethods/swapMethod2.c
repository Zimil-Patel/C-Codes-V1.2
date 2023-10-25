#include <stdio.h>

//Using third variable
int main()
{
    int x, y, temp;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    
    printf("Enter the value of y : ");
    scanf("%d",&y);
    
    printf("\n\nvalues before swaping \nx = %d \ny = %d",x, y);
    
    temp = x;
    x = y;
    y = temp;
    
    printf("\n\nvalues after swaping \nx = %d \ny = %d",x, y);
    return 0;
}
