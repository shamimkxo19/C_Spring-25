#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 3) {
        sum += i;
    }

    printf("The sum of numbers in the series 2, 5, 8, 11, ... up to %d is: %d\n", n, sum);

    return 0;
}
