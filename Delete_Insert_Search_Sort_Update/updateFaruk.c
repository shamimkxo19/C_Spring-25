#include<stdio.h>
int main()
{
    int a[20],i,pos,val,n;
    printf("Enter array size: ");
    scanf("%d",&n); //5
    printf("Enter these values: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the position where you want to update: ");
    scanf("%d",&pos);//3
    printf("Enter new value: ");
    scanf("%d",&val);//75

    a[pos] = val; //update a[3]=75


    printf("After updating\n=================\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",a[i]); //2 4 75 19 25
    }
}


