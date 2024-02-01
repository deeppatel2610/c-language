#include<stdio.h>
main()
{
    int x,y=1;
    printf("enter your value :");
    scanf("%d",&x);
    while(y<=x)
    {
        printf("%d",x);
        x--;
    }
}