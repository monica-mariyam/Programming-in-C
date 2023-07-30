//MATRIX MULTIPLICATION

#include <stdio.h>
int main()
{
 int a[10][10],b[10][10],c[5][5]={0,0,0,0,0},i,j,k,r1,r2,c1,c2;
 printf("Rows and columns:");
 scanf("%d%d",&r1,&c1);
 for (i=0;i<r1;i++)
 {
 for(j=0;j<c1;j++)
 {
 printf("Enter a[%d][%d]:",i,j);
 scanf("%d",&a[i][j]);
 }
 }
 printf("Rows and columns:");
 scanf("%d%d",&r2,&c2);
 for (i=0;i<r2;i++)
 {
 for(j=0;j<c2;j++)
 {
 printf("Enter b[%d][%d]:",i,j);
 scanf("%d",&b[i][j]);
 }
 }
 if (c1==r2)
 {
 for(i=0;i<r1;i++)
 {
 for(j=0;j<c1;j++)
 {
 for(k=0;k<r2;k++)
 {
 c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
 
 }
 }
 }
 }
 else
 {
 printf("Multiplication not possible");
 }
 for(i=0;i<r1;i++)
 {
 for(j=0;j<c2;j++)
 {
 printf("\t%d",c[i][j]);
 }
 printf("\n");
 }
 return 0;
}