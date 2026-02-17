#include<stdio.h>
#include<conio.h>
void main()
{
  float a,b,am,hm;
  clrscr();
  printf("enter number :");
  scanf("%f%f",&a,&b);

  am=a+b/2;
  hm=a*b/a+b;

  printf("arithmetic=%f",am);
  printf("\nharmonic=%f",hm);
  getch();
}
