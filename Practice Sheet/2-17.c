#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = num << 1;
    printf("Result: %d\n", result);
    return 0;
}
