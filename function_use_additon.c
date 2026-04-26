#include<stdio.h>
void add(int a,int b)
{
	int c;
	c=a+b;
	printf("addition=%d",c);
}
void main()
{
	int a,b;
	printf("enter a value:");
	scanf("%d",&a);
	printf("enter b value");
	scanf("%d",&b);
	add(a,b);
}
