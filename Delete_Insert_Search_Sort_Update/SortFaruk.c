#include<stdio.h>
int main()
{
    int a[20],n,i,j,temp;

    printf("Enter array size: ");
    scanf("%d",&n);//7
    printf("Enter array value: ");
    for(i=1;i<=n;i++) //Take 7 value
    {
        scanf("%d",&a[i]);
    }

    for(i=1;i<n;i++)//pass 6,s0 i<7
    {
        for(j=1;j<=n-i;j++)
        {
            if(a[j]>a[j+1])//68 27
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp; //27 68

            }
        }

    }
    for(i=1;i<=n;i++) //Take 7 value
    {
        printf("%d ",a[i]);
    }
}
