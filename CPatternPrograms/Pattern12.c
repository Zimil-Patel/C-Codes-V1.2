#include <stdio.h>
int main(){

    for(int i = 1; i <= 5; i++){
        int z = i;
        for(int j = 1; j <= 5; j++){

            printf(" %2d", z);
            z+=5;

        }
        printf("\n");
    }

}