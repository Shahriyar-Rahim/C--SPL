
#include<stdio.h>

int main()
{
    int i, n, s = 0;

    printf("Input: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        s += (i * i * i);
    printf("Sum of cubes: %d ", s);



    return 0;
}

