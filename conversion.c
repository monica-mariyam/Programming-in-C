#include<stdio.h>
#include<math.h>
int convert1(int,int);
int convert2(int,int);
void main()
{
 int num,base,ch;
 printf("1.Decimal to other conversions");
 printf("\n2.Other coversions to decimal");
 printf("\nEnter your choice:");
 scanf("%d",&ch);
 if (ch==1)
 {
 printf("Enter the number to be converted:");
 scanf("%d",&num);
 printf("Enter the base to be converted:");
 scanf("%d",&base);
 printf("After conversion to base %d:%d",base,convert1(num,base));
 }
 else if (ch==2)
 {
 printf("Enter the number to be converted:");
 scanf("%d",&num);
 printf("Enter the base of given number:");
 scanf("%d",&base);
 printf("After conversion to base %d:%d",10,convert2(num,base)); 
 }
 else
 {
 printf("\nInvalid choice");
 }
}
int convert1(int num,int base)
{
 int rem,con_num=0,i=0;
 while(num!=0)
 {
 rem=num%base;
 con_num+=pow(10,i)*rem;
 num/=base;
 i++;
 }
 return con_num;
}
int convert2(int num,int base)
{
 int rem,con_num=0,i=0;
 while(num!=0)
 {
 rem=num%10;
 con_num+=pow(base,i)*rem;
 num/=10;
 i++;
 }
 return con_num;
}