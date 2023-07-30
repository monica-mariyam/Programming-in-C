//Exercise prog: linear and binary search in a func
#include<stdio.h>
int linear(int a[],int,int);
int binary(int a[],int,int);
void main()
{
 int ch,i,arr[10],x,size,res;
 printf("Enter array size:");
 scanf("%d",&size);
 printf("\nEnter the elements one by one:\n");
 for(i=0;i<size;i++)
 {
 scanf("%d",&arr[i]);
 }
 printf("\nEnter search element:");
 scanf("%d",&x);
 printf("1.Linear search");
 printf("\n2.Binary search");
 printf("\nEnter your choice:");
 scanf("%d",&ch);
 if (ch==1)
 {
 res=linear(arr,size,x);
 }
 else if (ch==2)
 {
 res=binary(arr,size,x);
 }
 else
 {
 res=-2;
 }
 if (res==-2)
 printf("\nInvalid input");
 else if (res==-1)
 printf("\nElement not found");
 else
 printf("\nElement found at arr[%d]",res);
}
int linear(int arr[10],int size,int x)
{
 int i,flag=0;
 for(i=0;i<size;i++)
 {
 if (x==arr[i])
 {
 flag++;
 return i;
 }
 }
 if (flag==0)
 return -1;
}
int binary(int a[10],int size,int x)
{
 int i,j,temp,low,high,mid,flag=0;
 for (i=0;i<size;i++)
 {
 for (j=i+1;j<size;j++)
 {
 if( a[i] > a[j] )
 {
 temp = a[i];
 a[i] = a[j];
 a[j] = temp;
 }
 }
 }
 printf("\n Elements in ascending order are : ");
 for(i=0;i<size;i++)
 {
 printf("\n a[%d] = %d",i,a[i]);
 
 }
 low = 0;
 high = size - 1;
 while( low <= high )
 {
 mid = ( low + high ) / 2;
 if( x == a[mid] )
 {
 flag++;
 return mid;
 
 }
 else if( x < a[mid] )
 {
 high = mid - 1; 
 
 }
 else
 {
 low = mid + 1;
 
 }
 
 }
 if( flag == 0 )
 {
 return -1;
 }
}
