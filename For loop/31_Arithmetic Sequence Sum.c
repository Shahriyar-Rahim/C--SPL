#include<stdio.h>

int main()
{
    int a, d, n, sum = 0, i, term;
    scanf("%d %d %d", &a, &d, &n);

    //SN​=N/2​[2a+(N−1)d]

    term = a;
    for(i = 1; i <= n; i++)
    {
        sum += term;
        term += d;
    }

    printf("Sum: %d", sum);
    return 0;
}
