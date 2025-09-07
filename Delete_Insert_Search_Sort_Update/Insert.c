#include <stdio.h>

int main()
{
    int a[20], n, pos, val;

    printf("Decide Total Array Indices upto 19: ");
    scanf("%d", &n);

    if (n >= 20)
    {
        printf("Error 404!");
        return 1;
    }

    printf("Enter %d Values:", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the Position you wanna insert new value (1-%d): ", n);
    scanf("%d", &pos);

    if (pos < 1 || pos > n + 1)
    {

        printf("Invalid position!");
        return 1;
    }

    pos--;

    printf("Enter The New Value to insert :");
    scanf("%d", &val);

    for (int i = n - 1; i >= pos; i--)
    {
        a[i + 1] = a[i];
    }

    a[pos] = val;

    printf("After inserting the value, the array is:\n");

    for (int i = 0; i < n + 1; i++)
    {

        printf("%-4d", a[i]);
    }

    printf("\n");

    return 0;
}
