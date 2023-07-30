#include <stdio.h>
int main()
{
 int n,*p,fact=1,i;
 p=&n;
 printf("Enter a integer:");
 scanf("%d",p);
 for(i=1;i<=*p;i++)
 {
 fact*=i;
 }
 printf("Factorial of %d is %d",*p,fact);
 return 0;
}