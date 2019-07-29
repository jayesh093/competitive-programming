#include<iostream>
using namespace std;

int main()
{
    int test,no,arr[100],Coutnt;
    cin>>test;
    while(test>0){
    cin>>no;
    for(int i=0;i<no;i++){
        cin>>arr[i];
    }

    int j=no-1;
    Coutnt=0;
    for(int i=1;i<(no/2)+1;i++){
            if(!(arr[i]==arr[i-1] or arr[i]==(arr[i-1]+1)))
            Coutnt++;
    }

    for(int i=0;i<no/2;i++)
        {
        if(arr[i]!=arr[j])
           {
            Coutnt++;
        }
        j--;
    }
    if(Coutnt==0){
        cout<<"yes";
    }else{
    cout<<"no";
    }
test--;
}
    return 0;
}
