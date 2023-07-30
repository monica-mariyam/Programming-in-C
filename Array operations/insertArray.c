// to insert an element into an array

#include <stdio.h>
int main()
{
 int a[10],i,size,pos,new;
 printf("How many elements:");
 scanf("%d",&size);
 printf("\nEnter the elements one by one:");
 for (i=0;i<size;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("The matrix:\n");
 for (i=0;i<size;i++)
 {
 printf("\t%d",a[i]);
 }
 printf("\nEnter the element to be inserted:");
 scanf("%d",&new);
 printf("\nEnter the position of insertion:");
 scanf("%d",&pos);
 for (i=size-1;i>=pos-1;i--)
 {
 a[i+1]=a[i];
 }
 a[pos-1]=new;
 printf("\nNew matrix:\n");
 for (i=0;i<=size;i++)
 {
 printf("\t%d",a[i]);
 }
 printf("\n");
 return 0;
}