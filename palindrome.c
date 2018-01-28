#include<stdio.h>
#include<math.h>
int main(){
int n,m,i,d,sum=0,c=0;
printf("Enter the Number ");
scanf("%d",&n);

m=n;
while(n!=0){
    d=n%10;
    sum=(sum*10)+d;
    n=n/10;
    }
if(sum==m && m<=1000 && m>=0)
printf("Yes");
else
printf("No");
}
