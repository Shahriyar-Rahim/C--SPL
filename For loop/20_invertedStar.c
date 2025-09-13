
#include<stdio.h>

int main()
{
    int i, j, k, n;

    printf("Input: ");
    scanf("%d", &n);

    for(i = n; i >= 1; i--)
    {
        //print spaces
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        //print stars
        for(k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }

        //new line move
        printf("\n");
    }

    return 0;
}
