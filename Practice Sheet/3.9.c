#include <stdio.h>
int main ()
{
   float n,M_PI = 3.1416,res;
    printf("Enter any angle =");
    scanf("%f",&n);
    res = acos(n)*180/M_PI ;
    printf("The Value of cos_inverse(n) is %f",res);
    return 0;

}






