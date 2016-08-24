#include<stdio.h>
#include<conio.h>
#define maxsize 5
void push();
void pop();
void peep();

int arr[maxsize];
int r=-1;
int q=0;

void main()
{ int n;
   clrscr();
  printf("\t\t\t\t Queue \n\n\n");
  printf("\nChoose among any of the following options::\n");
  printf("\n1. For inserting any integer value");
  printf("\n2. Deleting any vlaue");
  printf("\n3. For seeing the enteries");
  printf("\n4. Exit\n");
 for(;;)
{
  printf("\n\nYour selection::\t");
  scanf("%d",&n);
  switch(n)
  {
  case 1: push();
      break;
  case 2: pop();
      break;
  case 3: peep();
     break;
  case 4: exit(0);
      break;
  default: printf("\nInvalid Selection");
  }
}

}

void push()
{
   int p;
   printf("\n Enter the value\t");
   if(r<(maxsize-1))
      {
	r++;
	scanf("%d",&p);
	arr[r]=p;
	printf("\nValue entered");
      }
      else
      printf("\n Queue is already full");

}
void pop()
{
  if(q<=r)
  {
  printf("\n Valude deleted::\t%d",arr[q]);
  q++;
  }
  else
  printf("\nStack is already empty");
}
void peep()
{
    int i;
    if(q==(r+1))
    printf("\nStack is empty");
    else
    {
    printf("\n Values in the queue::");
    for(i=q;i<=r;i++)
      {
      printf("\n %d",arr[i]);
      }
    }
}
