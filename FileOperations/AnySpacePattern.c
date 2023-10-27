/*
Q.1 Write a Program to print any space pattern in the file.

1 2 3 4 5 5 4 3 2 1
1 2 3 4     4 3 2 1
1 2 3         3 2 1
1 2             2 1
1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1
*/
#include<stdio.h>
#include<stdlib.h>

void main(){

    char *fileName = "AnySpacePattern.txt";
    FILE *filePointer = fopen(fileName, "w");

    short i, j, z;

    if (filePointer == NULL)
        printf("Error opeing the File!");
    else {

        for (i = 5; i >= 1; i--){

            for (j = 1; j <= i; j++)
                fprintf(filePointer, "%hi ", j);
        
            for (z = 5; z > i; z--)
                fprintf(filePointer, "    ");

            for (j = i; j >= 1; j--)
                fprintf(filePointer, "%hi ", j);

            fprintf(filePointer, "\n");   

        }

        for (i = 2; i <= 5; i++){

            for (j = 1; j <= i; j++)
                fprintf(filePointer, "%hi ", j);

            for (z = i; z < 5; z++)
                fprintf(filePointer, "    ");

            for (j = i; j >= 1; j--)
                fprintf(filePointer, "%hi ", j);

            fprintf(filePointer, "\n");

        }

    }

    fclose(filePointer);

}