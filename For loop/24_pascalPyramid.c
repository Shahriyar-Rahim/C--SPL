#include<stdio.h>

int main()
{
    int i, j, k, a;

    printf("Input: ");
    scanf("%d", &a);

    for(i = 0; i < a; i++)
    {
        int num = 1;

        for(j = 0; j < a - i - 1; j++)
        {
            printf(" ");
        }

        for(j = 0; j <= i; j++)
        {
            printf("%d", num);
            if ( j < i) printf(" "); // space between numbers

            // Compute next number in row
            num = num * (i -j) / (j +1);
        }
        printf("\n");
    }


    return 0;
}
