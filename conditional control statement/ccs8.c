#include <stdio.h>

int main() {
    int num = 15;

    if (num < 10) {
        printf("The number is less than 10.\n");
    }

    if (num >= 10 && num < 20) {
        printf("The number is between 10 and 19.\n");
    }

    if (num % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }

    if (num == 15) {
        printf("The number is 15.\n");
    }

    return 0;
}
