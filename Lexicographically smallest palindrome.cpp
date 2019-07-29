#include<stdio.h>
#include<string.h>
string constructPalin(string str, int len)
{
    int i = 0, j = len - 1;
    for (; i < j; i++, j--) {
    if (str[i] == str[j] && str[i] != '*')
            continue;
        else if (str[i] == str[j] && str[i] == '.') {
            str[i] = 'a';
            str[j] = 'a';
            continue;
        }


        else if (str[i] == '.') {
            str[i] = str[j];
            continue;
        }

        else if (str[j] == '*') {
            str[j] = str[i];
            continue;
        }

    return "-1";
    }
    return str;
}

// driver program
int main()
{
    char str[100];
    gets(str);
    int len = str.size();
    int i;
    if(constructPalin(str, len)=="-1")
    {
        printf("-1");
    }
    else{
        for(i=0;i<len;i++)
        {
            if(str[i]=='.')
            {
                printf("a");
            }
            else
            {
                printf("%c",str[i]);
            }
        }
    }
    return 0;
}


/*
#include<stdio.h>
#include<string.h>

int main()
{
    int len,i,flag=0;
    char s[100],s1[100];
    gets(s);
    len=strlen(s);
   for(i=0;i<len;i++)
    {
        if(s[i]=='.')
        {
            s[i]='a';
        }
    }


    for(i=len-1;i>=0;i--)
    {
        s1[i]=s[i];
    }

    if(strcmp(s1,s)==0)
    {
        for(i=0;i<len;i++)
        {
            printf("%c",s[i]);
        }
    }
    else{
        printf("-1");
    }
    return 0;
}
*/
