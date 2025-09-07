#include <stdio.h>

int main() {
    int num, onesComplement;

    printf("Enter an integer: ");
    scanf("%d", &num);

    onesComplement = ~num;

    printf("One's complement of %d is %d\n", num, onesComplement);

    return 0;
}

