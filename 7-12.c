#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1, m = 2, t = 1; t <= n; i++, m++, t++) {
        sum += (i*i) * (m * m);
    }

    printf("The sum of the series (1^2*2^2) + (2^2*3^2) + (3^2*4^2) + ... up to the %d-th term is: %d\n", n, sum);

    return 0;
}
