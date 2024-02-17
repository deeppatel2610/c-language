#include<stdio.h>
main()
{
    int n,i,j;
    printf("Enter your value of n :");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter a[%d] :",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0;i<n;i++)
    {
        for(j=1;j<=10;j++)
        {
            printf("%d x %d = %d\n",a[i],j,a[i]*j);
        }
        printf("\n");
    }
}