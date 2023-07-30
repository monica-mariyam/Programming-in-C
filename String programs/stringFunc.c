//USING SOME STRING BUILT-IN FUNCTIONS

#include<stdio.h>
#include<string.h>
void main()
{
 char s1[ ] = "UNIVERSITY";
 char s2[10];
 int len,diff,loc;
 
 // find length of string
 len = strlen(s1);
 printf("\n Length = %d",len);
 // copy entire string
 strcpy( s2, s1 );
 printf("\n s2 = %s",s2);
 // copy n characters
 strncpy( s2, s1 , 3 );
 s2[3] = '\0';
 printf("\n s2 = %s",s2);
 // concatenate entire string
 strcat( s1, s2 );
 printf("\n s1 = %s",s1);
 // concatenate n characters
 strncat( s1, s2, 2 );
 printf("\n s1 = %s",s1);
 // compare 2 strings
 diff = strcmp( s1, s2 );
 if( diff == 0 )
 printf("\n equal " );
 else if( diff > 0 )
 printf("\n s1 > s2 ");
 else
 printf("\n s1 < s2 ");
 // compare n characters
 diff = strncmp( s1, s2, 3 );
 if( diff == 0 )
 printf("\n equal " );
 else if( diff > 0 )
 printf("\n s1 > s2 ");
 else
 printf("\n s1 < s2 ");
 // find substring
 if( strstr( s1, s2 ) == NULL )
 printf("\n s2 not found in s1");
 else
 printf("\n s2 found in s1");
}