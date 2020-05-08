#include <stdio.h>
#include <stdlib.h>

struct node {
int num;
struct node * nextptr;
}*stnode;
 

void ClListcreation(int n);
void displayClList();

int main()
{
int n;
stnode = NULL;
printf("\n\n CIRCULAR LINKED LIST : GENERATE AND DISPLAY A CLL:\n");
printf("-------------------------------------------------------\n");	   	

printf(" TYPE THE NUMBER OF NODES : ");
scanf("%d", &n);
 
ClListcreation(n); 
displayClList();
return 0;
}

void ClListcreation(int n)
{
int i, num;
struct node *preptr, *newnode;

if(n >= 1)
{
stnode = (struct node *)malloc(sizeof(struct node));

printf(" ENTERED DATA FOR NODE 1 : ");
scanf("%d", &num);
stnode->num = num;
stnode->nextptr = NULL;
preptr = stnode;
for(i=2; i<=n; i++)
{
newnode = (struct node *)malloc(sizeof(struct node));
printf(" ENTERED DATA FOR NODE %d : ", i);
scanf("%d", &num);
newnode->num = num;
newnode->nextptr = NULL;	
preptr->nextptr = newnode;	
preptr = newnode;   	
}
preptr->nextptr = stnode; 		
}
}

void displayClList()
{
struct node *tmp;
int n = 1;

if(stnode == NULL)
{
printf(" NONE DATA WAS FOUND IN THE LIST.");
}
else
{
tmp = stnode;
printf("\n\n DATA ALLOCATED IN THE LIST:\n");

do {
printf(" DATA %d = %d\n", n, tmp->num);
tmp = tmp->nextptr;
n++;
}while(tmp != stnode);
}
}
