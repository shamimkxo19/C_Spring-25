#include <stdio.h>

int main() {
    int num1, num2, result;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    result = num1 & num2;

    printf("Bitwise AND of %d and %d is: %d\n", num1, num2, result);

    return 0;
}
