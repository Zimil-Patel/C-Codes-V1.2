#include <stdio.h>
int main(){
    
    for(int i = 1; i <= 49;){
        for(int j = 1; j <= 5; j++){
            if (i<=9)
                printf(" ");
            printf(" %d",i);
            i+=2;

        }
        printf("\n");
    }
}