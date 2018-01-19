#include<stdio.h>
#include<string.h>
int main()
{
 int l,i;
 char a[20];


 
 printf("enter the string\n");
 gets(a);
 
 l=strlen(a);
 if(l<=100000)
 {
 
 printf("reverse string is\n");
 for(i=l-1;i>=0;i--)
 {
 	printf("%c",a[i]);
	 }	
}
  else
  {
  	printf("string length is greater than 100000");
}
}
