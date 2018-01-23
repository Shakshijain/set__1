#include<stdio.h>
int main()
{
	char no;
	printf("Enter the character is alphabet or not");
	scanf("%c",&no);
	if(no>=65&&no<=90||no>=97&&no<=122)
	{
		printf("character is  alphabet");
		
	}
	else
	{
		printf("character is not aplhabet");
	}
}
