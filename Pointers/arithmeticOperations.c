#include <stdio.h>
int main()
{
 int num1,num2, c;
 int *a,*b,*ch;
 a=&num1;b=&num2;ch=&c;
 printf("Enter two numbers:");
 scanf("%d%d",a,b);
 printf("1.ADDITION");
 printf("\n2.SUBTRACTION");
 printf("\n3.MULTIPLICATION");
 printf("\nEnter your choice:");
 scanf("%d",ch);
 switch (*ch)
 {
 case 1:
 {
 printf("sum=%d",*a+*b);
 break;
 }
 case 2:
 {
 printf("SUB=%d",*a-*b);
 break;
 }
 case 3:
 {
 printf("mul=%d",*a*(*b));
 break;
 }
 default:
 {
 printf("Invalid");
 break;
 }
 }
 
 return 0;
}