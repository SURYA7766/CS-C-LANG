/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>  
#include <string.h>  
  
#define max 100  
int top,stack[max];  
  
void push(char x)
{  
  
      // Push(Inserting Element in stack) operation  
      if(top == max-1)
      {  
          printf("stack overflow");  
      }  else {  
          stack[++top]=x;  
      }  
  
}  
  
void pop()
{  
    // Pop (Removing element from stack)  
      printf("%c",stack[top--]);  
}  
  
  
main()  
{  
   char str[40];
   printf("Enter the string : \n");
   scanf("%s",&str);
   int len = strlen(str);  
   int i;  
  
   for(i=0;i<len;i++)  
        push(str[i]);  
  
   for(i=0;i<len;i++)  
      pop();
     
}
