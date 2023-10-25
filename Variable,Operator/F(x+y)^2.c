#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    
    printf("Enter the value of y : ");
    scanf("%d",&y);
    
    printf("\n\n(x + y)^2 = %d",(x * x)+(2 * x * y)+(y * y));
    return 0;
}