#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    long int x,y,k,n,diff;
    long int pi,ci;
    while(t-->0){
        cin>>x>>y>>k>>n;
        diff=x-y;
        int flag=0;
        for(int i=0;i<n;i++){
            cin>>pi;
            cin>>ci;
            if(pi>=diff && ci<=k){
                flag=1;
            }
        }
        if(flag==1)
        cout<<"LuckyChef"<<endl;
        else
        cout<<"UnluckyChef"<<endl;
    }
    return 0;
}
