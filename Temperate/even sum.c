#include<stdio.h>
main()
{
    int n,i,sum;
    printf("enter your value n :");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
        }
    }
    printf("%d",sum);
}