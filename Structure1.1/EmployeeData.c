/*
Q.2 Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure:
- emp_id
- emp_name
- emp_age
- emp_role
- emp_city
- emp_experience
- emp_company_name
*/

#include<stdio.h>

struct EmployeeData{

    int emp_id, emp_age, emp_experience;
    char emp_name[20], emp_role[20], emp_city[20], emp_company_name[20];

};

int getValuesInt(char varName[]){

    int value;
    printf("Enter employee %s : ", varName);
    scanf("%d", &value);

    return value;
}

void getValuesString(char varName[]){

    printf("Enter employee %s : ",varName);

}

void main(){

    int n;
    printf("How many employees data you want to enter : ");
    scanf("%d", &n);

    struct EmployeeData emp[n];

    for (short i = 0; i < n; i++){
    
    	printf("\n---Enter employee %d details---\n",i+1);
    	
        emp[i].emp_id = getValuesInt("id");

        getValuesString("name");
        scanf(" %[^\n]",&emp[i].emp_name);

        emp[i].emp_age = getValuesInt("Age");

        getValuesString("role");
        scanf(" %[^\n]",&emp[i].emp_role);

        getValuesString("city");
        scanf(" %[^\n]",&emp[i].emp_city);

        emp[i].emp_experience = getValuesInt("Experience");

        getValuesString("company name");
        scanf(" %[^\n]",&emp[i].emp_company_name);

    }
    
    printf("\n--------------------\n");
    printf("All Employee data");
    printf("\n--------------------\n");
    
    for (short i = 0; i < n; i++){
    
    	printf("\n\n\n--- employee %d details---\n\n",i+1);
    	
        printf("Employee id : %d", emp[i].emp_id);
        printf("\nEmployee name : %s", emp[i].emp_name);
        printf("\nEmployee age : %d", emp[i].emp_age);
        printf("\nEmployee role : %s", emp[i].emp_role);
        printf("\nEmployee city : %s", emp[i].emp_city);
        printf("\nEmployee experience : %d", emp[i].emp_experience);
        printf("\nEmployee company name : %s", emp[i].emp_company_name);

    }

}