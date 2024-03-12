#include<stdio.h>
main()
{
    int i,j,n,temp,k;
    printf("Enter your value : ");
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++)
    {
        printf("Enter your value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
    printf("enter your value k : ");
    scanf("%d",&k);
    
    for(i=1;i<=k;i++)
    {
        temp=a[n-1];
        for(j=n;j>0;j--)
        {
            a[j]=a[j-1];
        }
        a[0]=temp;
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}