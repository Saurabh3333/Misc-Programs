#include<stdio.h>
#include<conio.h>

void main()
{
   int i,j,k=4,m,n;
   clrscr();
   for(i=1;i<=5;i++)
   {
     for(j=1;j<=k;j++)
     {
       printf(" ");
     }
     k--;
   for(m=1;m<=i;m++)
   {
     if((i+m)%2==0)
    { printf("*");
     printf(" ");}
     else
    { printf("A");
      printf(" "); }
    }
    printf("\n");
   }
   getch();

}