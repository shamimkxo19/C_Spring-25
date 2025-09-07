#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,d,x,y;
    printf("Enter three number a,b,c: ");
    scanf ("%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d<0)
    {
        printf("Roots are imaginary.");
    }
    else if (d>0)
    {
        x=(-b+sqrt(d))/(2*a);
        y=(-b-sqrt(d))/(2*a);
        printf("x=%.2f",x);
        printf("y=%.2f",y);
    }
    else
    {
        x=y=-b/(2*a);
        printf("x=y=%.2f",x,y);
    }
    return 0;
}
