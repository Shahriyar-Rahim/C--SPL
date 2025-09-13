#include<stdio.h>

int main()
{
    int a, r, n, sum = 0, i, term;
    scanf("%d %d %d", &a, &r, &n);

    //a,a⋅r,a⋅r2,…

    term = a;
    for(i = 1; i <= n; i++)
    {
        sum += term;
        term *= r;
    }

    printf("Sum: %d\n", sum);
    return 0;
}
