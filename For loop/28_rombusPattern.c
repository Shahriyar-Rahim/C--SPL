#include<stdio.h>

int main()
{
    int i, j, n;

    printf("Input: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {

        // leading spaces
        for(j = 1; j <= n - i; j++)
            printf(" ");

        // stars
        for(j = 1; j <= n; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}

