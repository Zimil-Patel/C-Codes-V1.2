/*
Q.1 Write a Program to write even & odd numbers from 50 to 70 into two separate files.
For example, 
Output:
Even numbers from even_file.txt:
50, 52, 54, 56, 58, 60, 62, 64, 66, 68, 70

Odd numbers from odd_file.txt:
51, 53, 55, 57, 59, 61, 63, 65, 67, 69
*/


#include<stdio.h>
#include<stdlib.h>


void PrintInFile(int i, FILE *fp){

    fprintf(fp, "%d ", i);

}



void main(){

    FILE *filePointerEven = fopen("even_numbers.txt", "w");

    FILE *filePointerOdd = fopen("odd_numbers.txt", "w");
    
    for(short i = 50; i <= 70; i++){

        if(i % 2 == 0)
            PrintInFile(i, filePointerEven);
        else
            PrintInFile(i, filePointerOdd);
        
    }

}