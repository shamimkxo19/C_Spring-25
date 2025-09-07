#include <stdio.h>
int main()
{
    int a[8], countEven = 0, countOdd = 0;
    printf("Enter array values : ");
    for(int i = 1; i<=8; i++){
        scanf("%d", &a[i]);

        if(a[i]%2 == 0){
            countEven++;
        }

    else{
        countOdd++;
    }
    }
    printf("Even : %d\n", countEven);
    printf("odd : %d\n", countOdd);
}