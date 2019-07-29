#include<stdio.h>
#include<string.h>

int main()
{
    int len,i,j=0,flag=0;
    char s[100],t[100];
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        t[i]=s[i];
    }
   for(i=0;i<len;i++)
    {
        if(t[i]=='.')
        {
            t[i]='a';
        }
    }
    for(i=0;i<len;i++)
    {
        if(s[i]<=t[i])
        {

        }
        else
        {
            flag=1;
            printf("2");
            break;
        }
    }

    /*for(i=len-1;i>=0;i--)
    {
        s1[j]=s[i];
        j++;
    }
    */
    if(flag==0)
    {
        for(i=0;i<len;i++)
        {
        printf("%c",t[i]);
        }
    }
    else{
        printf("-1");
    }

    return 0;
}
