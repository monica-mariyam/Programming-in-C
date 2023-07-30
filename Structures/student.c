//CREATE STUDENT STRUCTURE, CALCULATE MARKS AND DISPLAY
#include <stdio.h>
struct details
{
 int rollno;
 char name[10];
 float mark[10];
 float total;
}s;
void main()
{ 
 int i;
 printf("Enter your roll no:");
 scanf("%d",&s.rollno);
 printf("Enter your name:");
 scanf("%s",s.name);
 printf("Enter your marks one by one:");
 for(i=0;i<5;i++)
 {
 scanf("%f",&s.mark[i]);
 }
 // to display
 s.total=0;
 for(i=0;i<5;i++)
 {
 s.total+=s.mark[i];
 }
 printf("\nRollno:%d\nName:%s\nTotal:%.2f",s.rollno,s.name,s.total);
}