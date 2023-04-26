#include<stdio.h>
#include<conio.h>
void main()
{
  clrscr();
  int x=2,y=3,z=4,xy;
  xy=(x*x)+(y*y)+(z*z)+(2*(x*y)+(y*z)+(z*x));
  printf("%d",xy);
  getch();
}