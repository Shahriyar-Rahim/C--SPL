#include <stdio.h>

int main() {
    int K, N, i;
    scanf("%d %d", &K, &N);

    printf("Multiples: ");
    for(i = 1; i <= N; i++) {
        printf("%d ", K * i);
    }
    printf("\n");

    return 0;
}
