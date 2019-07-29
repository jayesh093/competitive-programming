#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t-->0){
        long long int n,i,m=0;
        cin>>n;
        char arr[100005];
        cin>>arr;
        for(i=0;i<n;i++){
            if(arr[i]=='1'){
                m++;
            }
        }
        cout<<m*(m+1)/2<<endl;
    }
    return 0;
}
