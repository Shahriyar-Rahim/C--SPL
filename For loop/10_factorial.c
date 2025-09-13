#include<stdio.h>

int main()
{
    int i, fact = 1, n;

    printf("Input: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        fact *= i;
    printf("Factorial of %d: %d", n, fact);

    return 0;
}
