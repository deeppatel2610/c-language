#include<stdio.h>
main()
{
    int n,i;
    printf("Enter your value of n : ");
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++)
    {
        printf("Enter your value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    int x;
    printf("\nEnter your index ");
    scanf("%d",&x);
    
    for(i=0;i<=x;i++)
    {
        if(i==x)
        {
            printf("entre your update value : ");
            scanf("%d",&a[i]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    
    int y;
    printf("\nEnter your index ");
    scanf("%d",&y);
    
    for(i=y;i<n;i++)
    {
        a[i]=a[i+1];
    }
    
    a[n-1]='\0';
    
    for(i=0;i<n-1;i++)
    {
        printf("%d ",a[i]);
    }
}