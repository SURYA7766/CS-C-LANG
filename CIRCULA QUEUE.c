#include<stdio.h>
#define MAX 50

void insertq(int[], int);
void deleteq(int[]);
void display(int[]);

int front =  - 1;
int rear =  - 1;

int main()
{
int n, ch;
int queue[MAX];
do
{
printf("\n\n CIRCULAR QUEUE CHOICES:\n1. ENQUEUE \n2. DEQUEUE\n3. DISPLAY\n0. EXIT");
printf("\nPRESS THE CHOICE: ");
scanf("%d", &ch);
switch (ch)
{
case 1:
printf("\nENTER THE NUMBER: ");
scanf("%d", &n);
insertq(queue, n);
break;

case 2:
deleteq(queue);
break;

case 3:
display(queue);
break;

    
}
}while (ch != 0);
}

void insertq(int queue[], int item)
{
if ((front == 0 && rear == MAX - 1) || (front == rear + 1))
{
printf("QUEUE OVER-FLOW");
return;
}
else if (rear ==  - 1)
{
rear++;
front++;
}
else if (rear == MAX - 1 && front > 0)
{
rear = 0;
}
else
{
rear++;
}
queue[rear] = item;
}

void display(int queue[])
{
int i;
printf("\n");
if (front > rear)
{
for (i = front; i < MAX; i++)
{
printf("%d ", queue[i]);
}
for (i = 0; i <= rear; i++)
printf("%d ", queue[i]);
}
else
{
for (i = front; i <= rear; i++)
printf("%d ", queue[i]);
}
}

void deleteq(int queue[])
{
if (front ==  - 1)
{
printf("QUEUE UNDER-FLOW ");
}
else if (front == rear)
{
printf("\n %d REMOVED", queue[front]);
front =  - 1;
rear =  - 1;
}
else
{
printf("\n %d REMOVED", queue[front]);
front++;
}
}