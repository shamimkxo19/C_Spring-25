#include <stdio.h>

int main() {
    int number, digit, thousand, hundred, ten, one;

    printf("Enter a number (1-3999): ");
    scanf("%d", &number);

    if (number <= 0 || number > 3999) {
        printf("Invalid number. Please enter a number between 1 and 3999.\n");
        return 1;
    }

    thousand = number / 1000;
    hundred = (number % 1000) / 100;
    ten = (number % 100) / 10;
    one = number % 10;

    for (int i = 0; i < thousand; i++) {
        printf("M");
    }

    switch (hundred) {
        case 9: printf("CM"); break;
        case 4: printf("CD"); break;
        default:
            for (int i = 0; i < hundred; i++) {
                printf("C");
            }
            break;
    }

    switch (ten) {
        case 9: printf("XC"); break;
        case 4: printf("XL"); break;
        default:
            for (int i = 0; i < ten; i++) {
                printf("X");
            }
            if (one >= 5) {
                printf("V");
            }
            break;
    }

    switch (one) {
        case 9: printf("IX"); break;
        case 4: printf("IV"); break;
        default:
            for (int i = 0; i < one % 5; i++) {
                printf("I");
            }
            if (one >= 5) {
                printf("I");
            }
            break;
    }

    printf("\n");
    return 0;
}
