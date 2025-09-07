//Write a function that gets two positive integers and returns GCD (greatest common divisor).

#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter two positive integers: ");
    scanf("%d %d", &a, &b);

    int result = gcd(a, b);
    printf("The GCD of %d and %d is: %d\n", a, b, result);

    return 0;
}
