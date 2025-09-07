#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = (num << 2) + num;
    printf("Result: %d\n", result);
    return 0;
}
