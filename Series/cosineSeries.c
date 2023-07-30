//TO PRINT THE SERIES OF CosX:1-X*2/2!+X*4/4!-….

#include<stdio.h>
#include<math.h>
int sum(int,int);
int fact(int);
int main()
{
 int n,x;
 float res;
 printf("Enter the value of n:");
 scanf("%d",&n);
 printf("Enter the value of x:");
 scanf("%d",&x);
 sum(n,x);
 return 0;
}
int sum(int n,int x)
{
 float res=1.0;
 int i=2;
 static int sign=1;
 while(i<=n)
 {
 sign*=-1;
 res=res+((sign)*pow(x,i)/fact(i));
 i+=2;
 }
 printf("Sum of the series:%f",res);
 return 0;
}
int fact(int n)
{
 int i;
 float fact=1;
 for(i=1;i<=n;i++)
 {
 fact*=i;
 }
 return fact;
}