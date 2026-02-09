#include<stdio.h>
#include<conio.h>
void main()
{
  int rev=0,rem=0,num=0,num1=0;
  clrscr();
  printf("enter number :");
  scanf("%d",&num);
  num1=num;
  while(num>0)
  {
    rem=num%10;
    rev=rev*10+rem;
    num=num/10;
  }
  if(num1==rev)
  {
    printf("paloidream number ");
  }
  else
  {
    printf("not palidream numbeer");
  }
  getch();
}
