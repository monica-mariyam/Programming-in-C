#include<stdio.h>
#include<string.h>
void main()
{
 char str[20];
 int first=0,last,mid,flag=0;
 printf("Enter a string:");
 scanf("%s",str);
 last=strlen(str)-1;
 mid=(first+last)/2;
 while(first<=last)
 {
 if(str[first]!=str[last])
 {
 flag++;
 break;
 }
 first++;
 last--;
 }
 if (flag==0)
 printf("Its a palindrome string");
 else
 printf("Not a palindrome");
}