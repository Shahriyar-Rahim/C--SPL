#include<stdio.h>

int main()
{
    int i, j, n;

    printf("Input: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        //print spaces
        for(j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }

        //new line move
        printf("\n");
    }

    return 0;
}
