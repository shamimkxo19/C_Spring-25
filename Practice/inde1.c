#include <stdio.h>

int main()
{
    int a = 5, b = 8, c = 3, d;

    
    d = a-- + ++b - --c + b-- + ++a - --b;

    
    printf("d = %d, a = %d, b = %d, c = %d\n", d, a, b, c);

    return 0;
}
