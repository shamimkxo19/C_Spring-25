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
    printf("Enter the position where you want to insert: ");
    scanf("%d",&pos);//4
    printf("Enter position's value: ");
    scanf("%d",&val);//40

    for(i=n;i>=pos;i--) //3>=4
    {
        a[i+1]=a[i];//a[6]= 25 a[5]=19
    }
    a[pos]=val; //a[4]= 40
    printf("After inserting, the output is: \n");
    for(i=1;i<=n+1;i++){
        printf("%d ",a[i]);
    }



    return 0;
}
