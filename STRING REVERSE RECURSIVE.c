#include <stdio.h>
#include <string.h>
void rev_str(char*, int, int);

int main()
{
char str_arr[150];
printf("ENTER THE STRING:");
scanf("%s", &str_arr);
 
rev_str(str_arr, 0, strlen(str_arr)-1);
printf("\nTHE REVERSED STRING IS: %s",str_arr);
return 0;
}
 
void rev_str(char *x, int begin, int cease)
{
char ch;
if (begin >= cease)
return;
ch = *(x+begin);
     *(x+begin) = *(x+cease);
     *(x+cease) = ch;
rev_str(x, ++begin, --cease);
}

