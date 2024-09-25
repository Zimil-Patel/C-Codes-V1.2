#include <stdio.h>
int main(){

    int x = 9, y = 1;

    for(int i = 5; i >= 1; i--){
        int z = i;
        for(int j = 1; j <= 5; j++){

            printf(" %2d", z);
            
            if (j % 2 == 0)
                z += x;
            else
                z += y;

        }
 
        x -= 2;
        y += 2;
        printf("\n");
    }

}