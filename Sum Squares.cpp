#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int test,x,y,j,k,no1,no2,no3;
    double sum;
    cin>>test;
    while(test>0)
    {
        cin>>x>>y;
        sum=0;
        if(x < y)
        {
        for(int i=1;i<y;i++)
        {
            j=i-1;
            no1=(x+j)*(x+j);
            no2=(x+i)*(x+i);
            no3=no2-no1;
            sum+=(pow(no3,2));
        }
        cout<<sum<<endl;
        }
        else{
             k=1;
        while(1)
        {
            j=k-1;
            no1=(x-j)*(x-j);
            no2=(x-k)*(x-k);
            no3=no1-no2;
            sum+=(pow(no3,2));
            if(x-k==y)
            {
                break;
            }
                k++;
        }
        cout<<sum<<endl;
        }
        test--;
    }
    return 0;
}
