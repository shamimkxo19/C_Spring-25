#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1, j = 2, k = 3, t = 1; t <= n; i++, j++, k++, t++) {
        sum += i * j * k;
    }

    printf("The sum of the series (1*2*3) + (2*3*4) + (3*4*5) + ... up to the %d-th term is: %d\n", n, sum);

    return 0;
}
