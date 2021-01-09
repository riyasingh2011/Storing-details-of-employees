//C program for storing Employee details using Structures
#include <stdio.h>
#include <stdlib.h>
struct Employee
{
    char Name[20];
    char ID[20];
    int Experience[2];
    int Salary[10];

};

int main()
{
    struct Employee emp[5];
    int i=0;

    for(i=0;i<5;i++)
    {
     printf("Enter name of the Employee %d :",i+1);
     scanf("%s",&emp[i].Name);
     printf("Enter the ID of the Employee %d : ",i+1);
     scanf("%s",&emp[i].ID);
     printf("Enter the experience of the Employee %d : ",i+1);
     scanf("%d",&emp[i].Experience[0]);
     printf("Enter the Salary of the Employee %d : ",i+1);
     scanf("%d",&emp[i].Salary[0]);
     printf("\n");
    }

    printf("\nNow printing details of Employees");
    for(i=0;i<5;i++)
    {
        printf("\nName of Employee %d is : %s",i+1,emp[i].Name);
        printf("\nID of Employee %d is : %s",i+1,emp[i].ID);
        printf("\nExperience of Employee %d is : %d",i+1,emp[i].Experience[0]);
        printf("\nSalary of Employee %d is : %d",i+1,emp[i].Salary[0]);
        printf("\n");
    }


    return 0;
}

