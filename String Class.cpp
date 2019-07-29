#include<iostream>
#include<string>
using namespace std;
int main()
{
    string arr,arr1;
    int i,k,flage=0;
    getline (cin, arr);
    int len=arr.length();
    for(i=0;i<len;i++)
    {
        if(!(arr[i]==' '||arr[i]=='1'||arr[i]=='2'||arr[i]=='3'||arr[i]=='4'||arr[i]=='5'||arr[i]=='6'||arr[i]=='7'||arr[i]=='8'||arr[i]=='9'))
            flage=1;

    }
    if(flage==0)
    {
        cout<<"YES"<<endl;
        for(i=0;i<len;i++)
        {
            cout<<arr[i];
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
    cout<<"NO"<<endl;
    for(i=0;i<k;i++)
    {
        cout<<arr1[i];
    }

    }

    return 0;
}
