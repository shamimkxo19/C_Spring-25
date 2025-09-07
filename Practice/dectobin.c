#include <stdio.h>

int main() {
    int decimal;
    int octal[32];
    int i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0) {
        printf("Octal: 0\n");
        return 0;
    }

    for (; decimal > 0; decimal /= 8) {
        octal[i++] = decimal % 8;
    }

    printf("Octal: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", octal[j]);
    }
    printf("\n");

    return 0;
}