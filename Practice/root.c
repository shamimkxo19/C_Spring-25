#include <stdio.h>

int main()
{
    int num, sum;
    printf("Enter Your Number :");
    scanf("%d", &num);


while(num>=10){
    sum = 0;
    while(num>0){
        sum += num%10;

        num = num/10;

    
    }

    num = sum;
}
  printf("Root %d", num);  
    
}
