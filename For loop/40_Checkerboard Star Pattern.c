#include <stdio.h>

int main() {
    int size;

    // Get input from the user for the number of rows.
    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &size);

    // Outer loop for the rows
    for (int i = 0; i < size; i++) {
        // The condition i % 2 == 0 checks if the row is even or odd.
        if (i % 2 == 0) {
            // For even rows, print the pattern with a leading star.
            printf("* * *");
        } else {
            // For odd rows, print the pattern with a leading space.
            printf(" * * *");
        }
        // Move to the next line after each row is complete.
        printf("\n");
    }

    return 0;
}
