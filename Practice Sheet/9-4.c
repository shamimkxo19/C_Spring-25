#include <stdio.h>

int main (){
    int n = 4;
    int rem = 0;
    int a[50];
    int i = 0;

    for( ; n > 0; n = n/2){

        a[i++] = n%2;
    }

    for (int j = i - 1; j >=0; j--){
        printf("%d", a[j]);
    }

    return 0;
}