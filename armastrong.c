#include<stdio.h>
#include<math.h>
void main()
{
	int i,a,b,m,n,c=0,sum=0,s;
	printf("Enter the intervals");
	scanf("%d%d",&m,&n);
	if(m<0||n<0)
	printf("Invalid interval numbers");
	else
	{
		for(i=m+1;i<n;i++)
		{
			a=i;
			b=i;
			while(a!=0)
			{
				c++;
				a/=10;
				
			}
			while(b!=0)
			{
				s=b%10;
				sum+=pow(s,c);
				b/=10;
			}
			if(sum==i)
			printf("%d\t",i);
			c=0;
			sum=0;
			
		}
	}
}
