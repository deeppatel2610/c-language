#include<stdio.h>
#include<string.h>
int main()
{
    char a[100]; 
    int i,digit=0;

    printf("Enter the string value : ");
    gets(a);
    int n = strlen(a);

    for(i=0;i<n;i++)  
    {
        if(a[i]>=48 && a[i]<=57)
        {
            digit++;
        }
    }
    if(digit==0)
    {
        printf("string is not numeric ");
    }
    else
    {
        printf("string is a numeric ");
    }
	
}