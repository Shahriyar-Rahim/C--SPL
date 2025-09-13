#include<stdio.h>

int main()
{
    int n, i, j;
    long long fact;

    scanf("%d", &n);

    printf("Factorials: ");
    for(i = 1; i <= n; i++)
    {
        fact = 1;
        for(j = 1; j <= i; j++)
        {
            fact *= j;
        }
        printf("%lld ", fact);
    }


    return 0;
}
