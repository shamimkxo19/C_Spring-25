#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1, j = 3, k = 5, l = 7, t = 1; t <= n; i += 2, j += 2, k += 2, l += 2, t++) {
        sum += i * j * k * l;
    }

    printf("The sum of the series (1*3*5*7) + (3*5*7*9) + (5*7*9*11) + ... up to the %d-th term is: %d\n", n, sum);

    return 0;
}
