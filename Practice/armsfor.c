#include <stdio.h>

int main() {
    int num, n, rem, sum = 0;

    // Step 1: Read input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Step 2: Store original number
    for (n = num; n > 0; n = n / 10) {
        rem = n % 10;                      // Get last digit
        sum += (rem * rem * rem);         // Cube and add to sum
    }

    // Step 3: Compare and print result
    if (num == sum) {
        printf("Number is Armstrong\n");
    } else {
        printf("Number is not Armstrong\n");
    }

    return 0;
}
