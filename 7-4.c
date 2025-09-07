#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 4; i <= n; i += 4) {
        sum += i;
    }

    printf("The sum of numbers in the series 4, 8, 12, ... up to %d is: %d\n", n, sum);

    return 0;
}
