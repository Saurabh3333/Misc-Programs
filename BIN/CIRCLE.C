#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
    float a,b,r,x,y,t;
    a=0.0;
    b=0.0;
    clrscr();
   printf("\nEnter the radius\t");
   scanf("%f",&r);

   for(x=-r;x<=r;x=x+0.1)
   {

     t=(r*r)-((x-a)*(x-a));
   y=pow(t,0.5)+b;
    gotoxy(x,y);
    printf(".");
   }

   getch();
}