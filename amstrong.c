#include<stdio.h>
#include<conio.h>
void main()
{
 int d,sum=0,num,num1;
 clrscr();
 printf("enter number :");
 scanf("%d",&num);
 num1=num;
 while(num > 0)
 {
   d=num%10;
   sum=sum+(d*d*d);
   num=num/10;
 }
 if(num1==sum)
 {
   printf("amstrong");
 }
 else
 {
  printf("not amstrong");
 }
 getch();
}
