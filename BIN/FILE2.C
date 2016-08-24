#include<stdio.h>
#include "file1.c"
extern int x,y,z;
main()
{
  clrscr();
  func1();
  printf("%d %d %d\n",x,y,z);
  func2();

  getch();
}