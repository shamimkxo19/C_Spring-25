#include <stdio.h>
#include <math.h>

int main() {
    float x, result;

    printf("Enter the number: ");
    scanf("%f", &x);
    result = expf(x);
    printf("e to the power of %.2f is: %.2f\n", x, result);
    return 0;
}
