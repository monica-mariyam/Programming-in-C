//MATRIX addition USING FUNCTION

#include <stdio.h>
void addmatrix(int a[][10],int b[][10],int,int);
int main()
{
 int a[10][10],b[10][10],row,col,i,j;
 printf("Rows?:");
 scanf("%d",&row);
 printf("Columns?:");
 scanf("%d",&col);
 printf("\n");
 for (i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 printf("Enter a[%d][%d]:",i,j);
 scanf("%d",&a[i][j]);
 }
 }
 printf("\n");
 for (i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 printf("Enter b[%d][%d]:",i,j);
 scanf("%d",&b[i][j]);
 }
 }
 addmatrix(a,b,row,col);
 return 0;
}
void addmatrix(int x[][10],int y[][10],int row,int col)
{
 int i,j,c[10][10];
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 c[i][j]=x[i][j]+y[i][j];
 }
 }
 printf("\nMatrix elements after addition:\n");
 for(i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 printf("\t%d",c[i][j]);
 }
 printf("\n");
 }
}