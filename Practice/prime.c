#include <stdio.h>

int main()
{
    int num, flag = 1;

    scanf("%d", &num);

    if(num<=1){
          flag = 0;
    }

    else{
        for(int i= 2; i<num; i++){
            if(num%i == 0){
                flag = 0;
                break;
            }
        }
    }

    if(flag){
        printf("prime");
    }
    else{
        printf("not prime");
    }
}
