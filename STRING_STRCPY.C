#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s1[50],s2[100];
    clrscr();
    printf("enter string :");
    gets(s1);
    printf("orijnal string=%s",s1);
    strcpy(s2,s1);

    printf("\ncopy string=%s",s2);
    getch();

}
