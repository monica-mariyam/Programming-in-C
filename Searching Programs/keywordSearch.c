#include<stdio.h>
#include<string.h>
void main()
{
 char str1[20],str2[10];
 int i,sublen,s1=0,s2=0,c=0,flag=0;
 printf("Enter main string:");
 scanf("%s",str1);
 printf("Enter substring:");
 scanf("%s",str2);
 sublen=strlen(str2);
 while (str1[s1]!='\0')
 {
 if (str1[s1]==str2[s2])
 {
 s1++;
 s2++;
 flag=1;
 if(s2==sublen)
 {
 s2=0;
 c++;
 }
 }
 // for partial substring
 else
 {
 if(flag==1)
 {
 s2=0;
 flag=0;
 }
 else
 {
 s1++;
 }
 }
 
 }
 if (c==0)
 printf("Substring not found");
 else
 printf("Substring found %d times",c);
}