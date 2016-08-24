#include<stdio.h>
#include<stdlib.h>
#define maxsize 5
void push();
void pop();
void peep();

int arr[maxsize];
int r=-1;
void main()
{
   int n;

   clrscr();
   printf("\n Press::::\n 1. For Adding value\n 2. For deleting value\n 3. For Seeing the values\n 4. Exit\n\t");
for(;;)
{ printf("\n\n\nEnter your option\t");
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
    default: printf("!!!!!!!!!!\tWrong Entery\t!!!!!!!!!!");
   }
 }
}

void push()
{
   int p;

   if((r<maxsize-1))
   {
     printf("\nEnter the value\t");
     scanf("%d",&p);
     r++;
     arr[r]=p;
     printf("Your value is entered");
   }
   else
     { printf("Stack is already full");

     }


}
void pop()
{
    printf("Value deketed::\t%d",arr[r]);
    r--;
}
void peep()
{
    int i;
  if(r==-1)
    { printf("\n \tStack is empty");  }
  else
   {  printf("\n Values in stack");
    for(i=0;i<=r;i++)
    {
     printf("\t\n%d",arr[i]);
    }
   }
}
