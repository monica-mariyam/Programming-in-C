#include <stdio.h>
struct details
{
 int rollno;
 char dept[10];
 float cgpa;
};
struct student
{
 char name[20];
 struct details d;
};
void main()
{
 struct student s;
 printf("Enter rollno, name,dept and cgpa one by one:");
 scanf("%d%s%s%f",&s.d.rollno,s.name,s.d.dept,&s.d.cgpa);
 // to display
 
printf("\nRollno:%d\nName:%s\nDepartment:%s\nCGPA:%f",s.d.rollno,s.name
,s.d.dept,s.d.cgpa);
}