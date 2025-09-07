#include<stdio.h>
int main()
{
    int a[20],i,search,loc,flag=0,n;
    printf("Enter array size: ");
    scanf("%d",&n); //5
    printf("Enter these values: ");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter which value you want to search: ");
    scanf("%d",&search);

    for(i=1;i<=n;i++)
    {
        if(search==a[i]){ //19==
            flag=1; //flag=1;
            loc=i;//loc=4
            break;
        }
    }
    if(flag==1)//
        printf("%d is found at location %d\n",search,loc);
    else
        printf("%d is not found\n",search);
    return 0;
}

