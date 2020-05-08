
#include <stdio.h>
#include <stdlib.h>
 
struct node
{
int info;
struct node *ptr;
}*front,*rear,*temp,*front1;
 
int frontelement();
void enq(int data);
void deq();
void empty();
void display();
void create();
void queuesize();
 
int count = 0;
 
void main()
{
int no, ch, e;
printf("\n------SELECT--------");
printf("\n 1 - ENQUEUE");
printf("\n 2 - DEQUEUE");
printf("\n 3 - FIRST ELEMENT");
printf("\n 4 - EMPTY");
printf("\n 5 - EXIT");
printf("\n 6 - DISPLAY THE LIST");
printf("\n 7 - SIZE OF THE QUEUE");
create();
while (1)
{
printf("\n ENTER THE CHOICE : ");
scanf("%d", &ch);
switch (ch)
{
    
case 1:
printf("TYPE THE DATA : ");
scanf("%d", &no);
enq(no);
break;

case 2:
deq();
break;

case 3:
e = frontelement();
if (e != 0)
printf("FIRST ELEMENT : %d", e);
else
printf("\n ABSENCE OF FIRST ELEMENT IN QUEUE");
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
queuesize();
break;

default:
printf("WRONG CHOICE,ENTER THE CORRECT CHOICE");
break;
}
}
}
 

void create()
{
front = rear = NULL;
}
 
void queuesize()
{
printf("\n SIZE OF QUEUE : %d", count);
}
 
void enq(int data)
{
if (rear == NULL)
{
rear = (struct node *)malloc(1*sizeof(struct node));
        rear->ptr = NULL;
        rear->info = data;
        front = rear;
}
else
{
temp=(struct node *)malloc(1*sizeof(struct node));
      rear->ptr = temp;
      temp->info = data;
      temp->ptr = NULL;
 
        rear = temp;
}
count++;
}
 
void display()
{
front1 = front;
if ((front1 == NULL) && (rear == NULL))
{
printf("QUEUE IS EMPTY");
return;
}
while (front1 != rear)
{
printf("%d ", front1->info);
        front1 = front1->ptr;
}
if (front1 == rear)
printf("%d", front1->info);
}
 
void deq()
{
front1 = front;
 
if (front1 == NULL)
{
printf("\n ERROR");
return;
}
else
if (front1->ptr != NULL)
{
front1 = front1->ptr;
printf("\n DEQUED ELEMENT : %d", front->info);
free(front);
front = front1;
}
else
{
printf("\n DEQUED ELEMENT : %d", front->info);
free(front);
front = NULL;
rear = NULL;
}
count--;
}
 
int frontelement()
{
if ((front != NULL) && (rear != NULL))
return(front->info);
else
return 0;
}
 
void empty()
{
if ((front == NULL) && (rear == NULL))
printf("\n QUEUE IS EMPTY");
else
printf("QUEUE IS NOT EMPTY");
}