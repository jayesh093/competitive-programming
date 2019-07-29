#include<iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
int test,Size,temp;
cin>>test;
    while(test>0)
     {
        cin>>Size;
        int a[Size];
        int b[Size];
        for(int i=0;i<Size;i++)
        {
            cin>>a[i];
        }
        int i=0;
        int j=0;
        while(i<=(Size-1))
            {
                int k=Size-1;
                while(i<=k)
                {
                    if(a[i]>=a[k])
                    {
                        b[j]=k-i+1;
                        j++;
                        break;
                    }
                       k--;
                }

            i++;

        }
         for(int i=0;i<Size-1;i++){
        for(int j=i+1;j<Size;j++){
            if(b[i]<=b[j])
            {
                temp=b[j];
                b[j]=b[i];
                b[i]=temp;
                }
            }
        }
        cout<<b[0];
        cout<<endl;
        test--;
    }

 return 0;
}
