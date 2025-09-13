#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        // print leading spaces
        for(j = 1; j <= n - i; j++)
            printf(" ");

        int num = i;

        // increasing numbers
        for(j = 1; j <= i; j++) {
            printf("%d", num);
            if(j != i || i != 1) printf(" "); // space after number except last in row
            num++;
        }

        // decreasing numbers
        num -= 2;
        for(j = 1; j <= i - 1; j++) {
            printf("%d", num);
            if(j != i - 1) printf(" ");
            num--;
        }

        printf("\n");
    }

    return 0;
}
