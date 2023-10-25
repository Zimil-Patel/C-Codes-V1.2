#include <stdio.h>

int main()
{
    int x, y, z;
    printf("Enter the value of x : ");
    scanf("%d",&x);
    
    printf("Enter the value of y : ");
    scanf("%d",&y);
    
    printf("Enter the value of z : ");
    scanf("%d",&z);
    
    printf("\n\n(x + y + z)^2 = %d",(x * x) + (y * y) + (z * z) + 2 * ((x * y) + (y * z) + (z * x)));
    return 0;
}
