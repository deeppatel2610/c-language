#include<stdio.h>
#include<string.h>
main()
{
    int i,n,j;
    char name[20];
    printf("enter your name :");
    gets(name);
    n=strlen(name);
    
    if(name[0]>=97 && name[0]<=122)
    {
        name[0]-=32;
    }
    
    for(i=0,j=0;i<n,j<n;i++,j++)
    {
        if(name[i]==32)
        {
            i++;
            if(name[i]>=97 && name[i]<=122)
            {
                name[i]-=32;
            }
        }
    }
    puts(name);
}