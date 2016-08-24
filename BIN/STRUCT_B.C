#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
   struct name
   {
     char first[20];
     char last[20];
   };
   struct book
   {
      struct name name;
      int pages;
      float price;
   };
   struct book b1;
   clrscr();

   printf("\nEnter the first name\t");
   scanf("%s",&b1.name.first);

   printf("\nEnter the last name\t");
   scanf("%s",&b1.name.last);

   printf("\nEnter the number of pages\t");
   scanf("%d",&b1.pages);

   printf("\nEnter the price of the book\t");
   scanf("%f",&b1.price);
   printf("\n\n\n Your entered informations are:\n\n");
   printf("Name of the book:  %s %s",b1.name.first,b1.name.last);
   printf("\nNumber of pages:  %d",b1.pages);
   printf("\nPrice of the book:  %2f",b1.price);

 getch();
}
