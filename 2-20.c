#include <stdio.h>
int main ()
{
    int num,res;
    printf("Enter any number =");
    scanf("%d",&num);
    res = num&7;
    printf("The Mod is %d",res);
    return 0;

}
