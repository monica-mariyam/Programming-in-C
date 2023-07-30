#include<stdio.h>
int pprimes(int,int);
int isprime(int);
void main()
{
 int ll,ul;
 printf("Enter the lower and upper limit:");
 scanf("%d%d",&ll,&ul);
 printf("Prime numbers between %d and %d are:",ll,ul);
 pprimes(ll,ul);
}
int pprimes(int ll,int ul)
{
 for(int i=ll;i<=ul;i++)
 {
 if(isprime(ll))
 {
 printf("\n%d",ll);
 }
 ll++;
 }
 return 0;
}
int isprime(int ll)
{
 int i,flag=0;
 for(i=2;i<ll;i++)
 {
 if(ll%i==0)
 {
 flag++;
 break;
 }
 }
 if(flag==0)
 return 1;
 else
 return 0;
 return 0;
}