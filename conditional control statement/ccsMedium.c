#include <stdio.h>

int main() {
    float num1, num2, num3, medium;

    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    printf("Enter the third number: ");
    scanf("%f", &num3);

    if((num1 >= num2 && num1 <= num3) || (num1 <= num2 && num1 >= num3)){
        printf("The medium is the first Number");
    }
    else if ((num2 >= num1 && num2 <= num3) || (num2 <= num1 && num2 >= num3)){
        printf("The medium is the second Number");}
    else{
       printf("The medium is the third Number");
       }


    return 0;
}
