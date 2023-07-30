//TO SORT STRINGS IN DESCENDING ORDER

#include<stdio.h>
#include<string.h>
void main()
{
 char str[10][20],s[10];
 int i,j,n;
 printf("Enter how many strings:");
 scanf("%d",&n);
 printf("Enter strings one by one:");
 for(i=0;i<n;i++)
 {
 scanf("%s",str[i]);
 }
 //sorting in descending order
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
 if(strcmp(str[i],str[j])<1)
 {
 strcpy(s,str[i]);
 strcpy(str[i],str[j]);
 strcpy(str[j],s);
 }
 }
 }
 printf("\nAfter sorting:\n");
 for(i=0;i<n;i++)
 printf("%s\n",str[i]);
}