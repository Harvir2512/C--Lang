O#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
	char s1[50],s2[50];
	clrscr();
	printf("enter string :");
	gets(s1);
	printf("secound string :");
	gets(s2);

	strcat(s1,s2);

	printf("concatnation=%s",s1);
	getch();
}
