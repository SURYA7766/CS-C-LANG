#include<stdio.h>

int main()
{
char str[100],copy_str[100];
char*pstr,*pcopy_str;
int i=0;
pstr=str;
pcopy_str=copy_str;

printf("\n ENTER THE STRING");
gets(str);

while(*pstr!='\0')
{
*pcopy_str=*pstr;
 pstr++,pcopy_str++;
}
*pcopy_str='\0';

printf("\n THE COPIED STRING IS");

pcopy_str= copy_str;
while(*pcopy_str!='\0')
{
    
printf("%c",*pcopy_str);

pcopy_str++;
}
}

