#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    // upper half
    for(i = 1; i <= n; i++) {
        // leading spaces
        for(j = 1; j <= n - i; j++)
            printf(" ");
        // stars and inner spaces
        for(j = 1; j <= 2*i - 1; j++) {
            if(j == 1 || j == 2*i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    // lower half
    for(i = n-1; i >= 1; i--) {
        // leading spaces
        for(j = 1; j <= n - i; j++)
            printf(" ");
        // stars and inner spaces
        for(j = 1; j <= 2*i - 1; j++) {
            if(j == 1 || j == 2*i - 1)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}

