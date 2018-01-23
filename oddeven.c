#include<stdio.h>
int main()
{
	int i;
	printf("enter a number ");
	scanf("%d",&i);
	if(i>=1 && i<=100000)
	{
	if(i%2==0)
	printf("even number");
	else
	printf("odd number");
	}
	else
	printf("you have choose out of range input");
}
