
#include <stdio.h>
#include <conio.h>
int main()
{
    int num1;
    printf("enter any even number: ");
    scanf("%d", &num1);
    if (num1 % 2 == 0)
    {

        printf("%d is divisible by two\n", num1);
    }
    if (num1 % 6 == 0)
    {
        printf("%d is divisible by six", num1);
    }
    if (num1 % 2 != 0)
    {
        printf("%d is not divisible by two\n", num1);
    }
    if(num1 % 6 != 0){
        printf("%d is not divisible by six", num1);
    }

    return 0;
}
