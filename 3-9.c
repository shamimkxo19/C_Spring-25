#include <stdio.h>
#include <math.h>
int main ()
{
   float n,res;
    printf("Enter any angle =");
    scanf("%f",&n);
    res = acos(n)*180/M_PI ;
    printf("The Value of cos_inverse(n) is %f",res);
    return 0;

}






