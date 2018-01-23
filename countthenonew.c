#include <stdio.h>

int main() 
{
    int n,d,count=0;
    printf("enter the number");
    scanf("%d",&n);
    while(n!=0)
    {
    	count=count+1;	
    n=n/10;
	
	}
	printf("%d",count);
}
