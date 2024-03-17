#include<stdio.h>
#include<string.h>
struct student
{
    int roll_n;
    char name[100];
    int c_marks;
    int m_marks;
    int p_marks;
    int sum;
    float ans;
};

main()
{
    int i,n;
    printf("total Students : ");
    scanf("%d",&n);
    
    struct student s[n];
    
    for(i=0;i<n;i++)
    {
        printf("Enter roll no : ");
        scanf("%d",&s[i].roll_n);
        
        printf("Enter name : ");
        scanf("%s",&s[i].name);
        
        printf("Enter Chemistry : ");
        scanf("%d",&s[i].c_marks);
        
        printf("Enter Mathematics : ");
        scanf("%d",&s[i].m_marks);
        
        printf("Enter Physics : ");
        scanf("%d",&s[i].p_marks);
        printf("\n");
        
        s[i].sum=s[i].c_marks+s[i].m_marks+s[i].p_marks;
        
        s[i].ans=s[i].sum/3;
    }
    
    for(i=0;i<n;i++)
    {
        printf("student name : %s - roll no. : %d\n",s[i].name,s[i].roll_n);
        printf("Chemistry marks : %d\n",s[i].c_marks);
        printf("Mathematics marks : %d\n",s[i].m_marks);
        printf("Physics marks : %d\n",s[i].p_marks);
        printf("Total marks : %d\n",s[i].sum);
        printf("Percent %.2f\n\n",s[i].ans);
    }
}