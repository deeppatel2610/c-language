#include<stdio.h>
main()
{
    int x,y=1,sum=1;
    printf("enter your value :");
    scanf("%d",&x);
    while(y<=10)
    {
        printf("%d x %d = %d\n",x,y,x*y);
        y++;
    }   
}