#include<stdio.h>

int main()
{
    int N,i,MAX,k;
    scanf("%d%d",&N,&k);
    int arr[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&arr[i]);
    }
    while(k>0)
    {
        MAX=0;
        for(i=0;i<N;i++)
        {
            MAX=(MAX>arr[i])? MAX:arr[i];
        }
        for(i=0;i<N;i++)
        {
            arr[i]=MAX-arr[i];

        }
    k--;
    }
    for(i=0;i<N;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
