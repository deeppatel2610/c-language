#include<stdio.h>
main()
{
    int n,j,i,check=0;
    printf("enter your value of n : ");
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++)
    {
        printf("enter your value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                check=a[i];
                a[i]=a[j];
                a[j]=check; 
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}