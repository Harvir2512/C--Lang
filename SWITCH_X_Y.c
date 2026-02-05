#include<stdio.h>
#include<conio.h>
void main()
{
 int x,y,ch;
 float r,a,c,v;
 clrscr();
 printf("press 1:equality ");
 printf("\npress 2:less than ");
 printf("\npress 3:quotient and remainder ");
 printf("\nenter your choice :");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
  {
    printf("enter value of x and y :");
    scanf("%d %d",&x,
    &y);
    if(x==y)
    printf("x is equal to y ");
    else
    printf("x is not equalo to y");
    break;
    }
    case 2:
    {
     printf("enter value of x and y");
     scanf("%d%d",&x,&y);
     if(x<y)
      printf("x is less than y");
      else
      printf("x is not less than y");
      break;
      }
      case 3:

      {
       printf("enter value of x and y ");
       scanf("%d%d",&x,&y);
       printf("q=%d",x/y);
       printf("r=%d",x%y);
       break;
       }
     }
     getch();
  }



