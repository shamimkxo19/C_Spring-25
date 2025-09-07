#include <stdio.h>
int main ()
{
   float theta,M_PI = 3.1416,res;
    printf("Enter any angle =");
    scanf("%f",&theta);
    res = tan(theta*M_PI/180) ;
    printf("The Value of tan(theta) is %f",res);
    return 0;

}




