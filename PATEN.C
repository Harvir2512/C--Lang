#include<stdio.h>
#include<conio.h>
void main()
{
  int i,j;
  char ch='A',ch1='a';
  clrscr();
  for(i=1; i<=4; i++);
  {
    ch='A';
    ch1='a';
    for(j=1; j<=i; j++)
    {
      printf("\n%c%c\t",ch,ch1);
      ch++;
      ch1++;
    }
    printf("\n");
  }
  getch();
}
