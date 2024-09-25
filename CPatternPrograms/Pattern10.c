#include <stdio.h>
int main(){
    
    for(int i = 1; i <= 5; i++){
        int z = 1;
        for(int j = 1; j <= 6; j++){

            if (j % 2 == 0)
                printf(" %2d", i);
            else{
                printf(" %2d", z);
                z++;
            }

        }
        printf("\n");
    }

}