#include<iostream>
using namespace std;

int partition(int arr[],int l,int r){
  int pivot=arr[l];
  int i=l;
  int j=r+1;

  while(i<j){
  do{
    i++;
  }while(arr[i]<=pivot);
  do{
    j--;
  }while(arr[j]>pivot);

  if(i<j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
    }
  }
  int temp=arr[l];
    arr[l]=arr[j];
    arr[j]=temp;

  return j;
}

void QuickSort(int arr[],int l,int r){
    if(l<r){
        int pi=partition(arr,l,r);
        QuickSort(arr,l,pi-1);
        QuickSort(arr,pi+1,r);
    }
}

void printArry(int arr[],int no){
    for(int i=0;i<no;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int no;
    cout<<"Enter the size of Array"<<endl;
    cin>>no;
    int arr[no];
    cout<<"Enter the array elements"<<endl;
    for(int i=0;i<no;i++){
        cin>>arr[i];
    }
    cout<<"before Sorting:"<<endl;
    printArry(arr,no);

    QuickSort(arr,0,no-1);

    cout<<endl;
    cout<<"After Sorting:"<<endl;
    printArry(arr,no);
}
