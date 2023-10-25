#include<stdio.h>
void main(){


	short n, status = 0;
	
	printf("Enter the size of array : ");
	scanf("%hi", &n);
	
	short a[n];
	
	for (short i = 0; i < n; i++){
	
		printf("Enter value of  a[%hi] : ",i);
		scanf("%hi", &a[i]);
	
	}
	
	printf("\nElements of a : ");
	
	for (short i = 0; i < n; i++) {
        for (short j = i + 1; j < n; ) {
            if (a[i] == a[j]) {
                for (short z = j; z < n - 1; z++) {
                    a[z] = a[z + 1];
                }
                n--;
            } else {
                j++;
            }
        }
    }
	
	
	for (short i = 0; i < n; i++){
	
		printf("\nvalue of  a[%hi] : %hi",i, a[i]);
	
	}

}