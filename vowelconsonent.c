#include<stdio.h>
int main()
{
	char n;
	printf("Enter the character is vowel or consonant");
	scanf("%c",&n);
	if(n=='a'||n=='e'||n=='i'||n=='o'||n=='u'||n=='A'||n=='E'||n=='I'||n=='O'||n=='U')
	{
		printf("character is vowel");
		
	}
	else
	{
		printf("character is consonant");
	}
}
