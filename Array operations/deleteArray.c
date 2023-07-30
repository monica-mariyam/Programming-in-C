// to delete an element from an array

#include <stdio.h>
int main()
{
 int a[10],i,size,pos;
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
 printf("\nEnter the position of element to be deleted:");
 scanf("%d",&pos);
 for (i=pos-1;i<size-1;i++)
 {
 a[i]=a[i+1];
 }
 printf("\nNew matrix:\n");
 for (i=0;i<size-1;i++)
 {
 printf("\t%d",a[i]);
 }
 printf("\n");
 return 0;
}