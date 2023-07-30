//TO FIND TRANSPOSE OF A MATRIX

#include <stdio.h>
int main()
{
 int a[10][10],at[10][10],i,j,row,col;
 printf("Rows?:");
 scanf("%d",&row);
 printf("Columns?:");
 scanf("%d",&col);
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 printf("Enter a[%d][%d]:",i,j);
 scanf("%d",&a[i][j]);
 }
 }
 printf("\nThe matrix elements are:\n");
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 printf("\t%d",a[i][j]);
 }
 printf("\n");
 }
 //transpose
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 at[j][i]=a[i][j];
 }
 }
 printf("\nMatrix elements after transpose:\n");
 for(i=0;i<col;i++)
 {
 for(j=0;j<row;j++)
 {
 printf("\t%d",at[i][j]);
 }
 printf("\n");
 }
 return 0;
}
