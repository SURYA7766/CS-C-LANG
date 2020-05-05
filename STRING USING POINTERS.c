#include<stdio.h>
int str_lne(char*);
 
void main() 
{
char str[20];
int length;
printf("\n ENTER THE STRING : ");
gets(str);
length = str_lne(str);
printf("LENGTH OF THE ENTERED STRING %s IS : %d", str, length);
}

int str_lne(char*p) 
{
int count = 0;
while (*p != '\0') {
count++;
p++;
}
return count;
}

