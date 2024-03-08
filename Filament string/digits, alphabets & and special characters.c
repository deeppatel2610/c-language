#include<stdio.h>
#include<string.h>
int main()
{


    char a[100]; 
    int i,alpha=0,digit=0,spc=0;
    
    printf("Enter the string value : ");
    gets(a);
    int n=strlen(a);

    for(i=0;i<n;i++)  
    {
        if((a[i]>=65 && a[i]<=90) || (a[i]>=97 && a[i]<=122) )
        {
            alpha++;
        }
        else if(a[i]>=48 && a[i]<=57)
        {
            digit++;
        }
        else
        {
            spc++;
	    }
    }
    printf("Alphabets = %d\n",alpha);
    printf("Digits = %d\n",digit);
    printf("Special characters = %d",spc);
    
}