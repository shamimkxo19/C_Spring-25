
#include <stdio.h>
#include <math.h>
int main ()
{
   float n,res;
    printf("Enter the value of n =");
    scanf("%f",&n);
    res = asin(1.0/n)*180/M_PI ;
    printf("The Value of cosec_inverse(n) is %f",res);
    return 0;

}






