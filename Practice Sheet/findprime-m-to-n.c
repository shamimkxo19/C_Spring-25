#include <stdio.h>

int main()
{
    int m, n, i, j, f;

    printf("Enter starting value (m): ");
    scanf("%d", &m);

    printf("Enter ending value (n): ");
    scanf("%d", &n);

    for (i = m; i <= n; i++)
    {

        f = 0;

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                f = 1;
                break;
            }
        }

        if (f == 0)
            printf("\n%d is Prime", i);
    }

    return 0;
}
