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
    
    printf("\n\n(x - y - z)^3 = %d",(x * x * x) - (y * y * y) - (z * z * z) + 3 * ((x - y) * ( -y - z) * (x - z)));
    return 0;
}
