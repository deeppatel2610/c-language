#include<stdio.h>

int sum_of_arrey(int a[])
{
    int i,sum=0;
    
    for(i=0; a[i]!='\0'; i++)
    {
        sum=sum+a[i];
    }
    return sum; 
}

main()
{
    int n,i;
    printf("Enter your value of n : ");
    scanf("%d",&n);
    int a[n];
    
    for(i=0; i<n; i++)
    {
        printf("Enetr your value a[%d] : ",i);
        scanf("%d",&a[i]);
    }
    
    int sum = sum_of_arrey(a);
    printf("%d",sum);
}