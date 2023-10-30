/*
Q.2 Write a Program to generate mark sheets for a student. Enter the marks of 5 students in Chemistry, Mathematics, and Physics (each out of 100) using a Structure having attributes: roll no, name, chem_marks, maths_marks, and phy_marks. Display the percentage of each student.
For example,
Input:
Enter details of Student 1:
Roll no => 121
Name => Raj Patel
Chemistry => 95
Mathematics => 90
Physics => 88

Output:
Raj Patel (121)
Chemistry => 95
Mathematics => 90
Physics => 88
Total => 273/300
Percent => 91.00%

*/


#include<stdio.h>
#include<stdlib.h>


//student structure 
struct student {

    int rollNo;
    char name[10];
    int chemistryMarks;
    int mathematicsMarks;
    int physicsMarks;
    int total;
    float percentage;

};


//getting input from users of int type
int getValues(char varName[]){

    int intValue;
    printf("%s => ", varName);
    scanf("%d", &intValue);

    return intValue;

}


void StoreInFile(int rollNo, char name[], int chemistryMarks, 
                    int mathematicsMarks, int physicsMarks, int total, float percentage, FILE *fp){

    fprintf(fp, "\n");
    fprintf(fp, "%s (%d)\n", name, rollNo);
    fprintf(fp, "Chemistry => %d\n", chemistryMarks);
    fprintf(fp, "Mathematics => %d\n", mathematicsMarks);
    fprintf(fp, "Physics => %d\n",physicsMarks);
    fprintf(fp, "Total => %d\n", total);
    fprintf(fp, "Percent => %.2f %%\n", percentage);

}

//main method
void main(){

    FILE *filePointer = fopen("StudentSheet.txt", "w");

    struct student stu1[5];
    //fetching student data from user
    for (short i = 0; i < 5; i++){

        printf("\n\nEnter details of student %d :\n\n", i + 1);

        stu1[i].rollNo = getValues("Roll no");

        printf("Name => ");
        scanf(" %[^\n]", &stu1[i].name);

        stu1[i].chemistryMarks = getValues("Chemistry");

        stu1[i].mathematicsMarks = getValues("Mathematics");

        stu1[i].physicsMarks = getValues("Physics");

        stu1[i].total = stu1[i].chemistryMarks + stu1[i].mathematicsMarks + stu1[i].physicsMarks;

        stu1[i].percentage = stu1[i].total / (float) 300 * (float) 100;

        StoreInFile(stu1[i].rollNo, stu1[i].name, stu1[i].chemistryMarks, 
                        stu1[i].mathematicsMarks, stu1[i].physicsMarks, stu1[i].total, stu1[i].percentage, filePointer);

    }

}