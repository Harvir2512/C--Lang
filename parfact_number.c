#include<stdio.h>
void main()
{
	int i,sum=0,num,num1;
	printf("enter number :");
	scanf("%d",&num);
	num1=num;
	for(i=1; i<num; i++)
	{
		if(num%i==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num1)
	{
		printf("parfact number");
	}
	else
	{
		printf("not parfcat number");
	}
}
