#include<stdio.h>
#include<conio.h>
void main()
{
char s;
clrscr();
printf("Enter any integer\n");
scanf("%d",&s);
printf("%c",s);
switch(s)
{ case 1:
printf("\n Diamond");
break;
case 2:
printf("\nSpade");
break;
default:
printf("\nSee above");
}
printf("\n I thought one wears a suite");
getch();}