#include <stdio.h>
int main(){

    for(int i = 5; i >= 1; i--){
        int z = i;
        for(int j = 1; j <= 5; j++){

            printf(" %2d", z);
            z+=5;

        }
 
        printf("\n");
    }

}