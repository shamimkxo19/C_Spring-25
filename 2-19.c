// Write a program that read a number and mod by 4 using bitwise AND.

#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int result = num & 3;
    printf("Result: %d\n", result);
    return 0;
}
