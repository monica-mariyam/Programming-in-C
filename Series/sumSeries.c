/*WRITE A MAIN() FUN TO EVALUATE S=1^2+2^2+3^2+….+N^2 CALLING THIS 
ITERATIVE FUNCTION. CONVERT THE USER-DEFINED FUNCTION INTO 
RECURSION AND PRINT THE NO. OF RECURSIVE CALLS MADE. EVALUATE THE 
RECURSION FOR N=100 AND VERIFY THE RESULT.*/

#include<stdio.h>
#include<math.h>
int sumfunc(int);
int main()
{
 long int sum=0;
 int n,i,res;
 printf("Enter the value of n:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
 sum+=pow(i,2);
 }
 printf("Sum=%ld",sum);
 res=sumfunc(n);
 if (sum==res)
 printf("\nVerified! Obtained same result.");
 else
 printf("Wrong");
 return 0;
}
int sumfunc(int n)
{
 long int sum=0;
 static int count=0;
 
 if(n==1)
 {
 printf("\nNo. of recursive calls:%d",count);
 return n;
 }
 else
 {
 count++;
 return (pow(n,2)+sumfunc(n-1));
 }
}