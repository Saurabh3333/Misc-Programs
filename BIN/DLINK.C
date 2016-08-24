#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    struct node * prev;
    int info;
    struct node * next;

};
struct node * start;

void dinsert(int x)
{
   struct node * temp1;
   struct node * temp2;
   struct node * cur;
   cur=(struct node *)malloc(sizeof(struct node));
   cur->info=x;
   cur->prev=NULL;
   cur->next=NULL;
   if(start==NULL)
     {
      start=cur;
       return;
     }
   if(start->info>x)
    {
      start->prev=cur;
      cur->next=start;
      start=cur;
      return;
    }

    temp1=start;

    while(temp1->info<=x && temp1!=NULL)
    {   temp2=temp1;
	temp1=temp1->next;
    }
   if(temp1==NULL && temp2->info<=x)
     {
       cur->prev=temp2;
       temp2->next=cur;
       return;
     }
   else
     {
       cur->next=temp2->next;
       cur->prev=temp2;
       temp1->prev=cur;
       temp2->next=cur;
     }

}

void dview()
{
  struct node * temp;
  temp=start;
  clrscr();
  while(temp!=NULL)
     {
       printf("\n   %d ",temp->info);
       temp=temp->next;
     }
     getch();
}

void main()
{
   start=NULL;
   dinsert(40);
   dinsert(20);
   dinsert(80);
   dinsert(70);
   dinsert(40);
   dinsert(20);
   dinsert(80);
   dinsert(70);
   dview();
}