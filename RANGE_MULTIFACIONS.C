#include<stdio.h>
#include<conio.h>
void main()
{
  int a,b,i,j;
  clrscr();
  printf("enter number :");
  scanf("%d%d",&a,&b);
  for(i=a; i<=b; i++)
  {
    for(j=1; j<=10; j++)
    {
      printf("%d\n",i*j);
    }
  printf("\n");
  }
  getch();
}
