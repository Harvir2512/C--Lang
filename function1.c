#include<stdio.h>
void harvir(int a,int b)
{
	int c;
	c=a+b;
	printf("addition=%d",c);
}
void main()
{
	int a,b;
	printf("enter first number :");
	scanf("%d",&a);
	printf("enter second number :");
	scanf("%d",&b);
	harvir(a,b);
}
