#include<stdio.h>
main()
{
    int n,i,max=1;
    printf("Enter your value of n : ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter your value of a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    
    for(i=0;i<n;i++)
    {
        if(max<=a[i])
        {
            a[i]='\0';
            break;
        }
    }
    
    max=0;
    
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    
    printf("%d",max);
}