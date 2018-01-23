#include <stdio.h>

int main() 
{
    int a;
    printf("enter the year");
    scanf("%d", &a);
    if(a<0)
        printf("Invalid input");
    else{
    if ((a % 400) == 0)
        printf("year is leap \n");
    else if ((a % 100) == 0)
        printf("year is not leap \n");
    else if ((a % 4) == 0)
        printf("year is leap \n");
    else
        printf("year is not leap \n");
    }

}
