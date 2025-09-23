#include<stdio.h>

int main()
{
    int n, temp, rem, sum = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    while(n > 0)
    {
        rem = n % 10;
        if( rem % 2 == 0)
            sum += rem;
        n /= 10;
    }

    printf("Sum of even digits: %d\n", sum);
    return 0;
}
