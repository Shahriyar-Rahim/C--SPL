#include <stdio.h>

// A helper function to find the minimum of two integers
int min(int a, int b) {
    return (a < b) ? a : b;
}

/**
 * @brief Prints a centered number square that is perfectly symmetric for any n.
 * The grid size is (2*n - 1) x (2*n - 1).
 * @param n The number at the center and edges.
 */
void printSymmetricPattern(int n) {
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return;
    }

    // The total size of the square grid will be (2*n - 1)
    int size = 2 * n - 1;
    int i, j; // Loop counters

    // Outer loop for rows
    for (i = 0; i < size; i++) {
        // Inner loop for columns
        for (j = 0; j < size; j++) {
            // Calculate the shortest distance to a vertical edge
            int dist_to_vertical_edge = min(i, size - 1 - i);

            // Calculate the shortest distance to a horizontal edge
            int dist_to_horizontal_edge = min(j, size - 1 - j);

            // The shortest distance to ANY edge is the minimum of the two
            int min_dist_to_any_edge = min(dist_to_vertical_edge, dist_to_horizontal_edge);

            // The value to print is n minus this minimum distance
            int value = n - min_dist_to_any_edge;

            printf("%d ", value);
        }
        // Move to the next line after each row
        printf("\n");
    }
}

int main() {
    int num;

    printf("Enter any positive number: ");

    if (scanf("%d", &num) == 1) {
        printf("\nSymmetric Pattern:\n");
        printSymmetricPattern(num);
    } else {
        printf("Invalid input. Please enter an integer.\n");
    }

    return 0;
}
