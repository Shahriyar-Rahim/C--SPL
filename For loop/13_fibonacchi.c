#include<stdio.h>

int main()
{
    int i, a = 0, b = 1, n, next;

    printf("Input: ");
    scanf("%d", &n);

    printf("Fibonacci sequence: ");
    for(i = 1; i <= n; i++)
    {
        if(n != 0)
            printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }



    return 0;
}
