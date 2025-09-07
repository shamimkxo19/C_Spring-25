#include <stdio.h>

int main() {
    int n, sum = 0;
    int m = 1;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 2, m = 1, t = 1; t <= n; i += 3, m += 2, t++) {
        sum += i * m;
    }

    printf("The sum of the series (2*1) + (5*3) + (8*5) + ... up to the %d-th term is: %d\n", n, sum);

    return 0;
}
