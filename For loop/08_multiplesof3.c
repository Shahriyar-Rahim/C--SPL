#include<stdio.h>

int main()
{
    int i, count = 0, n;

    printf("Input: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        if(i % 3 == 0)
            count++;
    printf("Multiples of 3: %d", count);


    return 0;
}
