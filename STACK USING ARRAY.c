#include<stdio.h>
#define MAX 50
int stack[MAX],choice,n,top,x,i;
void push(void);
void pop(void);
void display(void);
void peek(void);
int main()
{
top=-1;
printf("\n ENTER THE SIZE OF THE STACK:");
scanf("%d",&n);
printf("\n\t STACK OPERATIONS USED IN THIS ARRAY");
printf("\n\t--------------------------------");
printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.PEEK\n\t 5.EXIT");
do
{
printf("\n ENTER YOUR CHOICE:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
peek();
break;
}
case 5:
{
printf("\n\t EXIT POINT ");
break;  
}
default:
{
printf ("\n\t YOU HAVE ENTERED WRONG NUMBER");
}
}
}
while(choice!=5);
return 0;
}
void push()
{
if(top>=n-1)
{
printf("\n\tSTACK OVER-FLOW");
}
else
{
printf(" ENTER A ELEMENT NEEDED TO BE PUSHED:");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("\n\t STACK UNDER-FLOW");
}
else
{
printf("\n\t THE ELEMENT WHICH IS POPPED %d",stack[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("\n THE ELEMENTS IN STACK \n");
for(i=top; i>=0; i--)
printf("\n%d",stack[i]);
printf("\n ENTER NEXT CHOICE");
}
else
{
printf("\n The STACK IS EMPTY");
}
    
}
void peek()
{
printf("\nPEEK ELEMENT IS %d",stack[top]);
}

    
