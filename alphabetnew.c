#include<stdio.h>
int main()
{
	char n;
	printf("enter the character is alphabet or not");
	scanf("%c",&n);
	if(n>=65&&n<=90||n>=97&&n<=122)
	{
		printf("character is  alphabet");
		
	}
	else
	{
		printf("character is not aplhabet");
	}
}
