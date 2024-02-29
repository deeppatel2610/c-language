#include<stdio.h>
main()
{
    int n,i,j,count=0;
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
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[i]='\0';
                count++;
            }
        }
    }
    
    printf("%d",count);
    
}