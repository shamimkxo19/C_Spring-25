
#include <stdio.h>
#include <math.h>
int main ()
{
   float n,res;
    printf("Enter any value to find the angle =");
    scanf("%f",&n);
    res = atan(n)*180/M_PI ;
    printf("The Value of tan_inverse(n) is %f",res);
    return 0;

}





