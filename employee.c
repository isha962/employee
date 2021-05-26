#include<stdio.h>
#include<conio.h>
#include<string.h>

//Declaration of structure org
struct org
{
char name[30];
int age,phone,salary;
};
void main()
{

//declaration of org member as array
struct org employee[20];
int n,i;
i= 5;
//enter values using for loop
for(i=0;i<n;i++)
{
printf("\nEnter Person %d\n Name :",i+1);
scanf("%s",&employee[i].name);
printf("\nenter the age %d\n:");
scanf("%d",&employee[i].age);
printf("\n enter the phone %d\n:");
scanf("%d", &employee[i].phone);
printf("\nEmployee Salary :");
scanf("%d",&employee[i].salary);
}

//printing employee information
printf("\nEmployees Information\n");
for(i=0;i<n;i++)
{
printf("\nPerson %d\n Name : %s",i+1,employee[i].name);
printf("\nage %d:",employee[i].age);
printf("\nphone %d:",employee[i].phone);
printf("\nEmployee Salary : %d",employee[i].salary);
}
}
