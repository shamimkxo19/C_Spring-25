#include<stdio.h>
int main()
{
 int a=5, b=-7, c=0, d;
 d = ++a && ++b || ++c;
 printf(" %d %d %d \n%d",a,b,c,d);


}
