#include <stdio.h>
#include <stdlib.h>
struct node
{
int info;
struct node *next;
};
void push(struct node** top, int info);
int pop(struct node** top);
struct queue
{
struct node *stack1;
struct node *stack2;
};
void enqueue(struct queue *q, int x)
{
push(&q->stack1, x);
}
void dequeue(struct queue *q)
{
int x;
if (q->stack1 == NULL && q->stack2 == NULL)
{
printf("QUEUE IS EMPTY");
return;
}
if (q->stack2 == NULL) 
{
while (q->stack1 != NULL) 
{
x = pop(&q->stack1);
push(&q->stack2, x);
}
}
x = pop(&q->stack2);
printf("%d\n", x);
}
void push(struct node** top, int info)
{
struct node* newnode = (struct node*) malloc(sizeof(struct node));
if (newnode == NULL) {
printf("STACK OVERFLOW \n");
return;
}
newnode->info = info;
newnode->next = (*top);
(*top) = newnode;
}
int pop(struct node** top)
{
int buff;
struct node *t;
if (*top == NULL)
{
printf("STACK UNDERFLOW \n");
return 0;
}
else
{
t = *top;
buff = t->info;
*top = t->next;
free(t);
return buff;
}
}
void display(struct node *top1,struct node *top2)
{
while (top1 != NULL) 
{
printf("%d\n", top1->info);
top1 = top1->next;
}
while (top2 != NULL) {
printf("%d\n", top2->info);
top2 = top2->next;
}
}
int main()
{
struct queue *q = (struct queue*)malloc(sizeof(struct queue));
int f = 0, a;
char ch = 'y';
q->stack1 = NULL;
q->stack2 = NULL;
while (ch == 'y'||ch == 'Y')
{
printf("ENTER YOUR CHOICE\n1.TO ADD THE QUEUE\n2.TO REMOVE FROME THE CURRENT QUEUE\n3.DISPLAY THE QUEUE\n4.EXIT\n");
scanf("%d", &f);
switch(f)
{
case 1: 
printf("ELEMENT THAT IS NEEDED TO BE ADDED TO QUENE\n");
scanf("%d", &a);
enqueue(q, a);
break;
case 2:
dequeue(q);
break;
case 3:
display(q->stack1, q->stack2);
break;
case 4: 
exit(1);
break;
default:
printf("NOT VALID\n");
break;
}
}
}