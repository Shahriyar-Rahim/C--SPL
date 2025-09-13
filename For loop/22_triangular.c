#include<stdio.h>

int main()
{
    int a ,i, triangular = 0;

    printf("Input: ");
    scanf("%d", &a);

    for(i = 1; i <= a; i++)
    {
        triangular += i;
        printf("%d ", triangular);
    }

    return 0;
}

