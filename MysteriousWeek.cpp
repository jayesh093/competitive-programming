#include<iostream>
using namespace std;

int main(){

int test,Size,no;
cin>>test;

while(test>0){
cin>>Size>>no;
int arr[Size];
for(int i=0;i<Size;i++){
    cin>>arr[i];
}
int sum=no,i=0;
while(1)
{
    sum-=arr[i];
    if(sum==0){
        cout<<i+1;
        break;
    }
    i++;
    if(i==Size){i=0;}
}
test--;
}
return 0;
}
