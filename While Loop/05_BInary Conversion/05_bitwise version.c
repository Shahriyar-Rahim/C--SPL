#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    unsigned int mask = 1 << 31;  // start with the leftmost bit (32-bit int)
    int started = 0;              // flag to skip leading zeros

    printf("Binary: ");
    for (int i = 0; i < 32; i++) {
        if (num & mask) {         // check if current bit is 1
            printf("1");
            started = 1;
        } else if (started) {     // print 0 only after first 1
            printf("0");
        }
        mask >>= 1;               // shift mask to right
    }

    if (!started)                 // special case for 0
        printf("0");

    printf("\n");
    return 0;
}

