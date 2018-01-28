#include<stdio.h>
#include<math.h>
int main(){
int n,b,i,a,d,sum=0,c=0;
printf("Enter the Number ");
scanf("%d",&n);
a=n;
b=n;
while(a!=0){
    a=a/10;
    c+=1;
    }
while(n!=0){
    d=n%10;
    sum=sum+pow(d,c);
    n=n/10;
    }
if(b==sum && b<=100000 && b>=0)
printf("Yes");
else
printf("No");
}
