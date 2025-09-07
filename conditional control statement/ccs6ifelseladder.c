

#include <stdio.h>
#include <conio.h>
int main()
{
    int num;
   printf("enter any number from 1 to 5 : ");
   scanf("%d",&num);
  if(num == 1) {
    printf("The number is one");
  }
  else if(num == 3){
    printf("The number is Three");
  } else if(num == 4){
    printf("The number is four");
  } else if(num == 5){
    printf("The number is five");
  }
  else{
    printf("the number you have entered is wrong\nPlease enter a correct number");
  }


}


