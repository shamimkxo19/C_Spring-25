
#include <stdio.h>
#include <conio.h>
int main()
{
    int num1,num2,num3;
   printf("enter three numbers: ");
   scanf("%d %d %d",&num1, &num2, &num3);
   if(num1<num2){
            if(num1<num3){
                printf("%d is the smallest number", num1);
            }
            else{
                printf("%d is the smallest number", num3);
            }
   }
   else{
            if(num2<num3){
                printf("%d is the smallest number", num2);
            }
            else{
                printf("%d is the smallest number", num3);
            }
   }

}


