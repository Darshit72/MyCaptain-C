/*
Challenge : Data Structures !

Let's Code !

Write a C program that defines a structure employee containing the details such as empno, empname, department name and salary.
The structure has to store 20 employees in an organization.
Use the appropriate method to define the above details and define a function that will display the contents?

Your Output should look similar to this

Name Age Phone Number Salary
Chirag 24 1234567788 20000
Arnav 31 1234567891 56000
Shivam 45 8881101111 30500

*/

#include<stdio.h>
#include <string.h>
//Declaring structure globally so that it can be made available through out the program.

struct employee
{
    int empno;
    int age;
    char empname[30];
    char deptname[30];
    char phone[14];
    float salary;
} e[20];

int main()
{
    void inputdata(void);
    void printdata(void);
    //Store some data in structure.
    inputdata();
    printdata();
    return 0;
}

void inputdata(void)
{
    // Creating diff arrays from which we will read the data and put it in the structure variable. Just to make my task easy.

    int age[20] = { 24 , 31 , 45 , 30, 35, 47, 25, 32, 37, 26, 44 , 21 , 55 , 27, 38, 37, 29, 33, 35, 28};
    char empname[20][30] = { "Chirag", "Arnav", "Shivam","Dishin", "Purvi", "Ragi", "Devang", "Ashit", "Pankaj", "Darshit", "Amita", "Nina", "Parul", "Ranna", "Smita", "Palak", "Shraddha", "Shravya", "Ananya", "Aashna" };
    char deptname[20][30] = { "Prod", "Prod", "Finance", "Mfg", "Sales", "Marketing", "Prod", "Mfg", "Finance", "IT", "Sales", "Prod", "Mfg" , "Sales" , "IT" , "Finance", "Prod", "Mfg" , "IT" , "Marketing" };
    char phone[20][14] = { "1234567788" , "1234567891" , "8881101111", "+917891235600" , "7755005577", "" , "" , "", "" , "","" , "" , "", "" , "","" , "" , "", "" , "" };
    float salary[20] = {20, 56, 30.5, 27, 35, 40, 25, 20, 56, 27, 35, 40, 25, 30.5, 40, 20,27, 30.5, 35, 40};
    for(int i = 0;i<20;i++)
    {
        e[i].empno = i;
        e[i].age = age[i];
        strcpy(e[i].empname,empname[i]);
        strcpy(e[i].deptname,deptname[i]);
        strcpy(e[i].phone,phone[i]);
        e[i].salary = salary[i]*1000;
    }
}

void printdata(void)
{
    printf("Name                           Age   Phone Number   Salary\n");
    printf("==========================================================\n");
    for(int i = 0;i<20;i++)
    {
        printf("%-30s %3d %14s %6.2f\n",e[i].empname,e[i].age , e[i].phone , e[i].salary );
    }
}
