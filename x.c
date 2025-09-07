#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float discriminant, root1, root2;

    printf("Enter the coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2*a);
        root2 = (-b - sqrt(discriminant)) / (2*a);
        printf("Roots are real and distinct.\n");
        printf("Root1 = %.2f and Root2 = %.2f\n", root1, root2);
    }
    else if (discriminant == 0) {
        root1 = root2 = -b / (2*a);
        printf("Roots are real and equal.\n");
        printf("Root1 = Root2 = %.2f\n", root1);
    }
    else {
        float realPart = -b / (2*a);
        float imaginaryPart = sqrt(-discriminant) / (2*a);
        printf("Roots are complex and distinct.\n");
        printf("Root1 = %.2f + %.2fi and Root2 = %.2f - %.2fi\n", realPart, imaginaryPart, realPart, imaginaryPart);
    }

    return 0;
}
