//TO MERGE TWO UNSORTED ARRAYS

#include <stdio.h>
int main()
{
 int a[10],b[10],c[10],i,j,asize,bsize,csize;
 //1st array
 printf("Enter size of array 1:");
 scanf("%d",&asize);
 printf("Enter the elements:");
 for(i=0;i<asize;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("\nFirst array:\n");
 for(i=0;i<asize;i++)
 {
 printf("\t%d",a[i]);
 }
 //2nd array
 printf("\nEnter size of array 2:");
 scanf("%d",&bsize);
 printf("Enter the elements:");
 for(i=0;i<bsize;i++)
 {
 scanf("%d",&b[i]);
 }
 printf("\nSecond array:\n");
 for(i=0;i<bsize;i++)
 {
 printf("\t%d",b[i]);
 }
 csize=asize+bsize;
 for (i=0;i<asize;i++)
 {
 c[j]=a[i];
 j++;
 }
 for(i=0;i<bsize;i++)
 {
 c[j]=b[i];
 j++;
 }
 printf("\nElements after merging:\n");
 for(i=0;i<csize;i++)
 {
 printf("\t%d",c[i]);
 }
 return 0;
}