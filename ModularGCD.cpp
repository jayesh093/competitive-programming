#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

unsigned long long int	 gcd(unsigned long long int	 a, unsigned long long int	 b)
{
    if (a == 0 || b == 0)
       return 0;
    if (a == b)
        return a;
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}

int main()
{
    unsigned long long int test,A,B,N;
    cin>>test;
    while(test>0){

        cin>>A>>B>>N;
    if((unsigned long long int)(pow(A,N)+pow(B,N))==0 && (A-B)!=0)
    {
        cout<<A-B;
    }else if(B<=A){
        unsigned long long int	q=(pow(A,N)+pow(B,N));
      cout<<std::__gcd(q,(unsigned long long int)(A-B));
    }
    test--;
    }
    return 0;
}
