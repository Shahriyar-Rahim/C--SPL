
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    unsigned int mask = 1;
    // move mask to the highest set bit
    while (mask <= (unsigned int)num)
        mask <<= 1;
    mask >>= 1;

    printf("Binary: ");
    while (mask > 0) {
        if (num & mask)
            printf("1");
        else
            printf("0");
        mask >>= 1;
    }

    printf("\n");
    return 0;
}
