#include<stdio.h>

int main(){
int n,i,flag=1;
printf("Enter the Number ");
scanf("%d",&n);
if(n>=1000 && n<=0)
{
	printf("invalid");
}
else
{
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	printf("yes");
	else
	printf("no");
}
}

