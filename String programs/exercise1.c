/*TO COUNT THE NUMBER OF OCCURENCES OF VOWELS, CONSONANTS, 
WORDS, SPACES AND SPECIAL CHARACTERS IN A GIVEN WORD*/

#include <stdio.h>
#include<string.h>
int main()
{
 int i,len,vcount=0,ccount=0,scount=0,spcount=0;
 char str[100];
 printf("Enter a string:");
 scanf("%[^\n]",str);
 len=strlen(str);
 for(i=0;i<len;i++)
 {
 if ((str[i]>='a')&&(str[i]<='z')||(str[i]>='A')&&(str[i]<='Z'))
 {
 if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||
 (str[i]=='A')||(str[i]=='E')||(str[i]=='O')||(str[i]=='I')||(str[i]=='U'))
 {
 vcount+=1;
 }
 else
 {
 ccount+=1;
 }
 }
 else if(str[i]==' ')
 {
 scount+=1;
 }
 else if((str[i]>='0')&&(str[i]<='9'))
 {
 continue;
 }
 else
 {
 spcount+=1;
 }
 }
 printf("\nNo. of vowels:%d",vcount);
 printf("\nNo. of consonants:%d",ccount);
 printf("\nNo. of words:%d",scount+1);
 printf("\nNo. of spaces:%d",scount);
 printf("\nNo. of special characters:%d",spcount);
 return 0;
}