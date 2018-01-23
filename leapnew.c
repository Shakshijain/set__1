#include <stdio.h>

int main() 
{
    int y;
    printf("enter the year");
    scanf("%d", &y);
    if(y<0)
        printf("Invalid input");
    else{
    if ((y % 400) == 0)
        printf("year is leap \n");
    else if ((y % 100) == 0)
        printf("year is not leap \n");
    else if ((y % 4) == 0)
        printf("year is leap \n");
    else
        printf("year is not leap \n");
    }

}
