#include <stdio.h>
#include <math.h>
int main ()
{
   float theta,res;
    printf("Enter any angle =");
    scanf("%f",&theta);
    res = 1.0/tan(theta*M_PI/180) ;
    printf("The Value of cot(theta) is %f",res);
    return 0;

}




