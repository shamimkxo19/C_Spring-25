#include <stdio.h>

void printMaximum(int a, int b, int c)
{
    if (a >= b && a >= c) {
        printf("%d is maximum\n", a);
    }
    else if (b >= a && b >= c) {
        printf("%d is maximum\n", b);
    }
    else {
        printf("%d is maximum\n", c);
    }
}

int main()
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printMaximum(a, b, c);
    return 0;
}