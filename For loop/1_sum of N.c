
#include<stdio.h>

int main()
{
    int i, n, sum = 0;

    scanf("%d", &n);

    for( i = 0; i <= n ; i++)
    {
        printf("%d ", i);
        sum += i;
    }

    printf("Sum: %d", sum);
    return 0;
}

