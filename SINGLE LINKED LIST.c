#include <stdio.h>
#include <stdlib.h>
struct node 
{
int num;                   
struct node *nextptr;      
}*stnode;

void createNodeList(int n);     
int NodeCount();	           
void displayList();             

int main()
{
int n,totalNode;
printf("\n\n CREATE A SINGLE LINKED LIST THEN COUNT THE TOTAL NODES:\n");
printf("------------------------------------------------------------\n");
printf(" ENTER THE VALUE OF NODES: ");
scanf("%d", &n);
createNodeList(n);
printf("\n VALUES GIVEN IN THE SLL ARE : \n");		
displayList();
totalNode = NodeCount();
printf("\n TOTAL NUMBER OF NODES = %d\n", totalNode);
return 0;
}

void createNodeList(int n)
{
struct node *fnNode, *tmp;
int num, i;
stnode = (struct node *)malloc(sizeof(struct node));
if(stnode == NULL) 
{
printf(" MEMORY CAN'T BE GIVEN.");
}
else
{
printf(" GIVEN DATA FOR NODE 1 : ");
scanf("%d", &num);
stnode-> num = num;      
stnode-> nextptr = NULL; 
tmp = stnode;
for(i=2; i<=n; i++)
{
fnNode = (struct node *)malloc(sizeof(struct node));
if(fnNode == NULL) 
{
printf(" MEMORY CAN'T BE GIVEN.");
break;
}
else
{
printf(" GIVEN DATA FOR NODE %d : ", i);
scanf(" %d", &num);
fnNode->num = num;      
fnNode->nextptr = NULL; 
tmp->nextptr = fnNode; 
tmp = tmp->nextptr;
}
}
}
} 

int NodeCount()
{
int ctr = 0;
struct node *tmp;
tmp = stnode;
while(tmp != NULL)
{
ctr++;
tmp = tmp->nextptr;
}
return ctr;
}

void displayList()
{
struct node *tmp;
if(stnode == NULL)
{
printf(" NO DATA FOUND IN THE LIST.");
}
else
{
tmp = stnode;
while(tmp != NULL)
{
printf(" DATA = %d\n", tmp->num);   
tmp = tmp->nextptr;
}
}
} 

