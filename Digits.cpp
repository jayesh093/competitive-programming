#include<stdio.h>
#include <string.h>
int main()
{
    int c1=0,c0=0,i,flag=0;
    char arr[100000];
    gets(arr);
    int len=strlen(arr);
    for(i=0;i<len;i++)
    {
        if(arr[i]=='1')
            c1++;
        else
            c0++;
    }
    if(c1>c0)
    {
        for(i=0;i<len;i++)
        {
            if(arr[i]=='0')
            {
                arr[i]='1';
                break;
            }

        }
    }
    else
    {
        for(i=0;i<len;i++)
        {
            if(arr[i]=='1')
            {
                arr[i]='0';
                break;
            }

        }
    }
    if(c1>c0)
    {
        for(i=0;i<len;i++)
        {
            if(arr[i]=='0')
            {
                flag++;
            }
        }
        if(flag==0)
        {
            printf("YES");
            return 0;
        }
        else
        {
            printf("NO");
            return 0;
        }

    }
    else
        for(i=0;i<len;i++)
        {
            if(arr[i]=='1')
            {
                flag++;
            }
        }
        if(flag==0)
        {
            printf("YES");
            return 0;
        }
        else
        {
            printf("NO");
           return 0;
        }

    return 0;
}
