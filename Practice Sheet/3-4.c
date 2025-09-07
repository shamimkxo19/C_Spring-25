#include <stdio.h>
#include <math.h>
int main ()
{
   float theta,res;
    printf("Enter any angle =");
    scanf("%f",&theta);
    res = tan(theta*M_PI/180) ;
    printf("The Value of tan(theta) is %f",res);
    return 0;

}




