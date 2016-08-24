#include<stdio.h>
#include<conio.h>
#define maxsize 5

void push();
void pop();
void peep();

int arr[maxsize];
int f=0,r=-1,item=0;

void main()
{
  int n;
  clrscr();
  printf("\n\t\t\t\t CIRCULAR QUEUE\n");
  printf("\t\n Press: ");
  printf("\n 1. For adding a value");
  printf("\n 2. To delete a value");
  printf("\n 3. To see all the values");
  printf("\n 4. Exit\n\t");
for(;;)
{
  printf("\n Choose your option\t");
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
    default: { printf("\n Invalid Selection");
	       getch();
	       exit(0);	}
  }

 }
}

void push()
{   int m;

    if(item==maxsize)
       printf("Queue Overflow");
    else
      {
	  printf("\nEnter the value\t");
	  scanf("%d",&m);
	  r++;
	  if(r>maxsize-1)
	    r=0;
	  arr[r]=m;
	  item++;

       }
}
void pop()
{
   if(item!=0)
  { printf("\nVALUE DELETED\t%d",arr[f]);

     if(f==maxsize-1)
       f=0;
     else
       f++;
   item--;

  }
   else
     printf("\n Queue Underflow");

}

void peep()
{  int i,j;

   if(r>f)
   {
    printf("\n Values are\t");
     for(i=f;i<=r;i++)
       printf("\n%d",arr[i]);
   }
   else
   {
     printf("\n Values are\t");
       for(i=f;f!=maxsize-1;f++)
	 printf("\n%d",arr[i]);
       for(j=0;j<=r;j++)
	 printf("\n%d",arr[j]);
   }
}
