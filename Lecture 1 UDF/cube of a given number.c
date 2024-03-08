#include<stdio.h>

int cube(int n)
{
    int ans=1;
    ans=n*n*n;
    return ans;
}

main()
{
    int n;
    printf("Enter your value : ");
    scanf("%d",&n);
    int x = cube(n);
    printf("%d",x);
}