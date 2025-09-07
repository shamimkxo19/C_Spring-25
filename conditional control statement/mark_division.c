#include <stdio.h>
int main()
{
    int mark;
    printf("enter your mark:");
    scanf("%d", &mark);
    if (mark >= 60 && mark <= 100)
    {
        printf("1st division\n");
    }
    else if (mark >= 45 && mark <= 59)
    {
        printf("2nd division\n");
    }
    else if (mark >= 33 && mark <= 44)
    {
        printf("3rd division\n");
    }
    else
    {
        printf("fail\n");
    }
}