#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the 3 number");
scanf("%d%d%d",&a,&b,&c);
if(a<b && b>c)
{
	printf("%d",b);
}
else if(a<c && c>b)
{
	printf("%d",c);
}
else if(a>b && a>c)
{
	printf("%d",a);
	
}
else
{
	printf("you are take a wrong value");
}
	
}
