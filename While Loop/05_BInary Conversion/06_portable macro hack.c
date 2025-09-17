#include <stdio.h>

#define PRINT_BINARY(num)                    \
    do {                                     \
        unsigned int n = (num);              \
        unsigned int mask = 1 << (31);       \
        int started = 0;                     \
        printf("Binary: ");                  \
        while (mask) {                       \
            if (n & mask) {                  \
                putchar('1');                \
                started = 1;                 \
            } else if (started) {            \
                putchar('0');                \
            }                                \
            mask >>= 1;                      \
        }                                    \
        if (!started) putchar('0');          \
        putchar('\n');                       \
    } while(0)

int main() {
    int num;
    scanf("%d", &num);

    PRINT_BINARY(num);  // neat usage like printf("%b", num);

    return 0;
}

