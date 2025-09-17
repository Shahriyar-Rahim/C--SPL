
#include <stdio.h>

int main() {
    int num, binary = 0, place = 1;

    scanf("%d", &num);

    while (num > 0) {
        int digit = num % 2;        // remainder
        binary = binary + digit * place;
        place *= 10;                // increase place value
        num /= 2;                   // divide by 2
    }

    printf("Binary: %d\n", binary);

    return 0;
}
