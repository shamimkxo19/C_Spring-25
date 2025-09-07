//Write a function that gets any positive integer and returns its digit sum.

#include <stdio.h>

void digitSum(int n) {
    
        int sum = 0;
        for (; n > 0; n /= 10) {
            sum += n % 10;
        }
        printf("Digit sum is: %d", sum);
    }
    

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    digitSum(number);

    return 0;
}
