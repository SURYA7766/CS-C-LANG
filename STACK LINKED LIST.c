#include <stdio.h>
#include <stdlib.h>
 
struct node
{
int info;
struct node *ptr;
}*top,*top1,*temp;
 
int topelement();
void push(int data);
void pop();
void empty();
void display();
void destroy();
void stack_count();
void create();
 
int count = 0;
 
void main()
{
int no, ch, e;
 
printf("\n 1 - PUSH THE ELEMENT");
printf("\n 2 - POP THE ELEMENT");
printf("\n 3 - SHOW THE TOP ELEMENT");
printf("\n 4 - EMPTY THE LIST");
printf("\n 5 - EXIT");
printf("\n 6 - DISPLAY THE LIST");
printf("\n 7 - COUNT THE ELEMENT IN STACK");
printf("\n 8 - DESTROY THE STACK");
 
create();
 
while (1)
{
printf("\n TYPE YOUR CHOICE: ");
scanf("%d", &ch);

switch (ch)
{
case 1:
printf("ENTER THE ELEMENT: ");
scanf("%d", &no);
push(no);
break;

case 2:
pop();
break;

case 3:
if (top == NULL)
printf("THERE IS NO ELEMENT IN THE STACK");
else
{
e = topelement();
printf("\n ELEMENT IN THE TOP: %d", e);
}
break;

case 4:
empty();
break;

case 5:
exit(0);

case 6:
display();
break;

case 7:
stack_count();
break;

case 8:
destroy();
break;

default :
printf(" WRONG CHOICE,ENTER THE CORRECT CHOICE");
break;
}
}
}
 

void create()
{
top = NULL;
}
 

void stack_count()
{
printf("\n TOTAL ELEMENTS IN STACK: %d", count);
}
 

void push(int data)
{
if (top == NULL)
{
top =(struct node *)malloc(1*sizeof(struct node));
     top->ptr = NULL;
     top->info = data;
}
else
{
temp =(struct node *)malloc(1*sizeof(struct node));
    temp->ptr = top;
    temp->info = data;
    top = temp;
}
count++;
}
 
void display()
{
top1 = top;
 
if (top1 == NULL)
{
printf("STACK IS EMPTY");
return;
}
 
while (top1 != NULL)
{
printf("%d ", top1->info);
    top1 = top1->ptr;
}
}
 

void pop()
{
top1 = top;
 
if (top1 == NULL)
{
printf("\n ERROR");
return;
}
else
top1 = top1->ptr;
printf("\n POPPED ELEMENT : %d", top->info);
free(top);
top = top1;
count--;
}
 

int topelement()
{
    return(top->info);
}
 

void empty()
{
if (top == NULL)
printf("\n STACK IS EMPTY");
else
printf("\n STACK IS NOT EMPTY WITH %d ELEMENTS", count);
}
 

void destroy()
{
top1 = top;
 
while (top1 != NULL)
{
top1 = top->ptr;
free(top);
top = top1;
top1 = top1->ptr;
}
free(top1);
top = NULL;
printf("\n  STACK ELEMENTS ARE DESTROYED");
count = 0;
}
