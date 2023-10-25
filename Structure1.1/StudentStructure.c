/*
Q.1 Write a Program to create a Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_city
- stu_standard
- stu_school
*/

#include<stdio.h>
#include<string.h>

struct StudentRecord{

    int stu_id, stu_age, stu_standard;
    char stu_name[20], stu_course[20], stu_city[10], stu_school[20];

} stu1, stu2, stu3;

void main(){

    char stringInput[20];

    //getting student 1 details
    printf("---Enter Student_1 details---\n");
    //id
    printf("Enter student id : ");
    scanf("%d", &stu1.stu_id);
    //name
    printf("Enter student name : ");
    scanf(" %s", &stringInput);
    strcpy(stu1.stu_name, stringInput);
    //age
    printf("Enter student age : ");
    scanf(" %d", &stu1.stu_age);
    //course
    printf("Enter student course : ");
    scanf("%s", &stringInput);
    strcpy(stu1.stu_course, stringInput);
    //city
    printf("Enter student city : ");
    scanf("%s", &stringInput);
    strcpy(stu1.stu_city, stringInput);
    //standard
    printf("Enter student standard : ");
    scanf("%d", &stu1.stu_standard);
    //school
    printf("Enter student school name : ");
    scanf("%s", &stringInput);
    strcpy(stu1.stu_school, stringInput);

    //getting student 2 details
    printf("---Enter Student_2 details---\n");
    //id
    printf("Enter student id : ");
    scanf("%d", &stu2.stu_id);
    //name
    printf("Enter student name : ");
    scanf(" %s", &stringInput);
    strcpy(stu2.stu_name, stringInput);
    //age
    printf("Enter student age : ");
    scanf(" %d", &stu2.stu_age);
    //course
    printf("Enter student course : ");
    scanf("%s", &stringInput);
    strcpy(stu2.stu_course, stringInput);
    //city
    printf("Enter student city : ");
    scanf("%s", &stringInput);
    strcpy(stu2.stu_city, stringInput);
    //standard
    printf("Enter student standard : ");
    scanf("%d", &stu2.stu_standard);
    //school
    printf("Enter student school name : ");
    scanf("%s", &stringInput);
    strcpy(stu2.stu_school, stringInput);

    //getting student 3 details
    printf("---Enter Student_3 details---\n");
    //id
    printf("Enter student id : ");
    scanf("%d", &stu3.stu_id);
    //name
    printf("Enter student name : ");
    scanf(" %s", &stringInput);
    strcpy(stu3.stu_name, stringInput);
    //age
    printf("Enter student age : ");
    scanf(" %d", &stu3.stu_age);
    //course
    printf("Enter student course : ");
    scanf("%s", &stringInput);
    strcpy(stu3.stu_course, stringInput);
    //city
    printf("Enter student city : ");
    scanf("%s", &stringInput);
    strcpy(stu3.stu_city, stringInput);
    //standard
    printf("Enter student standard : ");
    scanf("%d", &stu3.stu_standard);
    //school
    printf("Enter student school name : ");
    scanf("%s", &stringInput);
    strcpy(stu3.stu_school, stringInput);

    //printing student data
    printf("\n--------------------\n");
    printf("Data of student 1");
    printf("\n--------------------\n");
    printf("\nStudent id\t: %d",stu1.stu_id);
    printf("\nStudent name\t: %s",stu1.stu_name);
    printf("\nStudent age\t: %d",stu1.stu_age);
    printf("\nStudent course\t: %s",stu1.stu_course);
    printf("\nStudent city\t: %s", stu1.stu_city);
    printf("\nStudent standard: %d",stu1.stu_standard);
    printf("\nStudent school\t: %s",stu1.stu_school);

    printf("\n\n--------------------\n");
    printf("Data of student 2");
    printf("\n--------------------\n");
    printf("\nStudent id\t: %d",stu2.stu_id);
    printf("\nStudent name\t: %s",stu2.stu_name);
    printf("\nStudent age\t: %d",stu2.stu_age);
    printf("\nStudent course\t: %s",stu2.stu_course);
    printf("\nStudent city\t: %s", stu2.stu_city);
    printf("\nStudent standard: %d",stu2.stu_standard);
    printf("\nStudent school\t: %s",stu2.stu_school);

    printf("\n\n--------------------\n");
    printf("Data of student 3");
    printf("\n--------------------\n");
    printf("\nStudent id\t: %d",stu3.stu_id);
    printf("\nStudent name\t: %s",stu3.stu_name);
    printf("\nStudent age\t: %d",stu3.stu_age);
    printf("\nStudent course\t: %s",stu3.stu_course);
    printf("\nStudent city\t: %s", stu3.stu_city);
    printf("\nStudent standard: %d",stu3.stu_standard);
    printf("\nStudent school\t: %s",stu3.stu_school);

}