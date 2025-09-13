#include<stdio.h>

int main()
{
    int i, a;

    printf("Input: ");
    scanf("%d", &a);

    for(i = 1; i <= 10; i++ )
        printf("%d * %2d = %2d\n", a, i, a * i );

    return 0;
}
