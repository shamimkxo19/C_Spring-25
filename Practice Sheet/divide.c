//Write a function that gets any positive integer and returns digital root.

#include <stdio.h>



int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    int res = number/10;
     printf("%d",res);


    return 0;
}
