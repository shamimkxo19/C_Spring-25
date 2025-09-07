#include <stdio.h>

int main() {
    int a[3][4] = {
        {0, 1, 2, 3},
        {4, 5, 6, 7},
        {8, 9, 10, 11}
    };

    int row, col;

    // Ask user for row and column
    printf("Enter row index (0-2): ");
    scanf("%d", &row);

    printf("Enter column index (0-3): ");
    scanf("%d", &col);

    // Check if indices are within bounds
    if (row >= 0 && row < 3 && col >= 0 && col < 4) {
        printf("Value at a[%d][%d] is %d\n", row, col, a[row][col]);
    } else {
        printf("Invalid indices! Please enter row between 0-2 and column between 0-3.\n");
    }

    return 0;
}
