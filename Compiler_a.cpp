#include <iostream>
#include <cstdio>
#include<string>
using namespace std;
int main()
{
    cout<<"case 1: enter String is a+"<<endl;
    cout<<"case 2: enter String is a*"<<endl;
    cout<<"case 3: enter String is a*b*"<<endl;
    int n;
    int c=0;
    cin>>n;
    string str;
        switch(n){
    case 1:

        for(int i=0;i<str.length();i++){
            if(str[i]!='a'){
                c=1;
            }
        }
        if(c==1){
            cout<<"False"<<endl;
        }else{
            cout<<"True"<<endl;
        }
        break;
    case 2:
        cout<<"hello"<<endl;
        break;
    case 3:
        cout<<"hello"<<endl;
        break;
    default:
                cout<<"hello"<<endl;
        break;
    }
    return 0;
}
