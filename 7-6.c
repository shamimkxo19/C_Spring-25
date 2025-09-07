#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        sum += i * (i + 1);
    }

    printf("The sum of the series (1*2) + (2*3) + (3*4) + ... + (%d*%d) is: %d\n", n, n + 1, sum);

    return 0;
}
