#include <stdio.h>

int main() {
    char n;
    printf("Enter a lowercase character: ");
    scanf(" %c", &n);
    printf("The uppercase character is: %c\n", n - 32);
    return 0;
}
