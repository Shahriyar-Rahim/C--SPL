#include<stdio.h>

int main()
{
    int n, i = 2, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1)
        isPrime = 0; // 0 and 1 are not prime
    else
    {
        while(i * i <= n) // only check up to sqrt(n)
        {
            if(n % i == 0)
            {
                isPrime = 0; // divisible, so not prime
                break;
            }
            i++;
        }
    }

    if (isPrime)
        printf("%d is a Prime number.\n", n);
    else
        printf("%d is not a Prime number.\n", n);


    return 0;
}
