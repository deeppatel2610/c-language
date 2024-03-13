#include<stdio.h>
#include<string.h>
main()
{ 
   char name[100];
   printf("Enter the value :  ");
   gets(name);
   int n=strlen(name);
   int i,j,x=1;
   for(i=0;i<n;i++)
    { 
       for(j=i+1;j<n;j++)
        {
            if(name[i]==name[j])
            {
                x++;
                name[j]=0;
            }
        }
        if(name[i]!='\0')
        {
            printf("%C -> %d \n ",name[i],x);
        }
        x=1;
    }
}