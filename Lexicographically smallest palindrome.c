#include<stdio.h>
#include<string.h>
char * constructPalin(char str[], int len)
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

int main()
{
    char str[100];
    gets(str);
    int len = strlen(str);
    int i;
    if(constructPalin(&str, len)=="-1")
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

