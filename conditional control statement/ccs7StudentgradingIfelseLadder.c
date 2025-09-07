

#include <stdio.h>
#include <conio.h>
int main()
{
    int marks;
   printf("enter students marks : ");
   scanf("%d",&marks);
  if(0>marks || marks> 100) {
    printf("Invalid Marks");
  }
  else if(marks >=80 && marks <=100){
    printf("The grade is A+");
  } else if(marks >=70 && marks <=79){
    printf("The grade is A");
  } else if(marks >=60 && marks <=69){
    printf("The grade is A-");
  } else if(marks >=50 && marks <=59){
    printf("The grade is B");
  } else if(marks >=50 && marks <=59){
    printf("The grade is B");
  } else if(marks >=40 && marks <=49){
    printf("The grade is C");
  } else if(marks >=33 && marks <=39){
    printf("The grade is D");
  }
  else{
    printf("the grade is F");
  }


}



