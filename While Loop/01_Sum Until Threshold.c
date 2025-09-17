#include<stdio.h>

int main()
{
    int num, sum = 0;

    while(sum <= 100)
    {
        scanf("%d", &num);
        sum += num;
    }

    printf("%d", sum);

    return 0;
}
