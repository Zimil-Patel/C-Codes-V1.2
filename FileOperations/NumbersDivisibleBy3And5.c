//Q.2 Write a Program to create a new file and write all numbers that are divisible by both 3 & and 5 between 1 to 50 into that file.

#include<stdio.h>
#include<stdlib.h>

void isDivisible(char fileName[]){

    FILE *filePointer = fopen(fileName, "w");

    fprintf(filePointer, "Numbers between 1 to 50 which are divisible by 3 & 5 :\n");

    if(filePointer == NULL)
        printf("Error opeing the File!");
    else
        for (short  i = 1; i <= 50; i++)
            
            if (i % 3 == 0 && i % 5 == 0)
                fprintf(filePointer, "%d\n", i);
            
    fclose(filePointer);

}

void main(){

    char *fileName = "NumbersDivisibleBy3And5.txt";

    isDivisible(fileName);

}