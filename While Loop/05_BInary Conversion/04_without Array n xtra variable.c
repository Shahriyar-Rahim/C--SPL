#include <stdio.h>

void toBinary(int n) {
    if (n == 0)
        return;
    toBinary(n / 2);          // recursive call
    printf("%d", n % 2);      // print remainder
}

int main() {
    int num;
    scanf("%d", &num);

    printf("Binary: ");
    if (num == 0)
        printf("0");
    else
        toBinary(num);

    printf("\n");
    return 0;
}

