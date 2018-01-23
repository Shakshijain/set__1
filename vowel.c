#include<stdio.h>
int main()
{
	char no;
	printf("Enter the character is vowel or consonant");
	scanf("%c",&no);
	if(no=='a'||no=='e'||no=='i'||no=='o'||no=='u'||no=='A'||no=='E'||no=='I'||no=='O'||no=='U')
	{
		printf("character is vowel");
		
	}
	else
	{
		printf("character is consonant");
	}
}
