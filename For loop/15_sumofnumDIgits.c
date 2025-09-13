#include<stdio.h>

int main()
{
    int a, sum = 0;

    printf("Input: ");
    scanf("%d", &a);

    for(; a != 0; a /= 10)
        sum += a % 10;
    printf("The sum of digits: %d", sum);


    return 0;
}

