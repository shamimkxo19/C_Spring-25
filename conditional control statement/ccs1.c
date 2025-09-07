#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
   printf("enter the number: ");
   scanf("%d",&num);
   if(num<0){
    printf("This is a negative number");
   }
   if(num>0){
    printf("This is a positive number");
   }
    if(num==0){
    printf("This is zero");
   }
}
