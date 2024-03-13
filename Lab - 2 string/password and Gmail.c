#include<stdio.h>
#include<string.h>
main()
{
    int i,check=0,k=0;
    char gmail[32],password [33];
    printf("Enter your gmail ID : ");
    gets(gmail);
    int n = strlen(gmail);
    
    for(i=0;i<n;i++)
    {
        if(gmail[i]==64)
        {
            break;
        }
        k++;
    }

    // length 
    if(n>=10)
    {
        for(i=0;i<n;i++)
        {
            // @
            if(gmail[i]==64)
            {
                check=1;
            }
        }
        if(check==1)
        {
            check=0;
            for(i=k+1;i<n;i++)
            {
                // gmail.com
                if(gmail[i]=='g')
                {
                    i++;
                    if(gmail[i]=='m')
                    {
                        i++;
                        if(gmail[i]=='a')
                        {
                            i++;
                            if(gmail[i]=='i')
                            {
                                i++;
                                if(gmail[i]=='l')
                                {
                                    i++;
                                    if(gmail[i]=='.')
                                    {
                                        i++;
                                       if(gmail[i]=='c')
                                        {
                                            i++;
                                            if(gmail[i]=='o')
                                            {
                                                i++;
                                                if(gmail[i]=='m')
                                                {
                                                    check=1;
                                                    break;
                                                }
                                            } 
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if(check==1)
            {
                check=0;
                for(i=0;i<n;i++)
                {
                    // small later and special characters
                    if( ( gmail[i] >= 97 && gmail[i] <=122 ) || ( gmail[i]==64 ) || ( gmail[i]==46 ) || (gmail[i] >= '0' && gmail[i] <= '9'))
                    {
                        check=1;
                    }
                }
                if(check==1)
                {
                    check=0;
                    printf("your gmail is right");
                    printf("\nEnter your gmail password : ");
                    gets(password);
                    n = strlen(password);
                    
                    // length
                    if(n>=8 && n<=32)
                    {
                        for(i=0;i<n;i++)
                        {
                            // digit
                            if(password[i] >= '0' && password[i] <= '9')
                            {
                                check=1;
                            }
                        }
                        if(check==1)
                        {
                            check=0;
                            for(i=0;i<n;i++)
                            {
                                // special changes 
                                if((password[i]>=33 && password[i]<=47) || (password[i]>=58 && password[i]<=64))
                                {
                                    check=1;
                                }
                            }
                            if(check==1)
                            {
                                for(i=0;i<n;i++)
                                {
                                    // small
                                    if(password[i] >= 97 && password[i] <=122)
                                    {
                                        check=1;
                                    }
                                }
                                if(check==1)
                                {
                                    check=0;
                                    for(i=0;i<n;i++)
                                    {
                                        // capital
                                        if(password[i] >= 65 && password[i] <=90)
                                        {
                                            check=1;
                                        }
                                    }
                                    if(check==1)
                                    {
                                        printf("your password is right");
                                    }
                                    else
                                    {
                                        printf("minimum 1 capital character !");
                                    }
                                }
                                else
                                {
                                    printf("minimum 1 small character !");
                                }
                            }
                            else
                            {
                                printf("minimum 1 special changes !");
                            }
                        }
                        else
                        {
                            printf("minimum 1 digit !");
                        }
                    }
                    else
                    {
                        printf("minimum length if 8 and maximum length of 32 !");
                    }
                }
                else
                {
                    printf("oil small later and not use special characters !");
                }
            }
            else
            {
                printf("pilis' enter gmail.com !");
            }
        }
        else
        {
            printf("meshing of @");
        }
    }
    else
    {
        printf("minimum length if 5 !");
    }
}