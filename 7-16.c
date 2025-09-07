#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 5, j = 6, k = 7, t = 1; t <= n; i++, j++, k++, t++) {
        sum += i * j * k;
    }

    printf("The sum of the series (5*6*7) + (6*7*8) + (7*8*9) + ... up to the %d-th term is: %d\n", n, sum);

    return 0;
}
