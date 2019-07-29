#include<iostream>
using namespace std;

int main(){
    int test_case;
    cin>>test_case;
    long long int n;
    double  sum,rm1;
    while(test_case-->0){
        cin>>n;
        sum=0;
        long long int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
        }
        rm1=(sum/n);
        int temp=0;
        for(int i=0;i<n;i++){
            if(rm1==((sum-arr[i])/(n-1))){
                cout<<i+1<<endl;
                temp=1;
                break;

            }
        }
        if(temp==0){
            cout<<"Impossible"<<endl;
        }

    }
    return 0;
}

