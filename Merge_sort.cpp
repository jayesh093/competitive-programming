#include<iostream>
using namespace std;

void Merge(int arr[],int l,int m,int r){
   int L1=m-l+1;
   int R1=r-m;

   int L[L1];
   int R[R1];

   for(int i=0;i<L1;i++){
    L[i]=arr[l+i];
   }
   for(int i=0;i<L1;i++){
    R[i]=arr[m+1+i];
   }
   int i=0;
   int j=0;
   int k=l;
   while(i<L1 && j<R1){
    if(L[i]<=R[j]){
        arr[k]=L[i];
        i++;
    }else{
        arr[k]=R[j];
        j++;
    }
    k++;
   }
   while(i<L1){
    arr[k]=L[i];
    i++;
    k++;
   }
    while(j<R1){
    arr[k]=R[j];
    j++;
    k++;
   }
}

void MergeSort(int arr[],int l,int r){
    if(l<r){
        int middel=(l+r)/2;
        MergeSort(arr,l,middel);
        MergeSort(arr,middel+1,r);

        Merge(arr,l,middel,r);
    }
}
void printArray(int A[], int size)
{
    int i;
    for (i=0; i < size; i++)
    {
        cout<<A[i]<<" ";
    }
}

int main(){

 int a;
 cout<<"Enter the size of array"<<endl;
 cin>>a;
 int arr[a];
 for(int i=0;i<a;i++){
    cin>>arr[i];
 }
    cout<<"Given array is "<<endl;
    printArray(arr,a);

    MergeSort(arr,0,a-1);
    cout<<endl;
    cout<<"Sorted array is : "<<endl;
    printArray(arr,a);

    return 0;


}
