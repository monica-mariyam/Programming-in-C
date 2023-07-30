//CREATE STRUCTURES(COMPILE TIME)

#include <stdio.h>
struct student
{
 int rollno;
 char name[20];
 float total;
}stu={1001,"monica",470};
int main()
{
 
 //to display
 printf("\nRollno\tName\tTotal_marks");
 printf("\n%d\t%s\t%.2f",stu.rollno,stu.name,stu.total);
 return 0;
}