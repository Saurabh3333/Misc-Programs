#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

stuct node
{ int info;
  struct node *link;
};

struct node *start=NULL;
struct node *cur;
struct node *old;

void main()
{ int x;
  struct node *temp;
  char='y';
  while(op!='n')
  {
    clrscr();
    printf("\n\n     ENTER INT  :");
    scanf("%d",&x);
    cur=(struct node *)malloc(size of struct node));
    cur->info=x;
    if(start==NULL)
      {
	start cur;
	old=cur;
      }
      else
      {
	old->link=cur;
	old=cur;
      }
      printf("%d%d%d        Continue ? (y/n)  :");
      op=getch();
     }
     clrscr();
     temp=start;
     while(temp!=NULL)
     { printf("\n %d",temp->info);
       temp=temp->link;
      }
      getch();
 }

