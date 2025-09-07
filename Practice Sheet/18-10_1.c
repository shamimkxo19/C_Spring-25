#include <stdio.h>

void printMedium(int a, int b, int c)
{
    if ((a >= b && a <= c) || (a <= b && a >= c)) {
        printf("%d is medium\n", a);
    }
    else if ((b >= a && b <= c) || (b <= a && b >= c)) {
        printf("%d is medium\n", b);
    }
    else {
        printf("%d is medium\n", c);
    }
}

int main()
{
    int a, b, c;
    printf("Enter three numbers a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    printMedium(a, b, c);
    return 0;
}