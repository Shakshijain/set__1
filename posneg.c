#include<stdio.h>
int main()
{
	int a;
	printf("enter the number to check no is positive or negative");
	scanf("%d",&a);
	if(a>0)
	{
		printf(" no is poitive %d",a);
	}
	else if(a<0)
	{
		printf("no is negative %d",a);
	}
	else
	{
		printf("no is zero");
	}
}
