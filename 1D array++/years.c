#include<stdio.h>
main()
{
    int i,s,e,n,x=0;
    
    printf("enter stating :");
    scanf("%d",&s);
    printf("enter ending :");
    scanf("%d",&e);
    
    n=(e-s)/4+1;
    int a[n];
    
    for(i=s;i<=e;i++)
    {
        if(i%2==0)
        {
            a[x]=i;
            x++;
        }
    }
    
    for(i=0;i<x;i++)
    {
        printf("%d ",a[i]);
    }
}