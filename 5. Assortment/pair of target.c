#include<stdio.h>
main()
{
    int n,i,t,j;
    printf("enter your target value : ");
    scanf("%d",&t);
    printf("enter your arrey size :");
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++)
    {
        printf("enter your pair value of a[%d] : ",i);//arrey value
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(t==a[i]+a[j])
            {
                printf("your pair index (%d %d)\n",i,j);
                printf("and your pair value %d %d\n",a[i],a[j]);
            }
        }
    }
}