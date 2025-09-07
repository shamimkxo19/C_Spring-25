#include <stdio.h>
#include <math.h>
int main ()
{
   float theta,res;
    printf("Enter any angle =");
    scanf("%f",&theta);
    res = sin(theta*M_PI/180) ;
    printf("The Value of Sin(theta) is %f",res);
    return 0;

}

