#include<stdio.h>
int binary(int *p,int);
int main()
{
 int arr[10],size,i,*p;
 p=arr;
 printf("Enter no. of elements:");
 scanf("%d",&size);
 printf("Enter the elements:");
 for(i=0;i<size;i++)
 {
 scanf("%d",p+i);
 }
 binary(p,size);
 return 0;
}
int binary(int *p,int size)
{
 int low,mid,high,x,i,j,flag=0,temp;
 for(i=0;i<size;i++)
 {
 for(j=i+1;j<size;j++)
 {
 if(*(p+i)>*(p+j))
 {
 temp=*(p+i);
 *(p+i)=*(p+j);
 *(p+j)=temp;
 }
 }
 }
 printf("\nAfter sorting:\n");
 for(i=0;i<size;i++)
 {
 printf("\t%d",*(p+i));
 }
 printf("\nEnter search element:");
 scanf("%d",&x);
 low=0;high=size-1;
 while(low<=high)
 {
 mid=(low+high)/2;
 if(x==*(p+mid))
 {
 printf("Element found at p[%d]",mid);
 flag++;
 break;
 }
 else if(x<*(p+mid))
 {
 high=mid-1;
 }
 else
 {
 low=mid+1;
 }
 }
 if(flag==0)
 {
 printf("Not found");
 }
 return 0;
}