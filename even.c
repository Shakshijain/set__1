#include<stdio.h>

int main(){
int n,m,i;
printf("Enter the Number range ");
scanf("%d%d",&n,&m);
if(n<=0 && m<=0)
{
	printf("invalid");
}
else
{
	

for(i=n+1;i<m;i++)
{
	if(i%2==0)
printf("%d\n",i);
}

}
}
