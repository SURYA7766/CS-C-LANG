#include<stdio.h>
int main()
{
char string1[30],string2[30],*str1,*str2;
int i,equal = 0;
printf("ENTER THE 1ST STRING: ");
scanf("%s",string1);
printf("Enter THE 2ND STRING: ");
scanf("%s",string2);
str1 = string1;
str2 = string2;
while(*str1 == *str2)
{

if ( *str1 == '\0' || *str2 == '\0' )
break;
str1++;
str2++;
}
if( *str1 == '\0' && *str2 == '\0' )
printf("\n\nSTRINGS ARE EQUAL.");
else
printf("\n\nSTRINGS ARE NOT EQUAL.");
}

