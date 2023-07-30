#include <stdio.h>
int main()
{
 int a[10],b[10],temp,i,j,size;
 printf("How many elements?:");
 scanf("%d",&size);
 printf("Enter the elements one by one:");
 for(i=0;i<size;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("Matrix before sorting:\n");
 for(i=0;i<size;i++)
 {
 printf("\t%d",a[i]);
 }
 for (i=0;i<size;i++)
 {
 for(j=i+1;j<size;j++)
 {
 if (a[i]>a[j])
 {
 temp=a[i];
 a[i]=a[j];
 a[j]=temp;
 }
 }
 }
 printf("\nAfter sorting:\n");
 for(i=0;i<size;i++)
 {
 printf("\t%d",a[i]);
 }
 return 0;
}