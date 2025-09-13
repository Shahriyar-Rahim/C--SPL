#include<stdio.h>

int main()
{
    int i, j, k, n;

    printf("Input: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        //print spaces
        for(j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        //print stars
        for(k = 1; k <= i; k++)
        {
            printf("%d", i);
            if( k != i) printf(" ");
        }

        //new line move
        printf("\n");
    }

    return 0;
}
