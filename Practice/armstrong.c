#include <stdio.h>

int main() {
    int num, n, rem, sum = 0;

    // Step 1: Read input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Step 2: Store original number
    n = num;

    // Step 3: Loop to calculate sum of cubes of digits
    while (n >= 1) {
        rem = n % 10;                  // Get last digit
        sum = sum + (rem * rem * rem); // Cube and add
        n = n / 10;                    // Remove last digit
    }

    // Step 4: Check if sum equals original number
    if (num == sum) {
        printf("Number is Armstrong\n");
    } else {
        printf("Number is not Armstrong\n");
    }

    return 0;
}
