#include<stdio.h>
void main()
{
 int a[10];
 int size,i,j,temp,x,low,high,mid,flag=0;
 printf("\n How many elements : ");
 scanf("%d",&size);
 printf("\n Enter elements one by one : ");
 for(i=0;i<size;i++)
 {
 scanf("%d",&a[i]);
 
 }
 printf("\n Enter search element : ");
 scanf("%d",&x);
 for(i=0;i<size;i++)
 {
 for(j=i+1;j<size;j++)
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
 printf("\n %d found at a[%d]",x,mid);
 flag++;
 break;
 
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
 printf("\n %d not found ",x);
 }
}
