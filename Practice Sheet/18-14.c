// Write a function that gets any positive integer and returns its reverse.

#include <stdio.h>

int reverse(int n) {
    int reversed = 0;
    while (n > 0) {
        int last_digit = n % 10;  // Get the last digit
        reversed = reversed * 10 + last_digit;  // Add it to the reversed number
        n = n / 10;  // Remove the last digit from the original number
    }
    return reversed;
}

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    int result = reverse(number);
    printf("The reverse of %d is: %d\n", number, result);

    return 0;
}
