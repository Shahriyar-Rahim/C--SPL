#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    scanf("%d", &num);

    // store remainders (binary digits) in reverse order
    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("Binary: ");
    // print in reverse
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}
