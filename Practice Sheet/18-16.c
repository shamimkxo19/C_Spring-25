#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    int result_gcd = gcd(a, b);
    int result_lcm = lcm(a, b);

    printf("The GCD of %d and %d is: %d\n", a, b, result_gcd);
    printf("The LCM of %d and %d is: %d\n", a, b, result_lcm);

    return 0;
}
