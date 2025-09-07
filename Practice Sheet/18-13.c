//Write a function that gets any positive integer and returns digital root.

#include <stdio.h>

void digital_root(int n) {
    for (; n >= 10; ) {
        int sum = 0;
        for (; n > 0; n /= 10) {
            sum += n % 10;
        }
        n = sum;
    }
    printf("The digital root is: %d\n", n);
}

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    digital_root(number);

    return 0;
}
