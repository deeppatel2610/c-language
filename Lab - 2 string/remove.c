#include<string.h>
#include<stdio.h>
main()
{
    char a[100];
    printf("entre your name : ");
    gets(a);
    
    int i,j,n=strlen(a);
    
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='\0';
            }
        }
        if(a[i]!='\0')
        {
            printf("%c",a[i]);
        }
    }
}