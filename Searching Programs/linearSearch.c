#include <stdio.h>
int main()
{
 int a[10],i,x,flag=0,size;
 printf("How many elements:");
 scanf("%d",&size);
 printf("Enter the elements one by one:");
 for (i=0;i<size;i++)
 {
 scanf("%d",&a[i]);
 }
 printf("The matrix :\n");
 for (i=0;i<size;i++)
 {
 printf("\t%d",a[i]);
 }
 printf("\nEnter the search element:");
 scanf("%d",&x);
 for (i=0;i<size;i++)
 {
 if(a[i]==x)
 {
 printf("\nElement %d found at a[%d]",x,i);
 flag++;
 }
 }
 if (flag==0)
 {
 printf("\nElement not found");
 }
 return 0;
}