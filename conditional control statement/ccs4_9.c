#include <stdio.h>
#include <conio.h>
int main()
{
 int marks;
 printf("Enter Your Marks: ");
 scanf("%d",&marks);
 if(marks<0 || marks>100){
    printf("You have entered an Invalid Marks");
 }
else if(marks>=33){
    printf("You have Passed");
 }
 else{
    printf("You have failed");
 }
 return 0;

}

