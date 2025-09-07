#include <stdio.h>
#include <math.h>

int main() {
    float x, res;
    
    printf("Enter a positive number: ");
    scanf("%f", &x);
    
    if (x <= 0) {
        printf("Error: Logarithm is only defined for positive numbers.\n");
    } else {
        res = log(x);
        printf("Natural logarithm (ln) of %.6f is %.6f\n", x, res);
    }
    
    return 0;
}
