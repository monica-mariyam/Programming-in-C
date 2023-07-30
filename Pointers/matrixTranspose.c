//MATRIX TRANSPOSE USING POINTERS

#include <stdio.h>
int main()
{
 int a[10][10],at[10][10],i,j,row,col;
 int (*p)[10],(*q)[10];
 p=a;q=at;
 printf("Enter rows and columns:");
 scanf("%d%d",&row,&col);
 printf("\nEnter the elements:");
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 scanf("%d",*(p+i)+j);
 }
 }
 printf("\nGiven matrix is:\n");
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 printf("\t%d",*(*(p+i)+j));
 }
 printf("\n");
 }
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 *(*(q+j)+i)=*(*(p+i)+j);
 }
 }
 printf("After transpose:\n");
 for(i=0;i<col;i++)
 {
 for(j=0;j<row;j++)
 {
 printf("\t%d",*(*(q+i)+j));
 }
 printf("\n");
 }
 return 0;
}