#include <stdio.h>
void main()
{
    int n, a, result = 1;

    printf("Enter a base number: ");
    scanf("%d", &n);

    printf("Enter an exponent: ");
    scanf("%d", &a);

    while (a != 0)
    {
        result *= n;
        --a;
    }

    printf("Answer = %d", result);


}
