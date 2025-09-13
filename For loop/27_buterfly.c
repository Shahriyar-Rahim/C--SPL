#include<stdio.h>

int main()
{
    int i, j, n;

    printf("Input: ");
    scanf("%d", &n);

    // upper half
    for(i = 1; i <= n; i++)
    {
        // left stars
        for(j = 1; j <= i; j++)
            printf("*");

        // middle spaces
        for(j = 1; j <= 2*(n - i); j++)
            printf(" ");

        // right stars
        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    // lower half (mirror)
    for(i = n - 1; i >= 1; i--)
    {
        // left stars
        for(j = 1; j <= i; j++)
            printf("*");

        // middle spaces
        for(j = 1; j <= 2*(n - i); j++)
            printf(" ");

        // right stars
        for(j = 1; j <= i; j++)
            printf("*");

        printf("\n");
    }

    return 0;
}
