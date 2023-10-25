#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    
    printf("Enter the value of y : ");
    scanf("%d",&y);
    
    printf("\n\n(x + y)^3 = %d",(x * x * x) + (y * y * y) + (3*(x * x)*y) + (3 * x *(y * y)));
    return 0;
}