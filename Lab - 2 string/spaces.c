#include<stdio.h>
#include<string.h>
main()
{
    char a[100];
    printf("Enter : ");
    gets(a);
    int i,n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]==32)
        {
            continue;
        }
        printf("%c",a[i]);
    }
}