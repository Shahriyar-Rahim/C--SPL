#include<stdio.h>

int main()
{
    int b, e , r = 1;

    printf("Input: ");
    scanf("%d %d", &b, &e);

    for(int i = 1; i <= e; i++)
        r *= b;
    printf("%d ^ %d = %d", b, e, r);


    return 0;
}
