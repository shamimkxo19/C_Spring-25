#include <stdio.h>

int main() {
    int n, sum = 0;
    int m = 3;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1, m = 3, t = 1; t <= n; i += 2, m += 2, t++) {
        sum += i * m;
    }

    printf("The sum of the series (1*3) + (3*5) + (5*7) + ... up to the %d-th term is: %d\n", n, sum);

    return 0;
}
