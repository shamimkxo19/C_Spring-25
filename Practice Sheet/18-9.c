#include <stdio.h>

void printMinimum(int a, int b, int c) {
    if (a <= b && a <= c) {
        printf("%d is minimum\n", a);
    }
    else if (b <= a && b <= c) {
        printf("%d is minimum\n", b);
    }
    else {
        printf("%d is minimum\n", c);
    }
}

int main() {
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printMinimum(a, b, c);
    return 0;
}