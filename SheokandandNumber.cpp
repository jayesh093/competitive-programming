#include<iostream>
#include<math.h>
using namespace std;

int main()
{
int test,no,sum,temp;
int arr[10000];
double p;
cin>>test;
while(test>0)
{
    cin>>no;
    int k=0;
    for(int i=0;i<31;i++){
        for(int j=0;j<31;j++){
           if(i!=j){
            sum=pow(2,i)+pow(2,j);
            if(no>=sum){
               arr[k]=no-sum;
            }else{
            arr[k]=sum-no;
            }
            k++;
           }
           if(sum>=no){
            break;
           }
        }
    }
    int Size=k;
     for(int i=0;i<Size-1;i++){
        for(int j=i+1;j<Size;j++){
            if(arr[i] >=arr[j])
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
                }
            }
        }
     cout<<arr[0];

    test--;
    cout<<endl;
}
return 0 ;
}
