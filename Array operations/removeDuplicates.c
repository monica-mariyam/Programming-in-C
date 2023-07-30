// PROGRAM TO REMOVE DUPLICATES FROM A ARRAY

#include <stdio.h>
int main()
{
 int a[10],i,j,k,n;
 printf("Enter how many elements:");
 scanf("%d",&n);
 printf("Enter the elements:");
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Given array:");
 for(i=0;i<n;i++)
 {
 printf("\t%d",a[i]);
 }
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
 if (a[i]==a[j])
 {
 for(k=j;k<n-1;k++)
 {
 a[k]=a[k+1];
 }
 j--;n--;
 }
 }
 }
 printf("\nAfter removing the duplicates:\n");
 for(i=0;i<n;i++)
 {
 printf("\t%d",a[i]);
 }
 return 0;
}
