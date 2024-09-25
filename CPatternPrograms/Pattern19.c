#include <stdio.h>
int main(){

    int x = 9, y = 1;

    for(int i = 0; i < 5; i++){
    
        for(int j = 1; j <= 5; j++){

            printf(" %2d", (i + j) % 2);

        }
 
        printf("\n");
    }

}