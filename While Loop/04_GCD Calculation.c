#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    while (b != 0) {
        int temp = b;
        b = a % b;  // remainder
        a = temp;
    }

    printf("GCD: %d\n", a);

    return 0;
}

