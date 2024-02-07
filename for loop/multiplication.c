#include<stdio.h>
main()
{
    int x,n;
    printf("enter your value :");
    scanf("%d",&n);
    for(x=1;x<=10;x++)
    {
        printf("%d x %d = %d\n",n,x,x*n);
    }
}