//STRUCTURES(run time)

#include <stdio.h>
struct student
{
 int rollno;
 char name[20];
 float total;
}stu;
int main()
{
 printf("Enter roll no:");
 scanf("%d",&stu.rollno);
 printf("Enter student name:");
 scanf("%s",stu.name);
 printf("Enter total marks:");
 scanf("%f",&stu.total);
 
 //to display
 printf("\nRollno\tName\tTotal_marks");
 printf("\n%d\t%s\t%.2f",stu.rollno,stu.name,stu.total);
 return 0;
}