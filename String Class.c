#include<iostream>
#include<string.h>
int main()
{
    string arr;
    int i,k,flage=0;
    char arr1[1000];
    //gets(arr);
    getline (cin, arr);
    int len=strlen(arr);
    for(i=0;i<len;i++)
    {
        if(!(arr[i]==' '||arr[i]=='1'||arr[i]=='2'||arr[i]=='3'||arr[i]=='4'||arr[i]=='5'||arr[i]=='6'||arr[i]=='7'||arr[i]=='8'||arr[i]=='9'))
            flage=1;

    }
    if(flage==0)
    {
        cout<<"YES<<endl;
        for(i=0;i<len;i++)
        {
            printf("%c",arr[i]);
        }
    }
    else
    {
    k=0;
    for(i=0;i<len;i++)
    {
        if(arr[i]==' ')
        {
            arr1[k]='I';
            arr1[k+1]='I';
            arr1[k+2]='T';
            k=k+3;
        }
        else
        {
        arr1[k]=arr[i];
        k++;
        }
    }
    printf("NO \n");
    for(i=0;i<k;i++)
    {
        printf("%c",arr1[i]);
    }

    }

    return 0;
}
