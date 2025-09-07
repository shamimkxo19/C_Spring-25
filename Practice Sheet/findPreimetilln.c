#include <stdio.h>

int main()
{
    int n, i, j, f;

    printf("\nEnter Value of n: ");
    scanf("%d", &n);

    for(i = 2; i <= n; i++)  // start from 2 to skip 1
    {
        f = 0;

        for(j = 2; j <= i / 2; j++)  // optimized inner loop
        {
            if(i % j == 0)
            {
                f = 1;
                break;
            }
        }

        if(f == 0)
            printf("\n%d is Prime", i);
    }

    return 0;
}
