/* Write a C program to multiply two matrices using dynamic memory 
allocation. Each
two dimensional array should be processed as array of pointers to a set of 1-
dimensional integer arrays. Read, access and display the matrix elements 
using pointers
instead of subscript notation. Use three functions i) To read input matrix ii) 
To compute
the product and iii) To display the resultant matrix.*/

#include<stdio.h>
#include<stdlib.h>
void read(int *p,int *q,int,int);
void comp_product(int *p,int *q,int,int);
void display(int *s,int,int);
int main()
{
 int *p,*q,row,col,i,j;
 printf("Enter rows and columns:");
 scanf("%d%d",&row,&col);
 
 p=(int *)malloc((row*col)*sizeof(int));
 q=(int *)malloc((row*col)*sizeof(int));
 read(p,q,row,col);
 comp_product(p,q,row,col);
 
 return 0;
}
void read(int *p,int *q,int r,int c)
{
 int i,j;
 printf("Enter the A matrix elements:\n");
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 scanf("%d",p+c*i+j);
 }
 
 }
 printf("Enter the B matrix elements:\n");
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 scanf("%d",q+c*i+j);
 }
 
 }
}
void comp_product(int *p,int *q,int r,int c)
{
 int *s,i,j,k;
 s=(int *)malloc((r*c)*sizeof(int));
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 *(s+c*i+j)=0;
 for(k=0;k<r;k++)
 {
 *(s+c*i+j)+=(*(p+c*i+k)*(*(q+c*k+j)));
 }
 } 
 }
 display(s,r,c);
}
void display(int *s,int r,int c)
{
 int i,j;
 printf("After multiplication:\n");
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 printf("\t%d",*(s+c*i+j));
 }
 printf("\n");
 }
}
