#include<iostream>

using namespace std;

int main()
{
    int b;
    cin>>b;
    int a[b];
    for(int i=0;i<b;i++){
    cin>>a[i];
    }
    int temp;
    for(int i=0;i<b-1;i++){
        for(int j=i+1;j<b;j++){
            if(a[i]<=a[j])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(int i=0;i<b;i++){
        cout<<a[i]<<" ";
    }
    return 0 ;
}
