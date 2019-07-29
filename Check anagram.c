#include<stdio.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int no1,no2;
     int i,j;
     char c;
    scanf("%s",s1);
    scanf("%s",s2);
    no1=strlen(s1);
    no2=strlen(s2);
    if(no1==no2)
    {
       for(i=0;i<no1;i++)
       {
           for(j=i;j<no2;j++)
           {
            if(s1[i]==s2[j])
            {
                c=s2[j];
                s2[j]=s2[i];
                s2[i]=c;
            }
           }
       }
       if(strcmp(s1,s2)==0)
       {
           printf("YES");
       }
       else
       {
           printf("NO");
       }
    }
    else
    {
        printf("No");
    }
 return 0;
}
