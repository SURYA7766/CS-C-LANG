#include<stdio.h>
int main()
{
struct student
{
int roll_num;
char name[70];
int fee;
char DOB[60];
};
struct student stu[50];
int a,b;
printf("\n ENTER THE NUMBER OF STUDENTS");
scanf("%d",&a);
for(b=0;b<a;b++)
{
printf("\n ENTER THE ROLL NUMBER");
scanf("%d",&stu[b].roll_num);
printf("\n ENTER THE NAME");
scanf("%s",&stu[b].name);
printf("\n ENTER THE FEE");
scanf("%d",&stu[b].fee);
printf("\n ENTER THE DOB");
scanf("%s",&stu[b].DOB);
}
for(b=0;b<a;b++)
{
printf("\n DETAILES OF THE STUDENT YOU HAVE ASKED FOR %d",b+1);
printf("\n ROLL NO = %d",stu[b].roll_num);
printf("\n NAME = %s",stu[b].name);
printf("\n FEE = %d",stu[b].fee);
printf("\n DOB = %s",stu[b].DOB);
}
}

