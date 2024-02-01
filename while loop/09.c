#include<stdio.h>
main()
{
    int x,y=1,sum=1;
    printf("enter your value :");
    scanf("%d",&x);
    while(y<=x)
    {
        sum=sum*y;
        y++;
    }
    printf("%d",sum);
}