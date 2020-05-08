#include <stdio.h>
#include <stdlib.h>

struct node
{
int num;
struct node *nextptr;
}
 
stnode, *ennode;

int FindElement(int);
void main()
{
int n,i,FindElem,FindPlc;
stnode.nextptr=NULL;
ennode=&stnode;
printf("\n\n LINKED LIST : SEARCH AN ELEMENT IN SLL :\n");
printf("---------------------------------------------\n");
	
printf(" ENTER THE VALUE OF NODES : ");
scanf("%d", &n);	
printf("\n");
for(i=0;i< n;i++)
{
ennode->nextptr=(struct node *)malloc(sizeof(struct node));
printf(" INPUT DATA FOR NODE %d : ",i+1);
scanf("%d",&ennode->num);
ennode=ennode->nextptr;
}
ennode->nextptr=NULL;
printf("\n ENTERED ELEMENTS IN THE SLL ARE :\n");
ennode=&stnode;
while(ennode->nextptr!=NULL)
{
printf(" DATA = %d\n",ennode->num);
ennode=ennode->nextptr;
}

printf("\n");
printf(" TYPE THE ELEMENT TO BE SEARCHED : ");
scanf("%d",&FindElem);
FindPlc=FindElement(FindElem);
if(FindPlc<=n)
printf(" ELEMENT FOUND AT NODE %d \n\n",FindPlc);
else
printf(" ELEMENT DOES'NT EXISTS IN LINKED LIST.\n\n");
}

int FindElement(int FindElem)
{
int ctr=1;
ennode=&stnode;
while(ennode->nextptr!=NULL)
{
if(ennode->num==FindElem)
break;
else
ctr++;
ennode=ennode->nextptr;
}
return ctr;
}
