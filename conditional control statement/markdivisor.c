#include <stdio.h>

int main() {
    int mark, divisor;
    printf("Enter the mark: ");
    scanf("%d", &mark);
    if (mark >= 80) {
        printf("Divisor for the mark is 4");
    } else if (mark >= 70) {
        printf("Divisor for the mark is 3");
    } else if (mark >= 60) {
        printf("Divisor for the mark is 2");
    } else if (mark >= 50) {
        printf("Divisor for the mark is 1");
    } else {
        printf("Divisor for the mark is 0");
    }
    return 0;
}
