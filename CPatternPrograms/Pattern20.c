#include <stdio.h>
int main(){

    int x = 9, y = 1;

    for(int i = 1; i <= 5; i++){
    
        for(int j = 0; j <= 5; j++){


            if (i % 2 == 0)
                printf(" %2d",0);
            else
                printf(" %2d", (i + j) % 2);

        }
 
        printf("\n");
    }

}