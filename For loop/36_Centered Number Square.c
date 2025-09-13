#include <stdio.h>
#include <stdlib.h> // Required for the abs() function

/**
 * @brief Prints a square pattern of size n x n based on the
 * Manhattan distance from the center.
 * @param n The size of the square. This pattern looks best with odd numbers.
 */
void printManhattanPattern(int n) {
    // For this pattern, a single center point only exists if n is odd.
    if (n <= 0) {
        printf("Please enter a positive number.\n");
        return;
    }
    if (n % 2 == 0) {
        printf("Warning: This pattern is best viewed with an odd size (e.g., 3, 5, 7).\n");
    }

    // Calculate the coordinate of the center (using 0-based indexing)
    // For n=3, center is 1. For n=5, center is 2.
    int center = (n - 1) / 2;
    int i, j;

    // Outer loop for rows
    for (i = 0; i < n; i++) {
        // Inner loop for columns
        for (j = 0; j < n; j++) {
            // Calculate the row distance and column distance from the center
            int row_dist = abs(i - center);
            int col_dist = abs(j - center);

            // The value is the sum of these distances (Manhattan distance) + 1
            int value = row_dist + col_dist + 1;

            printf("%d ", value);
        }
        // Newline after each row is complete
        printf("\n");
    }
}

int main() {
    int num;

    printf("Enter a number (e.g., 3): ");

    // Check if the input is a valid integer
    if (scanf("%d", &num) == 1) {
        printf("\nPattern:\n");
        printManhattanPattern(num);
    } else {
        printf("Invalid input. Please enter an integer.\n");
    }

    return 0;
}
