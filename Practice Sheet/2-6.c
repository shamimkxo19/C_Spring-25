#include <stdio.h>

int main() {
    int num1, num2, remainder;

    printf("Enter the first integer: ");
    scanf("%d", &num1);
    printf("Enter the second integer: ");
    scanf("%d", &num2);

    remainder = num1 % num2;

    printf("Remainder = %d\n", remainder);

    return 0;
}

