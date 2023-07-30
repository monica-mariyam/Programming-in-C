#include<stdio.h>
#include<string.h>
int pal(char *ptr);
int main()
{
 int res;
 char str[10],*ptr;
 ptr=str;
 printf("Enter a string:");
 scanf("%s",ptr);
 res=pal(str);
 if(res==1)
 {
 printf("Its a palindrome string");
 }
 else
 {
 printf("Not a palindrome");
 }
 return 0;
}
int pal(char *ptr)
{
 int first=0,last=strlen(ptr)-1,mid,flag=0;
 mid=(first +last)/2;
 while(first<=mid)
 {
 if(ptr[first]!=ptr[last])
 {
 flag++;
 break;
 }
 first++;last--;
 }
 if(flag==0)
 return 1;
 else
 return 0;
 return 0;
}