#include<stdio.h>

int main()
{
    int n, i, j;
    printf("Input: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        // leading spaces
        for(j = 1; j <= n - i; j++)
            printf(" ");

        // stars and spaces
        for(j = 1; j <= 2*i - 1; j++)
        {
            if(j == 1 || j == 2*i - 1 || i == n)  // borders or base
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}
