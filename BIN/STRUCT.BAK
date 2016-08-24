#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 struct dob{
   int date;
   int month;
   int year;
   };

  struct admission
  { int ledger;
    char name[50];
    char location[10];
    struct dob date;
    };

  struct admission a;
  clrscr();

   a.ledger=9097;
   a.date.date=12;
   a.date.month=12;
   a.date.year=1997;
   strcpy(a.name,"Saurabh shubham");
   strcpy(a.location,"Patna");

  printf("\nLedger No.: %d",a.ledger);
  printf("\nName: %s",a.name);
  printf("\nLocation: %s",a.location);
  printf("\nDOB: %d-%d-%d",a.date.date,a.date.month,a.date.year);

    getch();
}
