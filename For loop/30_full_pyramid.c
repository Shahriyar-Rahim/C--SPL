#include <stdio.h>

int main() {
    int n, i, j;
    printf("Input: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        // leading spaces
        for(j = 1; j <= n - i; j++)
            printf(" ");

        // ascending numbers
        for(j = 1; j <= i; j++)
            printf("%d ", j);

        // descending numbers
        for(j = i - 1; j >= 1; j--)
            printf("%d ", j);

        printf("\n");
    }

    return 0;
}
