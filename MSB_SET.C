#include<stdio.h>
#include<conio.h>
void main()
{
  int num,mask
  clrscr();
  printf("enter number :");
  scanf("%d",&num);
  if(num & mask)
  {
  printf("mbs set=%d",num);
  }
  else
  {
   printf("mbs not set=%d",num);
   }
   getch();

}
