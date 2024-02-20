#include<stdio.h>
main()
{
    int n,i,j,check=0;
    printf("Enter your value n :");
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++)
    {
        printf("enter your value a[%d] :",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]>a[j])
            {
                check=a[j];
                a[j]=a[i];
                a[i]=check;
            }
        }
    }
    
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}