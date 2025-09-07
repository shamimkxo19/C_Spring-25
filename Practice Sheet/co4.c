#include <stdio.h>

int main() {
    int n=40, m=20;
    int o=20, p=30;
    if(m<n && m!=0){
        printf("&& Operator : Both conditions are true\n");
    }
    if(o>p || o!=0){
        printf("|| Operator : only conditions are true\n");
    }
    if(!(m<n && m!=0)){
        printf("! Operator : Both conditions are true\n");
    }
    else{
            printf("! Operator : Both conditions are true\nBut the status inverted as false\n");

    }


    return 0;
}






