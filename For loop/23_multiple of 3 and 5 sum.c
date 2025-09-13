#include<stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("Input: ");
    scanf("%d", &n);

    for(i = 1; i < n; i++)
    {
        if(i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    printf("Sum of multiples: %d", sum);

    return 0;
}
