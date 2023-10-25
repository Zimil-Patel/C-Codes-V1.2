// WAP to find maximum from array using pointer

#include <stdio.h>

void main() {
    
    int n,max = 0;
    int *maxPtr = &max;
    
    printf("Enter the values of array size : ");
    scanf("%d",&n);
    
    int arr[n];
    int *arrPtr[n];


	printf("\n---Enter array elements---\n");
    for(short i = 0; i < n; i++)
    {
        arrPtr[i] = &arr[i];
        printf("arr[%d] = ",i);
        scanf("%d",arrPtr[i]);
        if(*arrPtr[i] > *maxPtr)
        {
            *maxPtr = *arrPtr[i];
        }
    }
    
    printf("\nMaximun value from array is : %d",max);
    
}