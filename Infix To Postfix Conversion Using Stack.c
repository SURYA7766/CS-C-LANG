/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define MAX 70

char st[MAX];
int top =-1;
void push(char st[],char);
char pop(char st[]);
void InfixtoPostfix(char source[],char target[]);
int getPriority(char);
int main()
{
char infix[100], postfix[100];
printf("\n ENTER THE EXPRESSION OF INFIX");
gets(infix);
strcpy(postfix,"");
InfixtoPostfix(infix,postfix);
printf("\n THE POSTFIX EXPRESSION IS ");
puts(postfix);
return 0;
}
void InfixtoPostfix(char source[],char target[])
{
int i=0,j=0;
char temp;
strcpy(target,"");
while(source[i]!='\0')
{
if(source[i]=='(')
{
push(st,source[i]);
i++;
}
else if(source[i]==')')
{
while((top!=-1)&&(st[top]!='('))
{
target[j]=pop(st);
j++;
}
if(top==-1)
{
printf("\n EXPRESSION IS INCORRECT");
exit(1);
}
temp= pop(st);
i++;
}
else if(isdigit(source[i])|| isalpha(source[i]))
{
target[j]=source[i];
j++;
i++;
}
else if(source[i]=='+'|| source[i]=='-'|| source[i]=='*'|| source[i]== '/'|| source[i]=='%')
{
while((top!=-1)&&(st[top]!='(')&&
     (getPriority(st[top])>getPriority
     (source[i])))
{
target[j]=pop(st);
j++;
}
push(st,source[i]);
i++;
}
else
{
printf("\n THERE IS A INCORRECT ELEMENT IN EXPRESSION");
exit(1);
}
}
while((top!=-1)&&(st[top]!='('))
{
target[j]=pop(st);
j++;
}
target[j]='\0';
}
int getPriority (char op)
{
if(op=='/'||op=='*'||op=='%')
return 1;
else if(op=='+'||op=='-')
return 0;
}
void push(char st[],char val)
{
if(top==MAX -1)
printf("\n STACK OVERFLOW");
else
{
top++;
st[top]=val;
}
}
char pop(char st[])
{
char val=' ';
if(top==-1)
printf("\n STACK UNDRFLOW");
else
{
val=st[top];
top--;
}
return val;
}