#include<stdio.h>

int main()
{
    int i, a, sum = 0;

    printf("Input: ");
    scanf("%d", &a);

    for(i = 1; i<=a; i++)
        if(i % 2 == 0)
        sum += i;
    printf("The sum of even numbers: %d", sum);


    return 0;
}
