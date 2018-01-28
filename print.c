#include<stdio.h>
void main()
{
int ao,bo,i,j,c;
printf("enter the intervals");
scanf("%d%d",&ao,&bo);
printf("prime no. between %d and %d are:",ao,bo);
for(j=ao+1;j<bo;j++)
{
	c=0;
	for(i=2;i<=j/2;i++)
	{
	if((j%i)==0)
	{
		c++;
		break;
	}
	}
	if(c==0)	
		printf("%d ",j);			
		}
	}
