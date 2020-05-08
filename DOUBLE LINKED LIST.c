#include <stdio.h>
#include <stdlib.h>

struct node {
int num;
struct node * preptr;
struct node * nextptr;
}*stnode, *ennode;
 

void DlListcreation(int n);
void displayDlList();

int main()
{
int n;
stnode = NULL;
ennode = NULL;
printf("\n\n DOUBLY LINKED LIST : GENERATE AND DISPLAY A DLL :\n");
printf("------------------------------------------------------\n");	   	

printf(" ENTER THE NUMBER OF NODES : ");
scanf("%d", &n);
 
DlListcreation(n); 
displayDlList();
return 0;
}
 
void DlListcreation(int n)
{
int i, num;
struct node *fnNode;
 
if(n >= 1)
{
stnode = (struct node *)malloc(sizeof(struct node));
 
if(stnode != NULL)
{
printf(" DATA ENTERED FOR NODE 1 : "); 
scanf("%d", &num);
 
stnode->num = num;
stnode->preptr = NULL;
stnode->nextptr = NULL;
ennode = stnode;

for(i=2; i<=n; i++)
{
fnNode = (struct node *)malloc(sizeof(struct node));
if(fnNode != NULL)
{
printf(" DATA ENTERED FOR NODE %d : ", i);
scanf("%d", &num);
fnNode->num = num;
fnNode->preptr = ennode;    
fnNode->nextptr = NULL;
 
ennode->nextptr = fnNode;   
ennode = fnNode;    
}
else
{
printf(" MEMORY CAN'T BE GIVEN.");
break;
}
}
}
else
{
printf(" MEMORY CAN'T BE GIVEN.");
}
}
}
void displayDlList()
{
struct node * tmp;
int n = 1;
if(stnode == NULL)
{
printf(" NO DATA FOUND IN THE LIST.");
}
else
{
tmp = stnode;
printf("\n\n DATA ENTERED ON THE LIST:\n");
 
while(tmp != NULL)
{
printf(" NODE %d : %d\n", n, tmp->num);
n++;
tmp = tmp->nextptr; 
}
}
}