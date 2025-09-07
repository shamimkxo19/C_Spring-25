#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 2, j = 5, k = 8, t = 1; t <= n; i += 3, j += 3, k += 3, t++) {
        sum += i * j * k;
    }

    printf("The sum of the series (2*5*8) + (5*8*11) + (8*11*14) + ... up to the %d-th term is: %d\n", n, sum);

    return 0;
}
