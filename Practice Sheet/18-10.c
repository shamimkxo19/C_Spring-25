// Write a function that gets three numbers and returns medium.

#include <stdio.h>

void printMedium(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            printf("a medium");
        }
        else
        {
            if (b > c)
            {
                printf("b is medium");
            }
            else
            {
                printf("c medium");
            }
        }
    }

    else
    {
        if (a > c)
        {
            printf("a medium");
        }
        else
        {
            if (b < c)
            {
                printf("b medium");
            }
            else
            {
                printf("c is medium");
            }
        }
    }
}


int main()
{
    int a, b, c;
    printf("Enter three Numbers a, b, c :");
    scanf("%d %d %d", &a, &b, &c);
    printMedium(a, b, c);
}
