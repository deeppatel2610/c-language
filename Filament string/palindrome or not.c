#include<stdio.h>
#include<string.h>
main()
{
    char a[100],b[100];
    printf("Enter the string value : ");
    gets(a);
    int i,j=0,length=0,
    count=0;
    for(i=0;a[i]!='\0';i++)
    {
        length++;
    }
    for(i=length-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<length;i++)
    {
        if(a[i]!=b[i])
        {
            count=1;
            break;
        }
    }
    if(count==1)
    {
        printf("it is not a palindrom ");
    }
    else
    {
        printf("it is a palindrom ");
    }
}