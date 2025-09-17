#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    printf("Digits in reverse order: ");
    while (num > 0) {
        int digit = num % 10;  // get last digit
        printf("%d ", digit);
        num /= 10;             // remove last digit
    }
    printf("\n");

    return 0;
}

