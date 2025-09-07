#include <stdio.h>

int main()
{
    int a[50], num, rem = 0, i = 0;

    printf("Enter your Number: ");
    scanf("%d", &num);
    
    while (num > 0)
    {
        rem = num % 16;
        if (rem < 10)
        {
            a[i++] = rem + '0';
        }
        else
        {
            a[i++] = rem - 10 + 'A';
        }
        num = num / 16;  
    }

    printf("Hexadecimal: ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c", a[j]);  
    }

    return 0;
}
