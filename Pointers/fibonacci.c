#include <stdio.h>
int main()
{
 int n,i,a=-1,b=1,c,*p,*q,*r,*x;
 x=&n;p=&a;q=&b;r=&c;
 printf("Enter no. of terms:");
 scanf("%d",x);
 printf("Fibonacci series:\n");
 for (i=0;i<*x;i++)
 {
 *r=*p+*q;
 printf("\t%d",*r);
 *p=*q;
 *q=*r;
 }
 return 0;
}